#include<iostream>
using namespace std ;
int main () {
    int x1, x2, x3, y1, y2, y3;
    cout<<"enter abscissa and ordinates of first point : "<<endl;
    cin>>x1>>y1;
    cout<<"enter abscissa and ordinates of second point : "<<endl;
    cin>>x2>>y2;
    cout<<"enter abscissa and ordinates of third point : "<<endl;
    cin>>x3>>y3;
    int slope1 = (y2-y1)/(x2-x1);
    int slope2 = (y3-y2)/(x3-x2);
    if (slope1==slope2){
        cout<<"all thress points lie on same line "<<endl;
    } else {
        cout<<"points are non collinear "<<endl;
    }
    return 0;
}
