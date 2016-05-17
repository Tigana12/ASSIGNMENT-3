
class Lemon : public CitrusFruit {

public:

Lemon(float ph) : CitrusFruit(ph){}

const char * getName(){ return "Lemon Fruit";}

float getPh(){ return ph * 2.0; }

};
