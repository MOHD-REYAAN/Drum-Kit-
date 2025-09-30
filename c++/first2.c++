#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i=0; // starts at 1, then 10, 100, 1000...

    while (n != 0) {
        int bit = n % 10;         // get last bit
        ans = (bit * pow(2,i)) + ans; // place bit
        n = n /10;              // shift right
        i++;            // next position in decimal
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
