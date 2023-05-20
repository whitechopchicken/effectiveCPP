#include<iostream>

int main(int argc, char *argv[]){

    unsigned int a = 56789 ;
    std::cout<<"a="<<a<<std::endl;
    unsigned int b(56789);
    std::cout<<"a*b的值是 =  "
    <<a*b<<std::endl;
    for(int i = 0 ; i<=argc ; i++){
        std::cout<<argv[i]<<std::endl;
    }
    return 0 ;
}