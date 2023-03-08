#include <iostream>
using namespace std;

void Chinhhop(int n, int k, string tu="") {
	string s="abcdefghijklmnopqrstuvwxyz";
    if (k == 0) {
        cout << tu << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        char chumoi = s[i];
        if (tu.find(s) >26) {
            Chinhhop(n, k-1, tu+chumoi);
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    Chinhhop(n, k);
    return 0;
}
