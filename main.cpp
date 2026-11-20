#include <iostream>
#include <string>
using namespace std;

// use 2D Arrays to store Rooms and floor numbers using FnRn

int building(){
    string building[5][4] = {{"F1R1", "F1R2", "F1R3","F1R4"} ,
    {"F2R1","F2R2","F2R3","F2R4"},
    {"F3R1","F3R2","F3R3","F3R4"},
    {"F4R1","F4R2","F4R3","F4R4"},
    {"F5R1","F5R2","F5R3","F5R4"}};
    cout << building[2][1];

    int Roomid[5][4]= {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}}

    return 0;

}
// 0 = no path
// 1 = door
// 2 = window
// 3 = locked door
// 4 = stairs
// 5 = lift

int connection(int from,int to){
    if(from == 3 )

}
int main(){
    building();
}