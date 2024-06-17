NAME: Sudharshan Krishnaa L K 
REGISTER NO.:230701350

EX-15: Program to perform Quick Sort



#include <stdio.h>

void QuickSort(int a[], int left, int right);

int main() {
    int i, n, a[10];
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    QuickSort(a, 0, n - 1);
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}

void QuickSort(int a[], int left, int right) {
    int i, j, temp, pivot;
    if (left < right) {
        pivot = left;
        i = left + 1;
        j = right;
        while (i <= j) { // Change here to i <= j instead of i < j
            while (i <= right && a[i] < a[pivot]) i++; // Add boundary check
            while (j >= left && a[j] > a[pivot]) j--; // Add boundary check
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++; // Move pointers after swapping
                j--;
            } else if (i == j) {
                i++;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        QuickSort(a, left, j - 1);
        QuickSort(a, j + 1, right);
    }
}








