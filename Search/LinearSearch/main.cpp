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

template <typename Q>
bool linear_search_ptr(const std::vector<Q> &v, Q value) {
	for (auto i = v.begin(); i != v.end(); i++) {
		if (*i == value) {
			return true;
		}
	}
	return false;
}

int main() {
	std::vector<float> f = { 3.8, 9.1, 5.7, 2.3, 4.0 };
	std::vector<std::string> s = { "borderlands", "cthulu", "spyro", "megadeth" };

	float f_search1 = 9.0, f_search2 = 4.0;
	std::string s_search1 = "borderlands", s_search2 = "nyarlathotep";

	std::cout << "Linear search bool:\n";
	std::cout << linear_search(f, f_search1) << '\t';
	std::cout << linear_search(f, f_search2) << '\n';

	std::cout << linear_search(s, s_search1) << '\t';
	std::cout << linear_search(s, s_search2) << '\n';

	std::cout << "Linear search index:\n";
	std::cout << linear_search_index(f, f_search1) << '\t';
	std::cout << linear_search_index(f, f_search2) << '\n';

	std::cout << linear_search_index(s, s_search1) << '\t';
	std::cout << linear_search_index(s, s_search2) << '\n';

	return 0;
}
