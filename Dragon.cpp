#include <string>
#include "Dragon.h"
using std::string;

Dragon::Dragon(): name("NoName"), scaleColor("NoColor"), hp(0) {}

Dragon::Dragon(string name, string scaleColor,int hp) : name(name), scaleColor(scaleColor), hp(hp)
{

}

string Dragon::getName(){return name;}
string Dragon::getScaleColor(){return scaleColor;}
int Dragon::getHP(){return hp;}

Dragon::Dragon(const Dragon& other): name(other.name), scaleColor(other.scaleColor), hp(other.hp){
}

Dragon& Dragon::operator=(const Dragon& other){
    if(this == &other){return *this;}

    name = other.name;
    scaleColor = other.scaleColor;
    hp = other.hp;
    
    return *this;
}


