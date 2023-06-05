#include<bits/stdc++.h>

using namespace std;



void counting_the_ways(int, int, int, int&);

int main() {
    int n, counter = 0;
    cin >> n;
    counting_the_ways(n - 1, 0, 0, counter);
    cout << counter;
}

void counting_the_ways(int n, int down, int right, int &counter) {
    if(down == n && right == n) {
        counter++;
        return;
    }
    if(down < n) {
        counting_the_ways(n, down + 1, right, counter);
    }
    if(right < n && (down - right) >= 0) {
        counting_the_ways(n, down, right + 1, counter);
    }
}