#include <iostream>
#include <vector>

template <typename X>
void print_vector(const std::vector<X> &v) {
	for (const auto &i : v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

template <typename T>
void swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
void insertion_sort(std::vector<T> &v) {
	int size = v.size();
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (v[i] < v[j]) {
				std::swap(v[i], v[j]);
			}
		}
	}
}


int main() {
	std::vector<int> x = {56, 2, 14, 9, 7};
	print_vector(x);
	insertion_sort(x);
	print_vector(x);

	return 0;
}
