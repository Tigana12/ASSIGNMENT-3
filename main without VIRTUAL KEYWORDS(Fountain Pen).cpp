#include <iostream>

#include <string>



class Pen {

std::string pen_name;

public:

Pen(std::string pen_name = "Pen"){


pen_name = pen_name;// removal of 'this->' part brings about no difference in compilation

}


std::string getName(){

return pen_name;

}

 std::string drawLine();

 std::string drawCircle();

};

std::string Pen::drawLine(){

return getName().append(" draws a line.");

}

std::string Pen::drawCircle(){

return getName().append(" draws a circle.");

}

class FountainPen : public Pen {

public:

FountainPen(std::string pen_name = "FountainPen")

: Pen(pen_name) {}// the use of this constructor does not alter the output of the program

FountainPen() : Pen(std::string("FountainPen")){}

 std::string drawLine();

 std::string drawCircle();

};

std::string FountainPen::drawLine(){

return getName().append(" draws a line.");

}

std::string FountainPen::drawCircle(){

return getName().append(" draws a circle.");

}

class RollerBallPen : public Pen{

public:

RollerBallPen(std::string pen_name)

: Pen(pen_name) {}

RollerBallPen() : Pen(std::string("RollerBallPen")){}

 std::string drawLine() {

return getName().append(" draws a line.");

 }

 std::string drawCircle(){

return getName().append(" draws a circle.");

}

};


using namespace std;


void WriteWithPen(Pen &pen){

cout << pen.drawLine() << endl;

cout << pen.drawCircle() << endl;

 }



int main(){

FountainPen fp;

WriteWithPen(fp);
RollerBallPen rbp("A Pen that Uses a Roller Ball");

WriteWithPen(rbp);

Pen pen;

WriteWithPen(pen);

}
