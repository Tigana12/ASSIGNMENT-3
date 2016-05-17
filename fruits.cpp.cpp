#include <iostream>

using namespace std;

int main()
{
    Lemon lemon(2.0);
    CitrusFruit &rlemon = lemon;
    CitrusFruit *plemon= &lemon;

    cout<<"Lemon is a"<<lemon.getName()
        <<"and has a pH"<<lemon.getPh()<<endl;
    cout<<"rlemon is a"<<rlemon.getName()
        <<"and has pH"<<rlemon.getPh()<<endl;
    cout<<"plemon is a"<<plemon->getName()
        <<"and has a pH"<<plemon->getPh()<<endl;

}
class Orange : public CitrusFruit {

public:

Orange(float ph) : CitrusFruit(ph){}

const char * getName(){ return "Orange Fruit";}

float getPh(){ return ph * 0.5; }

};

void PrintTheFruits(CitrusFruit &fruit){

cout << "fruit is a " << fruit.getName()

<< " and has a pH " << fruit.getPh() << endl;

}