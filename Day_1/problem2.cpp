#include<iostream>
using namespace std;
int main(){
    int n;
    int k=0;
    cout<<"enter the value of N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char k='A';
        for(int j=1;j<=2*i-1;j++){
            cout<<k;
            if(j<=(((2*i)-1)/2)){
                k++;
            }else{
                k--;
            }
        }
        cout<<endl;
    }
    return 0;
}
