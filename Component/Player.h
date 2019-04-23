#pragma once
#include <memory>
#include <string>

#include "IComponent.h"
#include <unordered_map>

typedef std::unique_ptr<IComponent> UniqueComponent;

class Player
{
public:
    template<typename T>
    void AddComponent(const std::string& p_name)
    {
        static_assert(std::is_base_of_v<IComponent, T>);

        if (!ComponentExists(p_name))
            m_components.emplace(p_name, std::make_unique<T>());
    }

    void RemoveComponent(const std::string& p_name);
    bool ComponentExists(const std::string& p_name);
    void Update() const;

private:
     std::unordered_map<std::string, UniqueComponent> m_components;
};
