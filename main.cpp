#include "objects.h"
#include "engine.h"
#include "key_input.h"
#include "pong.h"
#include "textures.h"

int main()
{
    // PROJECT FAILED: Too much going on, bad structure, redundant objects, stack overflows, etc.
    // Problem that ended it is that the buffer cannot have too many objects added, so you cannot even complete
    // a game board for pong. So, on to Engine V4.

    InitializeEngine();

    GameLoop();

    return 0;
}
