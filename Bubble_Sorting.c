Bubble Sort is used to sort data by repeatedly comparing and swapping adjacent elements, making it simple and easy for beginners to understand sorting concepts.

#include<stdio.h>

int main() {
    int arr[100], n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(int i = 0; i < n-1; i++) {

        for(int j = 0; j < n-i-1; j++) {

            if(arr[j] > arr[j+1]) {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


# How Bubble Sort Flow Works
The program takes array size from user.
User enters all array elements.
Outer loop controls the number of passes.
Inner loop compares two adjacent elements.

If first element is bigger than second:

→ Swap the elements.

After first pass:

Largest element moves to the last position.

Continue passes until array becomes sorted.
Finally print sorted array.

  # Flow
Start
  ↓
Input array size (n)
  ↓
Input array elements
  ↓
Outer loop starts (i = 0 to n-2)
  ↓
Inner loop starts (j = 0 to n-i-2)
  ↓
Compare arr[j] and arr[j+1]
  ↓
Is arr[j] > arr[j+1] ?
   ├── Yes → Swap elements
   └── No → Continue
  ↓
Repeat inner loop
  ↓
Inner loop finished?
   ├── No → Continue comparisons
   └── Yes → Go to next pass
  ↓
Outer loop finished?
   ├── No → Start next pass
   └── Yes
  ↓
Print sorted array
  ↓
End


Time Complexity:

Best Case: O(n²)

Average Case: O(n²)

Worst Case: O(n²)
