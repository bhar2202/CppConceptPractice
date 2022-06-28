#include <string>
using std::string;

class Dragon
{
private:
    string name;
    string scaleColor;
    int hp;
public:
    Dragon();
    Dragon(string name, string scaleColor,int hp);
    Dragon(const Dragon& other);
    Dragon& operator=(const Dragon& other);
    string getName();
    string getScaleColor();
    int getHP();
};




