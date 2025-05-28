#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of N: ";
    cin>>n;
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            int top=i;
            int bottom=(2*n)-2-i;
            int left=j;
            int right=(2*n)-2-j;
            int minm_dist;
            if(top<bottom){
                minm_dist=top;
            }else{
                minm_dist=bottom;
            }
            if(left<minm_dist){
                minm_dist=left;
            }
            if(right<minm_dist){
                minm_dist=right;
            }
            cout<<n-minm_dist<<" ";
        }
        cout<<endl;
    }
    return 0;
}
