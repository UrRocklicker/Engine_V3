bool KeyPressed(char key)
{
    short state = GetAsyncKeyState(key);

    return (state & 0x8000) != 0;
}

std::vector<char> CheckKeys()
{
    std::vector<char> package = {};
    std::string keys = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    keys += char(VK_ESCAPE); // Concatenate every virtual key that you want with the string keys

    for(unsigned int i = 0; i < keys.size(); i++)
    {
        if(KeyPressed(keys[i]))
        {
            package.push_back(keys[i]);
        }
    }

    return package;
}
