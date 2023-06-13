#include <bits/stdc++.h>
using namespace std;
int main()
{
    char sequencia[4], c;
    int a, b;
    int t;
    cin >> t;
    while(t--) {
        scanf("%s", sequencia);
        int result = 1;
        sscanf(sequencia, "%d%c%d", &a, &c, &b);
        if(a == b) result = a * b;
        else if(isupper(c)) result = b - a;
        else if(islower(c)) result = a + b;
        
        cout << result << endl;
    }

    return 0;
}