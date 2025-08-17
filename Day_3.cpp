#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    
    int a[(n-1)];
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int b[(n-1)];
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    
    for(int i=0;i<n;i++){
        int temp=a[i];
        if(b[temp]==0){
            b[temp]=a[i];
        }
        else{
            cout<<"Duplicate Number is : "<<temp;
        }
    }
    return 0;
}
