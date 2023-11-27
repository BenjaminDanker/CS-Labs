#include <iostream>
//#include "Array.h"

template <typename T> class Array {
private:
	int size;
	T* data;
public:
	explicit Array(T arr[], int size);
	~Array();
	Array(const Array& other);
};

template <typename T> Array<T>::Array(T arr[], int size) {
	data = new T[size];
	this->size = size;
	for (int i = 0; i < size; i++) {
		data[i] = arr[i];
	}
	//data = std::make_unique<int[]>(size);
}

template <typename T> Array<T>::~Array() {
	delete[] data;
	data = nullptr;
}

template <typename T> Array<T>::Array(const Array& other) {
	size = other.size;
	data = new int[size];
	//data = std::make_unique<int[]>(size);
	for (int i = 0; i < size; i++) {
		data[i] = other.data[i];
	}
}

int main() {
	int arr[3] = { 1, 2, 3 };
	Array<int> numbers(arr, 3);
	Array<int> newNumbers{ numbers };
}