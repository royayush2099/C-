#ifndef MYHEADER_H//USED TO PREVENT MULTIPLE INCLUSION THAT IS 
#define MYHEADER_H
//function declaraion
void printMessage();
//class declaration 

class  MyClass{
public: int value;
           void display();
};
#endif 


/*Include Guard: The #ifndef,
// #define, and #endif are used to prevent multiple inclusions of the header file,
// which can lead to redefinition errors*/