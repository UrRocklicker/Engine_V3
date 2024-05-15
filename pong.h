#include <cmath>

// Game objects and textures to be used

// Handles ball rotation
class Rotation {
private:
    double angle; // Angle in radians

public:

    Rotation() : angle(0.0) {}
    Rotation(double radians) : angle(radians) {}

    void setAngle(double radians) { angle = radians; }
    double getAngle() const { return angle; }

    void rotateBy(double radians) { angle += radians; }

    // Method to rotate a point (x, y) by the current angle
    void rotatePoint(double& x, double& y) const {
        double newX = x * cos(angle) - y * sin(angle);
        double newY = x * sin(angle) + y * cos(angle);
        x = newX;
        y = newY;
    }
};

// Background
const int width = 152;
const int height = 112;
Texture Background = GenerateBackground({40, 50, 100}, width, height);

const int board_x = Background.sizex;
const int board_y = Background.sizey;

// Walls
const int thickness = 3;
RGBColor wall_color(40, 50, 180);
Wall wall_left({0,0}, thickness, height, wall_color);
Wall wall_top({0,0}, width, thickness, wall_color);
Wall wall_right({width - thickness,0}, thickness, height, wall_color);
Wall wall_bottom({0,height - thickness}, width, thickness, wall_color);
std::vector<Wall> Walls = {wall_left, wall_top, wall_right, wall_bottom};

// balls, paddles, score
struct Ball
{
    Point pos;
    Texture image;
    Rotation angle;
    float speed;

    Ball(Point _pos, Texture _image, double _rotation, float _speed) : pos(_pos), image(_image), angle(_rotation), speed(_speed) {}
};

// Basic variables
bool playing = true;

// GameLoop return true or false to tell if win (?) or maybe separate win function
void GameLoop()
{
    Ball ball({70,50}, GenerateBackground({40,50,220}, 3, 3), 0.0, 0.0f);
    WriteToTexture(ball.image, GenerateBackground({40,50,180}, 1, 1), {1,1});

    // Initialize screen
    InitializeEngine();
    CursorVisible(false);

    Buffer buffer({width, height});
    WriteToBuffer(GenerateBackground({ {20,20,20}, {150,150,0} }, width, height), {0,0}, buffer);

    ClearScreen();

    WriteToBuffer(Background, {0,0}, buffer);
    WriteToBuffer(Walls, buffer);
    WriteToBuffer(ball.image, ball.pos, buffer);

    DrawBuffer(buffer);

    while(playing)
    {
        std::vector<char> current = CheckKeys();
        for(unsigned int i = 0; i < current.size(); i++)
        {
            switch(current[i])
            {
            case VK_ESCAPE:
                playing = false;
            }
        }
        Sleep(50);
    }

    // Update user input
    // Update enemy movement
    // Update ball movement

    // Check for collisions for each, comparing ball to paddles and walls
    // Check if the ball is behind one of the paddles, and score accordingly

    // Display screen, as well as update and display score at the top
    // If score is at goal (10 maybe?) end the game with win or lose condition
    // Display win or lose and then ask if want to play again

    system("cls");
    CursorVisible(true);
}
