#include <iostream>
#include <vector>

template <typename T>
bool binary_search(const std::vector<T> &v, T value) {
	int begin = 0;
	int end = v.size() - 1;
	while(true) {
		int mid = (begin + end) / 2;
		if (v[mid] == value) {
			return true;
		}

		if (v[mid] > value) {
			end = mid - 1;
		}
		else {
			begin = mid + 1;
		}

		if ((begin == mid) || (end == mid)) {
			return false;
		}
	}
	return false;
}

int main() {
	std::vector<int> x = {2, 5, 7, 12, 16, 20, 22};

	int search_1 = 20, search_2 = 25;

	std::cout << binary_search(x, search_1) << '\t';
	std::cout << binary_search(x, search_2) << '\n';

	return 0;
}
