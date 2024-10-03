#include <iostream>
using namespace std;

int main()
{
	//1
	int A = 243;
	cout << (A >= 100 && A <= 999) << endl;


	//2
	int x = 453;
	int y = 34;
	int z = 24;
	cout << (((x < 45) + (y < 45) + (z < 45)) == 1) << endl;

	//3
	int A = 56;
	cout << (-137 <= A <= -51 || 55 <= A && A <= 123);

}
