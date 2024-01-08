// #include <iostream>
// #include <vector>
// using namespace std;

// void selectionSort(vector<int> &v) {
//   int n = v.size();
//   for (int i = 0; i < n - 1; ++i) {
//     int minIndex = i;
//     for (int j = i + 1; j < n; j++) {
//       if (v[j] < v[minIndex]) {
//         minIndex = j;
//       }
//     }
//     swap(v[i], v[minIndex]);
//   }
// }

// int main() {
//   vector<int> v = {44, 33, 55, 22, 11};
//   selectionSort(v);

//   // Use cout to print the sorted vector
//   for (int i = 0; i < v.size(); ++i) {
//     cout << v[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main() {
    vector<int> v = {33, 44, 55, 11, 22};
    insertionSort(v);

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0 ;
}
