#include<iostream>
using namespace std;
int main(){
 int a, b, c;
 cout<<"enter marks of student : ";
 cin>>a>>b>>c;
 if (a>b){
  if (b>c){
    cout<<"least marks scored by student c "<<endl;
  }else 
  cout<<"least marks scored by student b "<<endl;
 }else if (a>c) {
  cout<<"least marks scored by student c "<<endl;
 }else {
  cout<<"least marks scored by student a "<<endl;
 }
  return 0;
}
