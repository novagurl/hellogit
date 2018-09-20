#include<iostream>
using namespace std;
#include "data.h"

int main ()

class data
{
private: //data members
  int x;
  float y;

public:
  data()

  {
    x = 0;
    y = 0.0;
  }

  data (int a, float b)

  {
    x = a;
    y = b;
  }

  int getx()

  {
    return x;
  }

    float gety()

{
  return y;
}


void setx(int a)

{
  x = a;
}
void sety(float b)

{
  y = b;
}

}; //end class
