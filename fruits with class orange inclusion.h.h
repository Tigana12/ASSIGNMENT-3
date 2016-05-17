#include <iostream>
#include "citrus.h"
#include "lemon.h"
#include "orange.h"
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
