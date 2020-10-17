#include <iostream>
#include <vector>
#include <string>

template <typename T>
bool linear_search(const std::vector<T> &v, T value) {
	for (const auto &x : v) {
		if (x == value) {
			return true;
		}
	}
	return false;
}

template <typename X>
int linear_search_index(const std::vector<X> &v, X value) {
	for (int i = 0; i != v.size(); i++) {
		if (v[i] == value) {
			return i;
		}
	}
	return -1;
}

int main() {
	std::vector<float> f = { 3.8, 9.1, 5.7, 2.3, 4.0 };
	std::vector<std::string> s = { "borderlands", "cthulu", "spyro", "megadeth" };

	float search1 = 42.0, search2 = 2.3;
	std::string search3 = "hi", search4 = "spyro";

	std::cout << "True or false:\n";

	std::cout << linear_search(f, search1) << '\t';
	std::cout << linear_search(f, search2) << '\n';
	std::cout << linear_search(s, search3) << '\t';
	std::cout << linear_search(s, search4) << '\n';

	std::cout << "Search for index:\n";

	std::cout << linear_search_index(f, search1);
	std::cout << '\t' << linear_search_index(f, search2) << '\n';

	std::cout << linear_search_index(s, search3) << '\t';
	std::cout << linear_search_index(s, search4) << '\n';

	return 0;
}
