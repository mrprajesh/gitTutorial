//~~~START:Thu, 03-Mar-2022, 00:48:02 IST
//~~~Author:Rajesh Pandian M | mrprajesh.co.in
#include <bits/stdc++.h>
using namespace std;
int sumOf(int i, int h);
int diffOf(int i, int h);
int main(int argc, char* argv[]){
  std::cout << "Hello Dear Programmer! \n\n --cpp\n";
<<<<<<< HEAD
  std::cout<< "sum:" << sum(123+456) << '\n';
  std::cout<< "dif:" << diffOf(123,456) << '\n';
=======
  std::cout<< "sum:" << sumOf(123,456) << '\n';
>>>>>>> e82e261b309136440c4b4f7204bb7944eb943d54
  return 0;
}

int sumOf(int i, int j){
  return i+j;
}

int diffOf(int i, int h){
  return i+h;
}
