#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number of Integers : ";
    cin>>n;
    int a[n];
    cout<<"Enter the Integers in ascending order : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=1;
    for(int i=0;i<n;i++){
        if(a[i]!=(i+b)){
            cout<<"Missing Number is : "<<i+b;
            b++;
        }
    }
    return 0;
}
