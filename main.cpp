#incude <iostream>
#include <vector>

using namespace std;

#include "data.h"

int main()
{
    vector <data> v;

    v.push-back ({7, 21.01});

    data d;

    v.push-back (d);
    d.set x (10);
    d.set y (12.10);
    v.push-back (d);

    for (auto a : v)

    {
        cout << a.get x() << " ";
        cout << a.get y() << endl;
    }
}
