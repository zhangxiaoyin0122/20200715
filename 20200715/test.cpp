#include <iostream>
using namespace std;

bool duplicate(int numbers[], int length, int* duplication) {
	if (numbers == nullptr || length <= 0)
		return false;
	for (int i = 0; i < length; ++i) {
		if (numbers[i] < 0 || numbers[i] > length - 1)
			return false;
	}
	for (int i = 0; i < length; ++i) {
		while (numbers[i] != i) {
			if (numbers[i] == numbers[numbers[i]]) {
				*duplication = numbers[i];
				return true;
			}
			//交换
			int tmp = numbers[i];
			numbers[i] = numbers[tmp];
			numbers[tmp] = tmp;

		}
	}
	return false;
}

int GetSize(int date[]) {
	return sizeof(date);
}

int main() {
	/*int date1[] = { 1,2,3,4,5 };
	int size1 = sizeof(date1);
	int* date2 = date1;
	int size2 = sizeof(date2);

	int size3 = GetSize(date1);

	cout << size1 << " " << size2 << " " << size3 << endl;*/
	// 20  4  4

	int arr[7] = { 2,3,1,0,2,5,3 };
	              /* 1,3,2,0,2,5,3
                   3,1,2,0,2,5,3
				   0,1,2,3,2,5,3*/

	int length = sizeof(arr);
	int* p = nullptr;
	int ret = duplicate(arr, length, p);
	cout << ret << endl;
	if (ret) {
		cout << *p << endl;
	}
	else
		cout << "没有重复的数字" << endl;
	return 0;
}
