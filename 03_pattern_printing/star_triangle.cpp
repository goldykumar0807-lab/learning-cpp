#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"enter no of rows : ";
    cin>>m;
    for(int i=1;i<=m;i++){       //control no of rows.
        for(int j=1;j<=i;j++){   //control no of columns.
            cout<<"* ";
        }
        cout<<endl;
    }

}
