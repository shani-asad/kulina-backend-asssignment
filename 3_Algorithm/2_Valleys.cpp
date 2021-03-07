// Compile: gcc 2_Valleys.cpp -o 2_Valleys -lstdc++
// Run    : ./2_Valleys

#include<iostream>
using namespace std;

int main() {
    int in_valley = 0, valley_ctr, height = 0, n, i;
    int step[1000000];
    char s;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> s;
        if(s == 'U') step[i] = 1; // convert Ups to 1 and Downs to -1
        else step[i] = -1;
    }

    for(i = 0; i < n; i++) {

        if(height == 0 && step[i] == -1) in_valley = 1; // set a flag to mark that Bill is in a valley

        height += step[i];

        if(height == 0 && in_valley == 1){ // get condition when Bill just got out of a valley
            valley_ctr++; // increment valleys count
            in_valley = 0; // set flag to mark that currently Bill is not in a valley
        }
    }

    cout << valley_ctr << endl;
}