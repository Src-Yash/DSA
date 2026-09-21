#include<iostream>
using namespace std;

void print(int n){
   if(n==0) return; // base call
   cout<<n<<endl;   // kaam
   print(n-1);      // call
}

int main(){
   int a;
   cin>>a;
   print(a);
   
   return 0;  
}