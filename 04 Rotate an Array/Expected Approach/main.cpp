// Juggling Algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

void rotateArray(int arr[], int n, int d){
    // d = d % n;
    int rotate =  gcd(n, d);
    for(int i=0; i<rotate; i++){
        int first = arr[i];
        int curIndex = i;
        while(true){
            int nextIndex = (curIndex + d) % n;
            if(nextIndex == i){
                break;
            }
            arr[curIndex] = arr[nextIndex];
            curIndex = nextIndex;
        }
        arr[curIndex] = first;
    }
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
