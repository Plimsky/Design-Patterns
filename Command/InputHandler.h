#pragma once
#include <memory>
#include <unordered_map>
#include <stack>

#include "Commands/Command.h"


enum class ControllerInput
{
    NONE,
    X_BUTTON,
    Y_BUTTON,
    A_BUTTON,
    B_BUTTON,
};

class InputHandler
{
public:
    InputHandler();

    void Handle(const Actor& p_actor);
    bool IsPressed(const ControllerInput p_typeInput) const;
    void Pressing(const char p_value);

    void UndoAllCommands();

    template <typename T>
    void MapCommand(const ControllerInput& p_input)
    {
        static_assert(std::is_base_of_v<Command, T>);

        if (m_commandMap.find(p_input) != m_commandMap.end())
            return;

        m_commandMap.emplace(p_input, std::make_shared<T>());
    }

private:
    std::unordered_map<ControllerInput, std::shared_ptr<Command>> m_commandMap;
    std::unordered_map<int, ControllerInput> m_keyboardMap;

    std::stack<std::weak_ptr<Command>> m_stackOfCommands;

    ControllerInput m_pressingInput{ControllerInput::NONE};
};
