//
//  MyString.cpp
//  
//
//  Created by yanqiang on 8/9/15.
//
//

#include "MyString.h"
#include <iostream>
using namespace std;
int main()
{
    //MyString s1();
    MyString s2("Hello world");
    MyString s3(s2);
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;
}
