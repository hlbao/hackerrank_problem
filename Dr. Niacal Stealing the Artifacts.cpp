#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
long long ans;
int a[1000];
int main() {
    cin >> n >> k;
    for (int i= 0; i <n;i ++){
        cin >> a[i];
        a[i] = -a[i];
    }
    sort(a, a + n);
    for (int i =0;i < n;  i++){
        ans += -a[i] * (i / k + 1);
    }
    cout << ans << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
