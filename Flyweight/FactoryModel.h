#pragma once
#include "Model.h"
#include <memory>
#include <unordered_map>

class FactoryModel
{
public:
    template <typename T>
    T* GetModel(const std::string& p_key)
    {
        if (m_models.find(p_key) == m_models.end())
            m_models.emplace(p_key, std::make_unique<Model>());

        static_assert(std::is_base_of_v<Model, T>);

        return m_models[p_key].get();
    }

private:
    std::unordered_map<std::string, std::unique_ptr<Model>> m_models;
};
