
// C++ Program demonstrates successful
// dynamic casting and it returns a
// value of type new_type
#include <iostream>
  
using namespace std;
// Base Class declaration
class Base{

    public :
        Base();
        virtual  void print();
        int a=100;
        class test{

            public:
                test();
                test(Base* ptr);
                Base* m_bptr;

        };
        test* pt;
};
 
    void Base::print(){
        cout << "Base Print" << endl;
    }
    Base::test::test(Base* ptr){
        m_bptr = ptr;
        cout<<"test Parameterised Constructor\n";
    }
    Base::Base(){
        pt = new test(this);
        cout<<"Base Constructor\n";
    }    
    Base::test::test(){
        cout<<"Base::Test constructor";
    }
    
  
// Derived1 class declaration
class Derived1 : public Base {
    public:
    int a=10;
    void print()
    {
        cout << "Derived1 " <<a<< endl;
    }

};
  
// Derived2 class declaration
class Derived2 : public Base {
    public :
    void print()
    {
        cout << "Derived2" << endl;
    }
};
  
// Driver Code
int main()
{
    // Derived1 d1;
    Derived2 d2;
    // Base b;
    //b.print();
    Derived2 * d2ptr = dynamic_cast<Derived2*>(d2.pt->m_bptr);
    d2ptr->print();
                                     
    //Base* bptr = &d1;



   //Derived1* pd1 = dynamic_cast<Derived1*>(&d2);

   //Derived1* Dptr = dynamic_cast<Derived1*>(bptr);


   if(d2ptr == nullptr)
        cout<<"NullPTR";
    else
        cout<<"Not a Nullptr";

    return 0;
}