#pragma once
#include "stdafx.h"
#define length

int i = 0, j = 0;

void swap(int& a, int& b) {
	int temp = a;
	a = b; b = temp;
}

//******************************************************************************************************************
template <class t>
int binarySearch(t a[], int l, int r) {
	int first = 0, last = l - 1, mid = (last - first) / 2;
	while (first >= last && a[mid] != r) {
		if (a[mid] > r)
			last = mid - 1;
		else
			first = mid + 1;
		mid = (last - first) / 2;
	}
	if (first > last) return -1;
	return mid;
}

//******************************************************************************************************************
template <class t>
int linearSearch(t a[], int l, int d) {
	int index;
	for (i = 0; i < l; i++) {
		if (a[i] == d) {
			index = i;
			break;
		}
	}
	return index;
}

//*****************************************************************************************************************
template <class t>
void selectionSort(t a[length], int l) {
	int min_idx;
	for (i = 0; i < l- 1; i++) {
		min_idx = i;
		for (j = i + 1; j < l; j++)
			if (a[j] < a[min_idx])
				min_idx = j;
		if (min_idx!=i)
			swap(a[min_idx], a[i]);
	}
}

//*****************************************************************************************************************
template <class t>
void insertionSort(t a[length], int l) {
	for ( i = 0; i < l; i++) {
		j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			swap(a[j],a[j - 1]);
			j--;
		}
	}

}

//******************************************************************************************************************
template <class t>
void bubleSort(t a[length], int l) {
	bool swapped;
	for (i = 0; i < l - 1; i++) {
		swapped = false;
		for (j = 0; j < (l - i - 1); j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (swapped==false) break;
	}
}
