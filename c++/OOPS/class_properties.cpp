#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string colour;
    string taste;
};
int main(){
    fruit apple; //object..
    apple.name="Apple";
    apple.colour= "Red";
    apple.taste="sweet";
    cout<<apple.name<<"-"<<apple.colour<<"-"<<apple.taste<<endl;
    fruit *mango=new fruit();
    mango->name="Mango";
    mango->colour="Yellow";
    mango->taste="Sweet";
    cout<<mango->name<<"-"<<mango->colour<<"-"<<mango->taste<<endl;
    return 0;
}