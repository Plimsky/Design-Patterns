#include <iostream>

#include "Locator.h"
#include "ConsoleAudio.h"

int main()
{
    Locator::Provide("ConsoleAudio", std::make_shared<ConsoleAudio>());

    const auto optionalAudioConsoleService  = Locator::GetService("ConsoleAudio");
    const auto sharedPtrAudioConsoleService = Locator::GetService<ConsoleAudio>("ConsoleAudio");

    const auto optionalInexistantService  = Locator::GetService("xService");
    const auto sharedPtrInexistantService = Locator::GetService<ConsoleAudio>("xService");

    if (optionalAudioConsoleService.has_value())
    {
        auto consoleSharedPtr = std::static_pointer_cast<ConsoleAudio>(optionalAudioConsoleService.value());
        consoleSharedPtr->PlaySound(1);
        consoleSharedPtr->StopSound(1);
        consoleSharedPtr->StopAllSounds();
    }

    if (sharedPtrAudioConsoleService != nullptr)
    {
        sharedPtrAudioConsoleService->PlaySound(1);
        sharedPtrAudioConsoleService->StopSound(1);
        sharedPtrAudioConsoleService->StopAllSounds();
    }

    if (!optionalInexistantService.has_value())
        std::cout << "No service\n";

    if (sharedPtrInexistantService == nullptr)
        std::cout << "No service\n";

    return 0;
}
