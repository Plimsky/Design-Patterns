#include <conio.h>
#include <iostream>

#include "InputHandler.h"
#include "Commands/JumpCommand.h"
#include "Commands/AttackCommand.h"

int main()
{
	char value;
    InputHandler inputHandler{};
    const Actor player{};
    
    inputHandler.MapCommand<JumpCommand>(ControllerInput::X_BUTTON);
    inputHandler.MapCommand<AttackCommand>(ControllerInput::Y_BUTTON);

    while ((value = _getch()) != 27)
    {
        inputHandler.Pressing(value);
        inputHandler.Handle(player);

        if (value == 'u')
            inputHandler.UndoAllCommands();
    }

    return 0;
}
