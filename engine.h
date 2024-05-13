#include <windows.h>
#include <string>
#include <iostream>
#include <sstream>

#include "objects.h"

// \033 starts escape sequence
// [ starts the control sequence introducer
// next is the sequences, separated by ;
// m ends the sequence, then followed by the text
// the last bit could be empty, or used to return to default

/*
Example colored text using ANSI escape codes:

    std::cout << "\033[32mGreen text\033[0m\n";
    std::cout << "\033[1;31mBold red text\033[0m\n";
    std::cout << "\033[38;2;100;100;100mCustom Gray text\033[0m\n";
    RGBTEXT("6","127","210", "Cheese soup" << char(219);

    Example for Todo list (in view)

*/

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

inline void RGBText(int r, int g, int b, std::string text)
{
    std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m" << text << "\033[0m";
}

inline void RGBText(RGBColor color, std::string text)
{
    std::cout << "\033[38;2;" << color.r << ";" << color.g << ";" << color.b << "m" << text << "\033[0m";
}

inline void Display(Texture T)
{
    for(unsigned int i = 0; i < T.sizex * T.sizey * 3; i+=3)
    {
        RGBText(T.texture[i+0], T.texture[i+1], T.texture[i+2], "\u2588\u2588");
        if((i + 3) % (T.sizex * 3) == 0 && i != 0)
        {
            std::cout << std::endl;
        }
    }
}

inline void Display(Texture T, std::string characters)
{
    for(unsigned int i = 0; i < T.sizex * T.sizey * 3; i+=3)
    {
        RGBText(T.texture[i+0], T.texture[i+1], T.texture[i+2], characters);
        if((i + 3) % (T.sizex * 3) == 0 && i != 0)
        {
            std::cout << std::endl;
        }
    }
}

inline void WriteToTexture(Texture& target, Point pos, Texture hitman)
{
    if(hitman.sizex > target.sizex ||
       hitman.sizey > target.sizey ||
       pos.x < 0 || static_cast<unsigned int>(pos.x) > target.sizex ||
       pos.y < 0 || static_cast<unsigned int>(pos.y) > target.sizey ||
       pos.x + hitman.sizex > target.sizex ||
       pos.y + hitman.sizey > target.sizey)
    {
        std::cout << "Hitman has missed the target\n";
        return;
    }
    else
    {
        for(unsigned int i = 0; i < hitman.sizey; i++)
        {
            for(unsigned int j = 0; j < hitman.sizex * 3; j+=3)
            {
                target.texture[j + pos.x * 3 + ((i + pos.y) * target.sizex * 3)    ] = hitman.texture[j    ];
                target.texture[j + pos.x * 3 + ((i + pos.y) * target.sizex * 3) + 1] = hitman.texture[j + 1];
                target.texture[j + pos.x * 3 + ((i + pos.y) * target.sizex * 3) + 2] = hitman.texture[j + 2];
            }
        }
    }
}

inline void MoveCursor(int x, int y)
{
    SetConsoleCursorPosition(hConsole, {static_cast<short int>(x), static_cast<short int>(y)});
}

inline void MoveCursor(Point point)
{
    SetConsoleCursorPosition(hConsole, {static_cast<short int>(point.x), static_cast<short int>(point.y)});
}

inline void BufferDisplay(Texture T, std::string characters)
{
    std::stringstream buffer;

    for(unsigned int i = 0; i < T.sizex * T.sizey * 3; i+=3)
    {
        buffer << "\033[38;2;" << T.texture[i+0] << ";" << T.texture[i+1] << ";" << T.texture[i+2] << "m" << characters << "\033[0m";
        if((i + 3) % (T.sizex * 3) == 0 && i != 0)
        {
            buffer << std::endl;
        }
    }

    std::cout << buffer.str();
}

inline void BufferDisplay(Texture T)
{
    std::stringstream buffer;

    for(unsigned int i = 0; i < T.sizex * T.sizey * 3; i+=3)
    {
        buffer << "\033[38;2;" << T.texture[i+0] << ";" << T.texture[i+1] << ";" << T.texture[i+2] << "m\u2588\u2588\033[0m";
        if((i + 3) % (T.sizex * 3) == 0 && i != 0)
        {
            buffer << std::endl;
        }
    }

    std::cout << buffer.str();
}

inline void BufferDraw(Texture T, Point position)
{
    std::stringstream buffer;
    MoveCursor(position.x * 2, position.y);

    for(unsigned int i = 0; i < T.sizex * T.sizey * 3; i+=3)
    {
        buffer << "\033[38;2;" << T.texture[i+0] << ";" << T.texture[i+1] << ";" << T.texture[i+2] << "m\u2588\u2588\033[0m";
        if((i + 3) % (T.sizex * 3) == 0 && i != 0)
        {
            buffer << std::endl;
            for(int i = 0; i < position.x * 2; i++)
            {
                buffer << "\033[C";
            }
        }
    }

    std::cout << buffer.str();
}

inline void BufferDrawWalls(std::vector<Wall> walls)
{
    for(Wall wall : walls)
    {
        std::stringstream buffer;
        MoveCursor(wall.startpos.x * 2, wall.startpos.y);

        for(int i = 0; i < wall.width * wall.height * 3; i+=3)
        {
            buffer << "\033[38;2;" << wall.image.texture[i+0] << ";" << wall.image.texture[i+1] << ";" << wall.image.texture[i+2] << "m\u2588\u2588\033[0m";
            if((i + 3) % (wall.width * 3) == 0)
            {
                buffer << std::endl;
                for(int i = 0; i < wall.startpos.x * 2; i++)
                {
                    buffer << "\033[C";
                }
            }
        }

        std::cout << buffer.str();
    }
}

inline std::string RGBString(Texture T, int index)
{
    int i = index * 3;
    return "\033[38;2;" + std::to_string(T.texture[i+0]) + ";" + std::to_string(T.texture[i+1]) + ";" + std::to_string(T.texture[i+2]) + "m\u2588\u2588\033[0m";
}

inline void WriteToBuffer(Texture T, Point pos, Buffer& buffer)
{
    int offset = pos.x + (pos.y * buffer.Size.x);
    for(unsigned int i = 0; i < T.sizey; i++)
    {
        for(unsigned int j = 0; j < T.sizex; j++)
        {
            buffer.write(j + offset, RGBString(T, j));
        }
        offset = pos.x + ((pos.y + i + 1) * buffer.Size.x);
    }

    for(int a = 0; a < buffer.Size.y; a++)
    {
        if(buffer.Contents[buffer.Size.x - 1 + (buffer.Size.x * a)][buffer.Contents[buffer.Size.x - 1 + (buffer.Size.x * a)].size() - 1] != '\n')
        {
            buffer.append(buffer.Size.x - 1 + (buffer.Size.x * a), "\n");
        }
    }
}

inline void WriteToBuffer(std::vector<Wall> Walls, Buffer& buffer)
{
    for(unsigned int w = 0; w < Walls.size(); w++)
    {
        Wall wall = Walls[w];
        Point pos = wall.startpos;
        Texture T = wall.image;

        int offset = pos.x + (pos.y * buffer.Size.x);
        for(unsigned int i = 0; i < T.sizey; i++)
        {
            for(unsigned int j = 0; j < T.sizex; j++)
            {
                buffer.write(j + offset, RGBString(T, j));
            }
            offset = pos.x + ((pos.y + i + 1) * buffer.Size.x);
        }

        for(int a = 0; a < buffer.Size.y; a++)
        {
            if(buffer.Contents[buffer.Size.x - 1 + (buffer.Size.x * a)][buffer.Contents[buffer.Size.x - 1 + (buffer.Size.x * a)].size() - 1] != '\n')
            {
                buffer.append(buffer.Size.x - 1 + (buffer.Size.x * a), "\n");
            }
        }
    }
}

inline void DrawBuffer(Buffer& buffer)
{
    std::stringstream write;
    for(std::string line : buffer.Contents)
    {
        write << line;
    }
    std::cout << write.str();
}

inline void drawLine(Point p1, Point p2) {
    int dx = std::abs(p2.x - p1.x);
    int dy = std::abs(p2.y - p1.y);
    int sx = p1.x < p2.x ? 1 : -1;
    int sy = p1.y < p2.y ? 1 : -1;
    int err = dx - dy;

    while (true) {
        // Process current square
        COORD P = {static_cast<short int>(p1.x * 2), static_cast<short int>(p1.y)};
        SetConsoleCursorPosition(hConsole, P);
        RGBText(0, 255, 0, "\u2588\u2588");

        if (p1.x == p2.x && p1.y == p2.y) break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            p1.x += sx;
        }
        if (e2 < dx) {
            err += dx;
            p1.y += sy;
        }
    }
}

