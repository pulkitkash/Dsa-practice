#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    char start='A';
    char nigga;

    while (i<=n) {
        int j=1;
        while (j<=i) {
            nigga = 'A'+i+j;
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}