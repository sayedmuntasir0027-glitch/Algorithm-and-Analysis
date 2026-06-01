#include <stdio.h>

int main() {
    int arr[100], n, item, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);

    for(int i = 0; i < n; i++) {
        if(arr[i] == item) {
            printf("Item found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Item not found");
    }

    return 0;
}

# How Linear Search Works

The program first takes the size of the array from the user.
Then all array elements are entered.
The user gives the value that needs to be searched.
The loop starts from the first index of the array.
Each element is compared with the target value one by one.
If a match is found:
The program prints the position
The search stops using break
If the loop finishes without finding the value:
The program prints "Item not found"

Linear Search checks elements sequentially, so it works even if the array is not sorted.

Start
  ↓
Input array size
  ↓
Input array elements
  ↓
Input target item
  ↓
Start loop from first element
  ↓
Compare current element with target item
  ↓
Is element equal to target?
 ├── Yes → Print position → Stop
 └── No  → Move to next element
                ↓
        Repeat until end of array
                ↓
      Item not found?
                ↓
      Print "Item not found"
                ↓
               End
    
Time Complexity:
- Best Case: O(1)
    T(n)=c
- Worst Case: O(n)
    T(n)=c1​⋅n+c2​
