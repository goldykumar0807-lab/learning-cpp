using namespace std;
int main(){
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    //printing upper portion of diamond.
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i+j>=r+1) cout<<"*";
            else cout<<" ";
        }
        for(int k=2;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    //printing lower portion of diamond.
    for(int a=r-1;a>=1;a--){
        for(int b=1;b<=r;b++){
            if(a+b>r) cout<<"*";
            else cout<<" ";
        }
        for(int c=a-1;c>=1;c--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
