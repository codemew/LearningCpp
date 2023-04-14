#include<bits/stdc++.h>

using namespace std;

class String{
    private:
        char*   m_data;
        int     m_size;

    public:
        String() = default;
        String(const char* string){

            cout<<"Created\n";
            m_size = strlen(string);
            m_data = new char[m_size];
            memcpy(m_data,string,m_size);
        }
        String(const String& other){
            cout<<"Copied\n";
            this->m_data = new char[other.m_size];
            this->m_size = other.m_size;
            memcpy(m_data,other.m_data,m_size);
        }
        String(String&& other){
            cout<<"Moved\n";
            this->m_data = other.m_data;
            this->m_size = other.m_size;
            
            other.m_data = nullptr;
            other.m_size = 0;
        }
        
        void print(){

            for(int i=0;i<m_size;i++)
            {
                    cout<<m_data[i];
            }cout<<endl;
        }
        ~String(){
            cout<<"Destroyed\n";
            delete m_data;
        }
};
class Entity{

    public :
        Entity(const String& str):m_str(std::move(str)){}
        void print()
        {
            cout<<"Name is "; m_str.print(); 
        }
        Entity(String&& str):m_str(std::move(str)){}

    private:
        String m_str;
};


int main(){
    Entity e(String("Hello"));
    e.print();
return 0;
}