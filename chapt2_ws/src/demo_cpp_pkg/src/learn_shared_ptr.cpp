#include <iostream>
#include <memory>

int main(){
    auto p1 = std::make_shared<std::string>("This is a str.");//
    std::cout<<"the number of shared_ptr is: "<<p1.use_count()<<"cache: "<<p1.get()<<std::endl;
    auto p2 = p1; // copy constructor
    std::cout<<"the number of shared_ptr is: "<<p1.use_count()<<"cache: "<<p1.get()<<std::endl;
    std::cout<<"the number of shared_ptr is: "<<p2.use_count()<<"cache: "<<p2.get()<<std::endl;
    p1.reset(); // reset p1,不再指向"This is a str."所在的内存。
    std::cout<<"the number of shared_ptr is: "<<p1.use_count()<<"cache: "<<p1.get()<<std::endl;
    std::cout<<"the number of shared_ptr is: "<<p2.use_count()<<"cache: "<<p2.get()<<std::endl;

    std::cout<<"p2 的指向内存地址数据：" <<p2->c_str()<<std::endl; // p2仍然指向"This is a str."所在的内存。
    return 0;
}