inline Texture GenerateBackground(RGBColor color, unsigned int width, unsigned int height)
{
    std::vector<unsigned int> background = {};

    for(unsigned int i = 0; i < width * height; i++)
    {
        background.push_back(color.r);
        background.push_back(color.g);
        background.push_back(color.b);
    }
    return Texture(width, height, background);
}

inline Texture GenerateBackground(std::vector<RGBColor> colors, unsigned int width, unsigned int height)
{
    std::vector<unsigned int> background = {};

    for(unsigned int i = 0; i < width * height; i++)
    {
        for(unsigned int j = 0; j < colors.size(); j++)
        {
            background.push_back(colors[j].r);
            background.push_back(colors[j].g);
            background.push_back(colors[j].b);
        }
    }
    return Texture(width, height, background);
}

inline Texture GenerateBackground(Mode mode, std::vector<RGBColor> colors, unsigned int width, unsigned int height)
{
    std::vector<unsigned int> background = {};

    for(unsigned int i = 0; i < width * height; i++)
    {
        for(unsigned int j = 0; j < colors.size(); j++)
        {
            for(int l = 0; l < mode; l++)
            {
                background.push_back(colors[j].r);
                background.push_back(colors[j].g);
                background.push_back(colors[j].b);
            }
        }
    }
    return Texture(width, height, background);
}

