
#include <iostream>
using namespace std;
int main() {
    for (int x = 1; x <= 1000; x++) {
        if (x % 3 != 0 && x % 4 != 0 && x % 6 != 0) {
            cout <<x << endl;
        }
    }
    return 0;
}
