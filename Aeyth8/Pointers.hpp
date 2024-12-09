#pragma once

/*

A special macro/function table written by Aeyth8 for easy pointer calls that universally works with any SDK generated with Dumper-7

Manifest V1.0

*/

#include "../pch.h"

// UEngine Pointer (Local)
extern inline SDK::UEngine* Engine{nullptr};

// UWorld Pointer (Local)
extern inline SDK::UWorld* World{nullptr};

// UKismetSystemLibrary Pointer (Local)
extern inline SDK::UKismetSystemLibrary* KismetSys{nullptr};

// Global Base Address (GBA)
extern inline uintptr_t GBA{0};

inline void Log(const std::string& MSG) {
    std::cout << MSG << std::endl;
}

// An easy template to construct new threads.
static inline DWORD WINAPI ConstructThread(LPVOID Function) {
    HANDLE Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Function, nullptr, 0, 0);
    if (Thread != nullptr) CloseHandle(Thread);
    return 0;
}


// Checks if a pointer is valid, if null, the pointer class is logged.
inline static void IsNull(const auto & ptr, const std::string & log) {
    if (ptr == nullptr) Log(log);
}

// UWorld::GetWorld()
inline SDK::UWorld* UWorld() {
    auto A = SDK::UWorld::GetWorld();
    IsNull(A, "UWorld is a null pointer!");
    return A;
}

// UEngine::GetEngine()
inline SDK::UEngine* UEngine() {
    auto E = SDK::UEngine::GetEngine();
    IsNull(E, "UEngine is a null pointer!");
    return E;
}

// UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->APlayerController
inline SDK::APlayerController* Player0() {
    return UWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
}

// UKismetSystemLibrary::GetDefaultObj()
inline SDK::UKismetSystemLibrary* UKismetSys() {
    return SDK::UKismetSystemLibrary::GetDefaultObj();
}

// UKismetStringLibrary::Conv_StringToName(L"")
inline SDK::FName FString2FName(const SDK::FString & Str) {
    return SDK::UKismetStringLibrary::Conv_StringToName(Str);
}

// Executes a console command from the retrieved pointers.
inline static void CMD(const std::wstring& Command) {
    UKismetSys()->ExecuteConsoleCommand(UWorld(), Command.c_str(), Player0());
}

// A very basic template to reimplement the editor console which may or may not work in all cases.
inline static void ConstructUConsole() {
    // Sets the console toggling key to be Tilde ~ 
    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = FString2FName(L"Tilde");

    // Spawns a UObject, specifically a console object.
    SDK::UObject* ConsoleObj = SDK::UGameplayStatics::SpawnObject(UEngine()->ConsoleClass, UEngine()->GameViewport);

    // Sets the currently (null) console, and replaces it with our newly constructed one
    UEngine()->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(ConsoleObj);
}