#include<bits/stdc++.h>
using namespace std;

int main (){
pair<int,int> p ={1,3};
cout<<p.first<<","<<p.second<<"\n";
pair<int,pair<int,int>> z ={1,{3,4}};
cout<<z.first<<","<<z.second.first<<","<<z.second.second<<"\n";
pair<int,int> arr[]= {{1,2},{3,4},{5,6}};
cout<<arr[1].first;
    return 0;
}


//pair is inside utility library and it is a data type