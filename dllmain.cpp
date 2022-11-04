#include <iostream>
#include <string>
#include "Anglefuncsdll.h"
using namespace std;
using namespace Anglefuncsdll;

int main()
{
	Angle one;
	one = one.Init(118, 0.45);
	one.Display();
	one.toString();
	system("PAUSE");
}
