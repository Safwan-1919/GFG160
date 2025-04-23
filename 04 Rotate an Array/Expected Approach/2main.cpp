// Reversal Algorithm

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        arr[start] = arr[end];
        start++;
        end--; 
    }
}

void rotateArray(int arr[], int n, int d){
    d = d % n;
    reverseArray(arr, d);
    reverseArray(arr, );
    reverseArray(arr, n);
}

int main() {
    int arr[1000];
    int n;
    int d;
    cout<<"Enter the no of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the no of rotations: ";
    cin>>d;
    cout<<"Your Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateArray(arr, n, d);
    cout<<"Your Rotated Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
