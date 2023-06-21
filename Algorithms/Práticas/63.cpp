#include <iostream>
#include <algorithm>

using namespace std;

int find_element(int array[], int n, int x) {
    auto k = lower_bound(array, array+n, x) - array;
    if (k < n && array[k] == x) return k;
    //return (k < n && array[k] == x);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int pos = find_element(array, n, 3);
    cout << "Element found" << pos << endl;
    
    return 0;
}
