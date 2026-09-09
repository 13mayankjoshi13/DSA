// 1. Linear Search
int linearSearch(int arr[], int n, int target) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == target)
            return i;
    }

    return -1;
}


// 2. Binary Search - Iterative
int binarySearchIterative(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}


// 3. Binary Search - Recursive
int binarySearchRecursive(int arr[], int low, int high, int target) {

    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);

    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}


// Main Function
int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;

    cout << "Enter element to search: ";
    cin >> target;


    // Linear Search
    int result1 = linearSearch(arr, n, target);

    if (result1 != -1)
        cout << "Linear Search: Element found at index "
             << result1 << endl;
    else
        cout << "Linear Search: Element not found" << endl;


    // Binary Search - Iterative
    int result2 = binarySearchIterative(arr, n, target);

    if (result2 != -1)
        cout << "Binary Search (Iterative): Element found at index "
             << result2 << endl;
    else
        cout << "Binary Search (Iterative): Element not found" << endl;


    // Binary Search - Recursive
    int result3 = binarySearchRecursive(arr, 0, n - 1, target);

    if (result3 != -1)
        cout << "Binary Search (Recursive): Element found at index "
             << result3 << endl;
    else
        cout << "Binary Search (Recursive): Element not found" << endl;


    return 0;
}
