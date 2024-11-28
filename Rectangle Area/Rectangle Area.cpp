#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_15
// Rectangle Area.

void ReadNumbers(float& A, float& B) 
{
	cout << "Please Enter Rectangle width A " << endl;
	cin >> A;

	cout << "Please Enter Rectangle Length B " << endl;
	cin >> B;
}

float CalculateRectangle(float A , float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadNumbers(A, B);
	PrintResult(CalculateRectangle(A, B));
}

