#include<stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    for(i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

How it works:
Start from the second element (index 1)
Store current element in temp
Compare with previous elements
Shift larger elements one position right
Insert temp into correct position
Repeat until array is sorted. 


Start
  ↓
Input number of elements (n)
  ↓
Input array elements
  ↓
Set i = 1
  ↓
Repeat while i < n
      ↓
   temp = arr[i]
   j = i - 1
      ↓
   Repeat while (j >= 0 AND arr[j] > temp)
          ↓
      Shift arr[j] to arr[j+1]
      j = j - 1
          ↓
   End inner loop
      ↓
   Insert temp at arr[j+1]
      ↓
   i = i + 1
  ↓
Print sorted array
  ↓
End


Time Complexity:
Best Case: O(n)
Average Case: O(n²)
Worst Case: O(n²)
