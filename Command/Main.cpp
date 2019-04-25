#include <conio.h>
#include <iostream>

#include "InputHandler.h"
#include "Commands/JumpCommand.h"
#include "Commands/AttackCommand.h"

int main()
{
	char value;

    InputHandler inputHandler{};
    inputHandler.MapCommand<JumpCommand>(ControllerInput::X_BUTTON);
    inputHandler.MapCommand<AttackCommand>(ControllerInput::Y_BUTTON);

    while ((value = _getch()) != 27)
    {
        inputHandler.Pressing(value);
        inputHandler.Handle();
    }

    return 0;
}
