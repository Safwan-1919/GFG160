#include <iostream>
#include <algorithm>
using namespace std;

void rotateArray(int arr[], int n, int d){
    d = d % n;
    int temp[n];
    for(int i=0; i<n-d; i++){
        temp[i] = arr[d+i];
    }
    for(int i=0; i<d; i++){
        temp[n-d+i] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter number of rotations: ";
    cin>>d;
    cout<<"Your Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateArray(arr, n, d);
    cout<<"Rotated Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
