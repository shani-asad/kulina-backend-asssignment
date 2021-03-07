// Compile: gcc 1_Socks.cpp -o 1_Socks -lstdc++
// Run    : ./1_Socks

#include<iostream>
using namespace std;

int main() {
    int socks[100] = {0};
    int n, i, j, curr, color_ctr, total_pair = 0;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> socks[i];
    }

    for(i = 0; i < n; i++) {
        if(socks[i] == 200) continue; // skip if the sock has been counted
        color_ctr = 1;

        for(j = i+1; j < n; j++){
            if(socks[i] == socks[j]) {
                color_ctr++; // count occurrences of a color
                socks[j] = 200; // mark the sock as counted
            }
        }

        total_pair += color_ctr / 2;
        socks[i] = 200;
    }

    cout << total_pair << endl;
    
}