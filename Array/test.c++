#include<iostream>
using namespace std;

 int bin_src(int arr[],int low  , int high ,int key ){
    while(low<=high){
      int mid = low + (high-low)/2;
  
    if (arr[mid]==key)
       return mid;

    if(arr[mid]<key)
    low=mid+1;
     else
     high=mid+1;
 }
 return -1;
 }
 int main(){
    int arr[]= {23,34,55,66,77};
    int key=66;
    int n =sizeof(arr)/sizeof(arr[0])-1;
  int out= bin_src(arr,0,n,key);
   if(out==-1)
    cout<<"Number is not present in array\n";

    else
    cout<<key<<"is at"<<out<<"th index";
    

    return 0;
 }