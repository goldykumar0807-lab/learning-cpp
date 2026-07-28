#include<iostream>
using namespace std;
void star_triangle (int i,int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        star_triangle(i,n);
    }
    return 0;

}
