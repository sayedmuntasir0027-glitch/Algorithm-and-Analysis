#include <stdio.h>

int binarySearch(int arr[], int n, int item) {
    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == item) {
            return mid;
        }
        else if(item > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[100], n, item, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);

    result = binarySearch(arr, n, item);

    if(result == -1) {
        printf("item not found");
    } else  {
        printf("Item found at position %d", result + 1);
    }



1️.

The program first takes the size of the array from the user.
Then all array elements are entered in sorted order.
The user gives the value that needs to be searched.

2.

The search process starts by initializing:
low = 0 and high = n - 1.

The middle index is calculated using:
mid = (low + high) / 2.

3️.

The middle element is compared with the target value.

If a match is found:
The program prints the position and stops the search.

If the target is greater than the middle element:
The search continues in the right half (low = mid + 1).

If the target is smaller than the middle element:
The search continues in the left half (high = mid - 1).

4️.

If the loop finishes without finding the value:
The program prints "Item not found".
    

# Binary Search Flow (Function Based)

Start
  ↓
Input array size (n)
  ↓
Input sorted array elements
  ↓
Input item to search
  ↓
Call binarySearch(arr, n, item)
  ↓
Inside function:
    low = 0
    high = n - 1
  ↓
Start loop (while low <= high)
  ↓
Find mid = (low + high) / 2
  ↓
Compare arr[mid] with item
  ↓
Is arr[mid] == item?
   ├── Yes → return mid → Exit function
   └── No
         ↓
     Is item > arr[mid]?
        ├── Yes → low = mid + 1
        └── No  → high = mid - 1
         ↓
      Repeat loop
         ↓
Loop ends (low > high)
  ↓
Return -1 (not found)
  ↓
Back to main()
  ↓
Check result:
   ├── result == -1 → print "Not found"
   └── else → print position (result + 1)
  ↓
End

    return 0;
}


Time Complexity:
- Best Case: O(1)
- Worst Case: O(log n)
