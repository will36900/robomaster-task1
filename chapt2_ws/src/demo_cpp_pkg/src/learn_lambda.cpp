#include <iostream>
#include <algorithm>
int main(){
    auto hello = []() -> void {std::cout<< "Hello Lambda!"<<std::endl;};
    hello();
    
    return 0;
}