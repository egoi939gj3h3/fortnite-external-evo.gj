#include <Windows.h>
#include <iostream>
#include "render/render.h"
#include "cheat/esp/esp.h"
auto main() -> int //memez
{
	//made by diddy with love:) xxx

	driver::find_driver();
	// make sure this is the correct overlay
	ProcId = driver::find_process((L"FortniteClient-Win64-Shipping.exe"));
	BaseId = driver::find_image();
	if (Debug::PrintPointers) {
		Util::PrintPtr("ProcessId: ", ProcId);
		Util::PrintPtr("BaseId: ", BaseId);
	}

	Render::CreateOverlay();
	Render::DirectXInit();
	Render::MainLoop();
}
