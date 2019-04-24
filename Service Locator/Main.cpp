#include "Locator.h"
#include "ConsoleAudio.h"
#include <iostream>

int main()
{
    const auto consoleAudio = std::make_shared<ConsoleAudio>();
    Locator::Provide("ConsoleAudio", consoleAudio);
    auto audioConsoleService = Locator::GetService("ConsoleAudio");
	auto inexistantService = Locator::GetService("xService");

    if (audioConsoleService.has_value())
    {
        auto consoleSharedPtr = std::static_pointer_cast<ConsoleAudio>(audioConsoleService.value());
        consoleSharedPtr->PlaySound(1);
        consoleSharedPtr->StopSound(1);
        consoleSharedPtr->StopAllSounds();
    }

	if (!inexistantService.has_value())
		std::cout << "No service\n";

    return 0;
}
