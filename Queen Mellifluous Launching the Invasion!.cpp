#include <iostream>
#include <map>
using namespace std;
int T, ans; 
unsigned long long a;
map<unsigned long long ,int > x;
int main() {
    for (int i =0; i < 64; i++) x[1ll << i] = i;
    cin >> T;
    while(T--){
        cin >> a;
        for (ans = x[a & -a]; a; a ^= a & -a, ans ++);
        cout << ans - 1<< endl;
    }
    return 0;
}
