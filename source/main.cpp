#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <3ds.h>

#include "../include/game.hpp"

int main(int argc, char* argv[])
{
	gfxInitDefault();
	PrintConsole* console = consoleInit(GFX_TOP, NULL);

	printf("Hello, world!\n");

	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		// Your code goes here
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu

        if (kDown & KEY_A) {
            std::for_each(Daycare::games.begin(), Daycare::games.end(), [](const Daycare::game game) {
                printf("%s\n", game.name);
            });
        }
	}

	gfxExit();
	return 0;
}
