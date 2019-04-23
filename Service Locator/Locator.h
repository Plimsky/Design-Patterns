#pragma once

#include <memory>
#include <optional>
#include <string>
#include <unordered_map>

#include "IService.h"

typedef std::optional<std::shared_ptr<IService>> OptionalService;

class Locator
{
public:
    static auto GetService(const std::string& p_name) { return m_services[p_name]; }

    static void Provide(const std::string& p_name, std::shared_ptr<IService> p_service)
    {
        if (m_services.find(p_name) != m_services.end())
            return;

        m_services.emplace(p_name, p_service);
    }

private:
    inline static std::unordered_map<std::string, OptionalService> m_services;
};

// std::unordered_map<std::string, OptionalService> Locator::m_services;
