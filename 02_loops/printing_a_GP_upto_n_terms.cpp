#include<iostream>
#include<cmath>
using namespace std;
int main() {
    //printing GP 1,2,4,8,16,32....upto n terms.
    int n;
    cout<<"enter number of terms : ";
    cin>>n;
    for(int i=1; i<=pow(2,(n-1)); i*=2){
        cout<<i<<",";
    }
    return 0;
}
