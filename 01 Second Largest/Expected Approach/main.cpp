#include <iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int max = -1, secMax = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i] >= secMax && arr[i] < max){
            secMax = arr[i];
        }
    }
    return secMax;
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
    int secMax = secondLargest(arr, n);
    cout<<"Second Maximum element is: "<<secMax<<endl;
    return 0;
}
