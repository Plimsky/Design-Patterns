#pragma once
#include <memory>

template <typename T>
class Singleton
{
public:
    static T& GetInstance()
    {
        static std::unique_ptr<T> instance = std::make_unique<T>();
        return *instance;
    }
    
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton) = delete;

protected:
    Singleton() = default;
};
