#pragma once
#include <memory>
#include <unordered_map>

#include "Model.h"

class FactoryModel
{
public:
    template <typename T>
    T& GetModel(const std::string& p_key)
    {
        static_assert(std::is_base_of_v<Model, T>);

        if (m_models.find(p_key) == m_models.end())
            m_models.emplace(p_key, std::make_unique<T>(p_key));

        return reinterpret_cast<T&>(*m_models[p_key]);
    }

    uint32_t GetSize() const;

private:
    std::unordered_map<std::string, std::unique_ptr<Model>> m_models;
};
