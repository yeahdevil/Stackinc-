#include<iostream>
#include "Stack.h"
using namespace std;

int main(){
   Stack <int> s2;
   Stack <int> s1;
   Stack <int> s3;
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);
   s1.pop();
   s1.pop();
   s1.pop();
   s1.stackSize();
}
