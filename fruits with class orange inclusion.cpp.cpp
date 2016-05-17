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
	
	Lemon le1(1.4), le2(1.5), le3(1.234);
	Orange or1(0.4), or2(0.3), or3(0.5);
	CitrusFruit *cfruits[] = {&le1, &le2, &le3, &or1, &or2, &or3};
	
	for(int i = 0; i < 6; i++)
		cout << cfruits[i]->getName() << " has a pH "
	<< cfruits[i]->getPh() << endl;

}
