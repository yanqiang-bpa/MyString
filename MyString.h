//
//  MyString.h
//  
//
//  Created by yanqiang on 8/9/15.
//
//

#ifndef ____MyString__
#define ____MyString__
#include<string.h>
#include<iostream>
using namespace std;

class MyString
{
public:
    MyString(const MyString& str);
    MyString(const char* cstr);
    MyString& operator = (const MyString& str);
    ~MyString();
    char* get_c_str() const {return m_data;}
private:
    char* m_data;
};

inline
MyString::MyString(const char* cstr)
{
    if(cstr)
    {
        m_data=new char[strlen(cstr)+1];
        strcpy(m_data, cstr);
    }
    else
    {
        m_data=new char[1];
        *m_data='\0';
    }
}

inline
MyString::MyString(const MyString& str)
{
    m_data=new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
}

inline
MyString::~MyString()
{
    delete[] m_data;
}

inline
MyString& MyString::operator = (const MyString& str)
{
    if(this==&str)
    {
        cout<<"self assignment"<<endl;
        return *this;
    }
    delete[] m_data;
    m_data=new char[strlen(str.m_data)+1];
    strcpy(this->m_data, str.m_data);
    return *this;
}

ostream& operator << (ostream& os, const MyString& str)
{
    os<<str.get_c_str();
    return os;
}

#endif /* defined(____MyString__) */
