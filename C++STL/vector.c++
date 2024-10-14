#include<bits/stdc++.h>
using namespace std;
void vectorExplainer(){
vector<int> v;//this line create an empty container  v
v.push_back(1);//this line pushes 1 to the container v
v.emplace_back(2);//this will do the same thing as pushback but it creates dynamically and push 2 in a veector and it is faster
 vector<pair<int,int>> vec;
vec.push_back({5,8});
vec.emplace_back(6,7);//it assumes automatically as engraverd by curly braces


vector<int>vc(5,100);//this will create a container like this {100,100,100,100,100}
vector<int>vc1(5);//this will create {0,0,0,0,0}


vector<int>v1(5,20);
cout<<v1[3];
vector<int> v2(v1);//v 2 is a copy of v1 
}


//iterator
vector<int> v3;
vector<int>::iterator it= v3.begin();
//

//auto key word is used to automatically assign datatype
//.erase function in iterator
int main (){

    return 0;
}

