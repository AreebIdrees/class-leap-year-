#include<bits/stdc++.h>
using namespace std;

class leapyear{
private:
int date;
int month;
int year;


public:
leapyear(){
    cout<<"enter the date:";
    cin>>date;
    cout<<"enter the month:";
    cin>>month;
    cout<<"enter the year:";
    cin>>year;
}
void check(){
if(year%4 == 0){
    cout<<"this year is a leapyear";
}else{
    cout<<"this year is not a leapyear";

} 
}
};
int main(){
    class leapyear lp;
    lp.check();
}