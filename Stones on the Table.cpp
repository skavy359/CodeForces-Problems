#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
