#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> stk;
    vector<bool> exists(n + 1, false);
    int expected = n;

    for (int i = 0; i < n; i++) {
        int snack;
        cin >> snack;

        exists[snack] = true;


        while (expected > 0 && exists[expected]) {
            cout << expected << " ";
            expected--; 
        }

        cout << endl; 
    }

    return 0;
}