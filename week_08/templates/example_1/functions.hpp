#include<iostream>
template <typename T>
void bubbleSort(T a[], int n) { 
    for (int i = 0; i < n - 1; i++) 
        for (int j = n - 1; i < j; j--) 
            if (a[j] < a[j - 1]) 
              std::swap(a[j], a[j - 1]); 
} 