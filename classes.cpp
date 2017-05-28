#include<iostream>
#include<string>
using namespace std;
class K{
public:
K(string z){
setName(z);
}
void setName(string x){
name = x;}
string getName(){
return name;}
private:
string name;
};

int main(){
K K1(" got this ");
cout <<K1.getName();
K K2("and this too");
cout <<K2.getName();
}
