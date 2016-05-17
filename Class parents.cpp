class Parent {

2 public:

3 virtual const char * getName(){ return "Parent"; }

4 };

5 class Child : public Parent {

6 public:

7 virtual const char * getName(){ return "Child"; }

8 };

9 int main(){

10 Child child;

11 Parent &cParent = child;

12 std::cout << "cParent is a " << cParent.getName() << std::endl;

13 return 0;

14 }