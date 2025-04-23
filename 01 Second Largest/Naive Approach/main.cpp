#include <iostream>
#include <algorithm>
using namespace std;

int secondLargest(int arr[], int n){
    sort(arr, arr + n);
    for(int i=n-2; i>=0; i--){
        if(arr[n-1] != arr[i]){
            return arr[i];
        }
    }
    return -1;
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
