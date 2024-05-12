#include "objects.h"
#include "engine.h"
#include "key_input.h"
#include "pong.h"
#include "textures.h"

int main()
{
    InitializeEngine();

    std::vector<RGBColor> GreyScale = { {0,0,0}, {64,64,64}, {128,128,128}, {192,192,192}, {255,255,255} };
    std::vector<RGBColor> Colors = { {0,0,200}, {40,0,160}, {80,0,120}, {120,0,80}, {160,0,40}, {200,0,0}, {160,0,40}, {120,0,80}, {80,0,120}, {40,0,160} };
    for(int i = 1; i <= 10; i++)
    {
        Texture tex = GenerateBackground(static_cast<Mode>(i), GreyScale, 61, 62);
        std::cout << i << std::endl;
        BufferDisplay(tex);
    }
    //GameLoop();

    return 0;
}