inline void DrawPixel(Texture image, Point imgpt)
{
    RGBText(image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)], image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)+1], image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)+2], "\033[D\033[D\u2588\u2588\033[C\033[C");
}

inline void DrawPixelAtPoint(Texture image, Point imgpt, Point point)
{
    MoveCursor(point);
    RGBText(image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)], image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)+1], image.texture[(imgpt.x*3/2)+(imgpt.y*image.sizey*3)+2], "\033[D\033[D\u2588\u2588\033[C\033[C");
}

inline void DrawPixelAtPoint(RGBColor color, Point point)
{
    MoveCursor(point);
    RGBText(color, "\u2588\u2588");
}

inline bool isColliding(const Player& player, Wall& wall) {
    // Calculate player's center
    float playerCenterX = player.pos.x + 1.0; // Adjusted for player's size
    float playerCenterY = player.pos.y + 0.5; // Adjusted for player's size

    // Calculate bounds of the wall
    float wallLeft = static_cast<float>(wall.startpos.x * 2);
    float wallRight = static_cast<float>(wall.startpos.x * 2 + wall.width * 2);
    float wallTop = static_cast<float>(wall.startpos.y);
    float wallBottom = static_cast<float>(wall.startpos.y + wall.height);

    // Check if player's center is within wall bounds
    return playerCenterX >= wallLeft &&
           playerCenterX <= wallRight &&
           playerCenterY >= wallTop &&
           playerCenterY <= wallBottom;
}

inline void MovePlayer(int dx, int dy, Player &player, std::vector<Wall>& walls, Texture background)
{
    DrawPixel(background, player.pos);
    Point newPos = {player.pos.x + dx * 2, player.pos.y + dy};

    for (Wall& wall : walls) {
        if (isColliding({newPos, player.color}, wall)){
            DrawPixelAtPoint(player.color, player.pos);
            return;
        }
    }

    player.pos = newPos;

    DrawPixelAtPoint(player.color, player.pos);
}

inline void ClearScreen()
{
    system("cls");
}

inline void InitializeEngine()
{
    system("chcp 65001  > nul");
    system("cls");
}

inline void CursorVisible(bool visible)
{
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = visible;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}
