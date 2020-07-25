#include <iostream>
using namespace std;

  void func(){
      static int a = 0;
      int b = 0;
      a++;
      b++;

    cout<<"a = "<<a<<" and b = "<<b<<endl;



  }
  //A function can be called many times
  int main(){
      func();
      func();
      func();
      func();
      func();
      func();
  }
