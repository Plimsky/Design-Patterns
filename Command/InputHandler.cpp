#include "InputHandler.h"

InputHandler::InputHandler()
{
    m_keyboardMap['x'] = ControllerInput::X_BUTTON;
    m_keyboardMap['y'] = ControllerInput::Y_BUTTON;
    m_keyboardMap['a']  = ControllerInput::A_BUTTON;
    m_keyboardMap['b']  = ControllerInput::B_BUTTON;
}

void InputHandler::Handle()
{
    for (auto& [typeInput, command] : m_commandMap)
    {
        if (IsPressed(typeInput))
            command->Execute();
    }
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
