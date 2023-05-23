#include <iostream>
#include <string>

using namespace std;
int main()
{
    std::string str1 = "Hello";
    std::string str2 = "SUSTech";
    std::string result = str1 + ", " + str2;
    std::u16string  u16str = u"this is a u16 string";
    std::wstring wstr = L"this is a wstring ";
    std::u32string u32str = U"this is a u32 string";

    cout<<"wstring the sizeof  : "<<sizeof(wstring) <<endl; 
    cout<<"u16 the sizeof  : "<<sizeof(u16string) <<endl; 
    cout<<"u32 the sizeof  : "<<sizeof(u32string) <<endl;
    
    cout<<"u16 the length : "<<u16str.length() <<endl; 


    cout << "result = " + result << endl;

    cout << "The length is " << result.length() << endl;

    cout << "str1 < str2 is " << (str1 < str2) << endl;

    return 0;
}