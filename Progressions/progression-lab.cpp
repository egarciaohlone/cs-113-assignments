#include <iostream>

int a(int a0, int d, int i)
{
  return d*i + a0;
}

int recurrencea(int anminusone, int d)
{
  return anminusone + d;
}

int fibb(int n)
{
  if(n ==0 || n == 1){
    return 1;
  }
  return n*fibb(n-1);
}

int main()
{
  for(int i=0; i<= 5; i++){
    std::cout << i << std::endl;
  }

  for(int i=0; i<= 5; i++){
    std::cout << a(17, 3, i) << std::endl;

  }

  int a = 17;
  std::cout << a << std::endl;
  for(int i=0; i<5; i++){
    std::cout << recurrencea(a, 3);
    a = recurrencea(a, 3);

  }

  for(int i=0; i<6; i++){
    std::cout << fibb(i);
  }

  return 0;
}