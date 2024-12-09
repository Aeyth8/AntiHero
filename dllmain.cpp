#include "pch.h"

void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle typedefined as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("MHUR.exe");

	AllocConsole();
	FILE* Console;
	freopen_s(&Console, "CONOUT$", "w", stdout);
	freopen_s(&Console, "CONIN$", "r", stdin);

	Log("GAME INITIALIZED");

	// Allocates local pointers
	Engine = UEngine(); World = UWorld(); KismetSys = UKismetSys();

	ConstructUConsole();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)Init, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);


	return TRUE;
}