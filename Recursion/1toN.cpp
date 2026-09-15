#include<iostream>
using namespace std;
// using two parameters 
void print(int i,int n){
  if(i>n) return;
  cout<<i<<endl;
  print(i+1,n);   
}

int main(){
   print(1,5);
   
   return 0;  
}

// using 1 parmater then

// void afterCallPrint(int n){
//    if(n==0) return;
//    afterCallPrint(n-1);
//    cout<<n 
// }