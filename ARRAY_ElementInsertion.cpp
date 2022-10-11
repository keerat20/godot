#include <iostream>
using namespace std;
int main(){
    int num,n,posi,length,i,arr[15];

    cout<<"ENTER THE ARRAY :";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    length=n;
    cout<<"ENTER THE NUMBER :";
    cin>>num;
    cout<<endl;
    cout<<"ENTER THE POSITITN :";
    cin>>posi;
    cout<<endl;

    for (i=(length-1);i>=posi;i--){
        arr[i+1]=arr[i];
        
    }
    arr[i+1]=num;

    for (i=0;i<=length;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}