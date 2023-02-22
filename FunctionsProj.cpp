
#include <iostream>
using namespace std;

// Сложение вещественных чисел
float addition(float x, float y)
{
	if (y >= 0) { return x + y; }
	else { return  x + (-y); }
}


// Целочисленное возведение в степень
int stepen(int x, int y=2)
{
	int result = 1;
	for (int i = 0; i < y; i++) {
		result *= x;
	}
	return result;
}


int main()
{

	int temp;
	int x = 2;
	int z = 4;
	temp = stepen(2);
	cout << temp << endl;

}
