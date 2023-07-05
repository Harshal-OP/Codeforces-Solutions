#include <iostream>
#include <utility>
int main(){
    short n; //number of rooms
    std::cin>>n;

    short possible_rooms = 0;
    while(n){
        std::pair<short,short> P;
        std::cin>>P.first>>P.second;

        if(P.second - P.first >=2){
            ++possible_rooms;
        } 
        n--; 
    }

    std::cout<<possible_rooms;
}