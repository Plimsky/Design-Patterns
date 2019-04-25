#include "InputHandler.h"
#include <iostream>

InputHandler::InputHandler()
{
    m_keyboardMap['x'] = ControllerInput::X_BUTTON;
    m_keyboardMap['y'] = ControllerInput::Y_BUTTON;
    m_keyboardMap['a']  = ControllerInput::A_BUTTON;
    m_keyboardMap['b']  = ControllerInput::B_BUTTON;
}

void InputHandler::Handle(const Actor& p_actor)
{
    for (auto& [typeInput, command] : m_commandMap)
    {
        if (IsPressed(typeInput)) 
		{
            m_stackOfCommands.push(command);
            command->Execute(p_actor);
		}
    }
}

void InputHandler::UndoAllCommands()
{
    while (!m_stackOfCommands.empty())
	{
        auto commandPtr = m_stackOfCommands.top();
        commandPtr.lock()->Undo();
        m_stackOfCommands.pop();
	}

    std::cout << "Command stack size : " << m_stackOfCommands.size() << '\n';
}

bool InputHandler::IsPressed(const ControllerInput p_typeInput) const
{
    return p_typeInput == m_pressingInput;
}

void InputHandler::Pressing(const char p_value)
{
    if (m_keyboardMap.find(p_value) == m_keyboardMap.end())
        m_pressingInput = ControllerInput::NONE;
    else
        m_pressingInput = m_keyboardMap[p_value];
}
