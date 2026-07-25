#include<iostream>
using namespace std;
int main(){
    //print sum upto n terms of sequence 1-2+3-4+5-6.....
    int n;
    cout<<"enter no of terms : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int m=-i;
            sum+=m;
        }else{
            sum+=i;
        }
    }
    cout<<sum<<" is the sum of series upto "<< n <<" terms.";
    return 0;
}
