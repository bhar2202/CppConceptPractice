#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class redPanda
{
private:
    int age;
    string name;
public:
    redPanda(int age, string name);
    int getAge(){return age;}
    string getName(){return name;}
    ~redPanda();
};

redPanda::redPanda(int age, string name): age(age), name(name) 
{
}

redPanda::~redPanda()
{
}

bool operator<( redPanda& panda1, redPanda& panda2){
    return panda1.getAge() < panda2.getAge();
}

int main(){
    vector<redPanda> pandaList;
    int age = 0;
    string name = "";


    while(age != -1){
        cout << "Enter age and name of panda (-1 to exit): ";
        cin >> age;
        if(age == -1){
            break;
        }
        cin >> name;
        redPanda panda(age,name);
        pandaList.push_back(panda);

    }

    cout << "Here are the pandas, sorted by age:" << endl;

    sort(pandaList.begin(),pandaList.end());

    for(int i = 0;i < pandaList.size(); i++){
        cout << pandaList.at(i).getName() << ": " << pandaList.at(i).getAge() << endl;
    }

    return 0;
}
