#include<iostream>
#include<cstdint> 
#define error 0.00001
// float 实际上是一种近似，因此 两个float 类型 的数，不能直接用  == 来判断是否相等，而是用误差来判断
//g++ -fexec-charset=gbk -o float.exe float_test.cpp  解决中文乱码
int main(){
    float a = 1.12 ;
    float b = 1.12 ;
    if(a==b){
        std::cout<<"直接用 == 判断结果 正常"<<std::endl ;
    }
    else {
        std::cout<<"直接用 == 判断结果 不正常"<<std::endl;
    }

    if((a-b)==0){
        std::cout<<"用 a-b==0 判断结果 正常"<<std::endl ;
    }
    else {
        std::cout<<"用 a-b== 判断结果 不正常"<<std::endl;
    }

    if((a-b)<error){   // 或者用编译器自带的宏 FLT_EPxxx
        std::cout<<"用误差阈值来判断结果 正常"<<std::endl;
    }
    else{
        std::cout<<"用误差阈值判断结果 不正常"<<std::endl;
    }
    system("pause");
    return 0 ;
}