#include "objects.h"
#include "engine.h"
#include "key_input.h"
#include "pong.h"
#include "textures.h"

int main()
{
    //std::cin.get();
    //GameLoop();
    //BufferDrawWalls(Walls);

    Buffer buffer({10, 10});

    Texture blue = GenerateBackground({0, 0, 200}, 10, 10);
    Texture yellow = GenerateBackground({200, 200, 0}, 2, 2);

    WriteToBuffer(blue, {0,0}, buffer);
    WriteToBuffer(yellow, {3,3}, buffer);

    for(std::string write : buffer.Contents)
    {
        std::cout << write;
    }

    return 0;
}
