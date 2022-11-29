#include <iostream>

using namespace std;
bool simple(short n) {
	for (int i = 2; i < n ; i++) {
		if (n % i == 0) {
			return 0;
		}		
	}
	return 1;
}

int main() {
	unsigned short n, count = 0;
	std::cin >> n;
	for (int i = n - 1 ; i != 1; i--) {
		if (simple(i) == 1) {
			std::cout << i << std::endl;
			count++;
		}
	}
	std::cout << "\n==============\n" << count << "\n============\n" ;
	char array[] = { 'g', '6', ' ', 'q', '&', '9', 'A', 'V' , '$', '!'};
	int size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
	{
		cout << (int)array[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1]) { 
				int tmp = array[j];       
				array[j] = array[j + 1];   
				array[j + 1] = tmp;		   
			}
		}
		
	}
	cout << "\n===============================\n";
	for (int i = 0; i < size; i++)
	{
		cout << (int)array[i] << " ";
	}
	return 0;
}