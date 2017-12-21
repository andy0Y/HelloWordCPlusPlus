#include <iostream>
#include "integer_op.h"

using namespace std;

int main()
{
    int x, y;
    cout << "enter the first integer you want to be added : " << endl;
    cin >> x;
    cout << "enter the first integer you want to be added : " << endl;
    cin >> y;
    cout << "result is : " << addInt(x,y) << endl;
    return 0;
}
