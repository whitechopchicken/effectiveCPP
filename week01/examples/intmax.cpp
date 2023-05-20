#include<iostream>
#include<cstdint>
int main(){
    std::cout<<"INT8_MAX="<<INT8_MAX<<std::endl;
    std::cout<<"INT8_MIN="<<INT8_MIN<<std::endl;
    uint8_t a = 255 ;
    uint64_t b = 1025 ;
    std::cout<<"uint8_t size = "<<sizeof(a)<<std::endl;  //1024 是 2e10  超过了 uint_8大小
    std::cout<<"uint64_t size = "<<sizeof(b)<<std::endl;
    return 0 ;
}