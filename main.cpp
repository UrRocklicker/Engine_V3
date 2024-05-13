#include "objects.h"
#include "engine.h"
#include "key_input.h"
#include "pong.h"
#include "textures.h"

int main()
{
    InitializeEngine();

    GameLoop();

    return 0;
}
