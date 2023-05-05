#include <iostream>

using namespace std;
int main()
{
	
	long int* arr = new long int[50];
	int len = 40;
	for (int i = 1; i <= len; i++) {

		if (i == 1 || i == 2) arr[i] = 1;
		else {
			arr[i] = arr[i - 2] + arr[i - 1];
		}
		if (i % 3 == 0 && arr[i] > 0) arr[i] *= -1;
		cout << "[" << i << "]=" << arr[i] << endl;

	}
	return 0;

}