// Compile: gcc 4_Switches.cpp -o 4_Switches -lstdc++
// Run    : ./4_Switches

#include<iostream>
using namespace std;

int main() {
    int lamps_on = 0, i, j;
    
    for(i = 1; i <= 100; i++) {
        int ctr = 0;

        for(j = 1; j <= i; j++) { // counting for how many factors does a number have
            if(i % j == 0) {
                ctr++;
            }
        }

        /*
        If number of factors of a switch position is odd
        then at the end the switch will be turned on, and vice versa.
        */

        if(ctr % 2 == 1) lamps_on++;
    }

    cout << lamps_on << endl;
}