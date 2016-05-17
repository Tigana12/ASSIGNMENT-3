#ifndef 
#define

class Orange : public CitrusFruit {

public:

Orange(float ph) : CitrusFruit(ph){}

const char * getName(){ return "Orange Fruit";}

float getPh(){ return ph * 0.5; }

};


#endif
