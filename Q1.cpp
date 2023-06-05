#include<bits/stdc++.h>

using namespace std;

void peymayesh_misaghi(int[], int, int, int, int);

int main() {
    int array_size;
    cin >> array_size;
    int ar[array_size];
    for(int i = 0; i < array_size; i++) { //getting the hole array
        cin >> ar[i];
    }
    peymayesh_misaghi(ar, 0, ar[0], 0, array_size);
}

void peymayesh_misaghi(int ar[], int counter, int last_num, int index_i, int array_size) {
    if(array_size <= index_i) {
        return;
    }
    int operation;
    cout << ar[index_i] << " ";
    if(counter % 2 == 0) { // the max operation
        operation = max(ar[index_i], last_num);
    }
    else { // the min operaion
        operation = min(ar[index_i], last_num);
    }
    peymayesh_misaghi(ar, counter + 1, ar[index_i], index_i + operation, array_size);
}