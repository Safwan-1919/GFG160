#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &arr){
    int n = arr.size();
    vector<int> res;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > (n/3)){
            if(res.size() == 0 || arr[i] != res[0]){
                res.push_back(arr[i]);
            }
        }
        if(res.size() == 2){
            if(res[0] > res[1]){
                swap(res[0], res[1]);
            }
            break;
        }
    }
    return res;
}

int main() {
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> res = majorityElement(arr);
    for(int ele : res){
        cout<<ele<<" ";
    }
    return 0;
}
