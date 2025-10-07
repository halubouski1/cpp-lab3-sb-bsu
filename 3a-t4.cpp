#include <iostream>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum: ";
    cin >> k;
    
    while (i <= k) { // loop will continue until i > k
        cout << "Enter integer nr. " << i << ": "; // user prompt
        cin >> number;
        sum_k += number; // add inputted integer to sum_k
        i++; // increase the index variable
    }
    
    cout << "The total sum of " << k << " integers is: " << sum_k;
    /* result output */
    return 0;
}
