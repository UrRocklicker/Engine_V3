#ifndef OBJECTS_H
#define OBJECTS_H

#include <vector>
#include <string>

struct Point {
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y) {}
};

struct Buffer {
    Point Size;
    std::vector<std::string> Contents;

    void initializeContents()
    {
        Contents.resize(Size.x * Size.y, "");
    }

    Buffer(Point _Size) : Size(_Size)
    {
        initializeContents();
    }

    void write(int i, const std::string& value)
    {
        if (i >= 0 && i < Size.x * Size.y)
        {
            Contents[i] = value;
        }
    }

    void append(int i, const std::string& value)
    {
        if(i >= 0 && i < Size.x * Size.y)
        {
            Contents[i] += value;
        }
    }
};

struct Texture{
    unsigned int sizex;
    unsigned int sizey;
    std::vector<unsigned int> texture;

    Texture(unsigned int x, unsigned int y, std::vector<unsigned int> t) : sizex(x), sizey(y), texture(t){}

};

struct RGBColor
{
    int r;
    int g;
    int b;

    RGBColor(int _r, int _g, int _b) : r(_r), g(_g), b(_b) {}
};

enum Mode
{
    MONO = 1,
    DUO,
    TRIO,
    QUATTRO,
    QUINQUE,
    SEX,
    SEPTEM,
    OCTO,
    NOVEM,
    DECEM
};

Texture GenerateBackground(RGBColor color, unsigned int width, unsigned int height);

struct Player{
    Point pos;
    RGBColor color;

    Player(Point _pos, RGBColor _color) : pos({_pos.x * 2, _pos.y}), color(_color) {}
};

struct Wall
{
    Point startpos;
    int width;
    int height;
    RGBColor color;
    Texture image;

    Wall(Point _startpos, int _width, int _height, RGBColor _color) : startpos(_startpos), width(_width), height(_height), color(_color), image(GenerateBackground(_color, _width, _height)) {}
};

#endif
