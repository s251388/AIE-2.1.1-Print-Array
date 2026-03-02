
#include <iostream>

using namespace std;


void PrintArray(int Array[], size_t Size) {



	for (int i = 0; i < Size; i++) {			// Here i have to pass the number of elements in the array through to the function separately as arrays behave
		cout << Array[i] << endl;				// differently inside functions and cannot be passed in as a reference. Because every element in an array always
	}											// uses the same amount of data, i can get this by dividing the total sizeof() by the sizeof() any one element.

}


int main()
{
    
	int Array[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
	PrintArray(Array, sizeof(Array) / sizeof(Array[0]));

}
