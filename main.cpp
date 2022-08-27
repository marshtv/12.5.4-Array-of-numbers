#include <iostream>

int main() {
	int arr[15];
	int min = 32767, sum = 0, sumPro = 0;

	std::cout << "Input, please, array of 15 positive integers in any order with one repeating number:" << std::endl;
	for (int i = 0; i < 15; i++) {
		std::cin >> arr[i];
		if (arr[i] < min)
			min = arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 14; i++) {
		sumPro += min + i;
	}

	std::cout 	<< "Array started from " << min << " and repeated number is " << sum - sumPro
				<< std::endl;
}
