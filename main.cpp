#include<iostream>
using namespace std;

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

  int get x();

  {
    return x;
  }

    float get y()

{
  return y;
}

void set x(int a)

{
  x = a;
}
void set y(float a)

{
  y = a;
}

}; //end class
