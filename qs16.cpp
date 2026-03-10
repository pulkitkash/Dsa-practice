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
            nigga='A'+i+j-2;
            cout<<nigga;
            nigga++;

            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}