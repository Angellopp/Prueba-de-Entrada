#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> A, B;
    int a, b, aux;
    int ans1 = 0, ans2 = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> aux;
        if (aux <= 1440) ans1++;
        A.push_back(aux);
    }
    
    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> aux;
        if (aux <= 1440) ans1++;
        B.push_back(aux);
    }
    
    bool state = true;
    int pa = 0, pb = 0;
    int i = 0, j = 0;
    while (i != a and j != b){
            if (B[j] > A[i]) { 
                pa++;
                i++;
            } else {
                pb++;
                j++;
            }
            if (pb > pa) {
                if (state) {
                    ans2++;
                }
                state = false;
            }
            else if (pa > pb) {
                state = true;
            }
        
    }
    cout << ans1 << "\n" << ans2 << endl <<pa<<endl<<pb;
    
}
