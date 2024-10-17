#include<iostream>
using namespace std;

class Check{
  public: static int cv;
  int bv;
};
 int Check::cv= 25;
int main (){
    cout<<"Difference Between Static and Instance variable";

    Check obj;
    Check obj1;
   obj.cv= 35;//this is a static variable
    cout<<"This is static variable and it's value is:"<<obj.cv;
    cout<<"lets try to get the changed value"<<endl;
    obj1.cv=23;
     cout<<"Now it's value is:"<<obj1.cv;
obj.bv=34;
obj1.bv= 55;
cout<<"This is instance variable of first object:"<<obj.bv;
cout<<"This is instance variable of second object:"<<obj1.bv;

     




    return 0;

}