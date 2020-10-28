#include <iostream>
#include <vector>
template <typename Q>
void print_vector(const std::vector<Q> &v) {
	for (const auto &i : v) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

template <typename M>
void merge(std::vector<M> &v, int left_index, int mid_index, int right_index) {
	//print_vector(v);
	int i, j, k;
	int left_size = mid_index - left_index +1;
	int right_size = right_index - mid_index;

	std::vector<M> left_vector(left_size), right_vector(right_size);
	for (i = 0; i < left_size; i++) {
		left_vector[i] = v[left_index + i];
	}

	for (j = 0; j < right_size; j++) {
		right_vector[j] = v[mid_index+1 + j];
	}

	i = 0, j = 0, k = left_index;

	while ((i<left_size) && (j<right_size)) {
		if (left_vector[i] <= right_vector[j]) {
			v[k] = left_vector[i];
			i++;
		}
		else {
			v[k] = right_vector[j];
			j++;
		}
		k++;
	}

	while (i<left_size) {
		v[k] = left_vector[i];
		i++;
		k++;
	}

	while (j<right_size) {
		v[k] = right_vector[j];
		j++;
		k++;
	}
}

template <typename M>
void merge_sort(std::vector<M> &v, int left_index, int right_index) {
	int mid_index;
	if (left_index < right_index) {
		mid_index = (left_index + right_index) / 2;

		merge_sort(v, left_index, mid_index);
		merge_sort(v, mid_index+1, right_index);

		merge(v, left_index, mid_index, right_index);
	}
}

int main() {
	std::vector<int> k = {7, 2, 14, 9, 24, 19, 38, 32, 56, 42};
	print_vector(k);
	merge_sort(k, 0, k.size()-1);
	print_vector(k);

	return 0;
}
