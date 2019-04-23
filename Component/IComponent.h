#pragma once

class IComponent
{
public:
    virtual ~IComponent() = default;
    virtual void Update() = 0;
};