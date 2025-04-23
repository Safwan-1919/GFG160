#include <iostream>
#include <algorithm>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count < n){
        arr[count] = 0;
        count++;
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
    cout<<"Your Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    moveZeroesToEnd(arr, n);
    cout<<"Zeroes Moved To End: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
