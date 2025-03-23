#include "util.h"
#include "logic.h"
#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "input size: ";
	cin >> size;

	/*random_init(array, size, -100, 100);
	cout << "Vector: " << convert(array, size) << endl;*/
	
	cout << "Input vector elements: ";
	user_init(array, size);
	cout << "Vector: " << convert(array, size) << endl;

	int result = calculate_product_between_extreme_elements(array, size);
	cout << "Product is: " << result << endl;
	return 0;
}