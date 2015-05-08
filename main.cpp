#include <iostream>

using namespace std;

const int N = 10; //Array a size
int bits = 50; //Display bits
int a[N] = {65535, 7, 3, 4, 5, 6, 7, 8, 9, 10 }; //Array of int

int FuncRetBitJ(int j){
	char *pA = (char*)a; //Creating a char pointer to int array
	int ret = pA[(j / 8)] >> (j % 8); // 8 - count of bits in byte

	return ((ret & 1)? 1 : 0);
}
int main()
{
    for (int i = 0; i < bits; i++){
		cout << i << " : " << FuncRetBitJ(i) << endl;
	}
    return 0;
}
