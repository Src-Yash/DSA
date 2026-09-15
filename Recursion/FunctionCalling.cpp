#include<iostream>
using namespace std;
// printing hello n number of time where n is the user input
void fun(int n){
   if(n==0) return;
   cout<<"hello yash"<<endl;
   fun(n-1);
}
int main(){
   int a;
   cin>>a;

   fun(a);
   
   return 0;  
}