#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n){
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(arr, 0, n-1);
        return;
    }
    for(int i=n-1; i>pivot; i--){
        if(arr[i] > arr[pivot]){
            int temp = arr[i];
            arr[i] = arr[pivot];
            arr[pivot] = temp;
            break;
        }
    }
    
    reverse(arr, pivot+1, n-1);
    
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
    nextPermutation(arr, n);
    cout<<"Next Permutation: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
