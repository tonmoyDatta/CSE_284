// Overload ++ when used as prefix and postfix


#include<iostream>
using namespace std;

    class count
    {
    private:
        int value;

    public:
        count()
        {
            value = 8;
        }

        void operator ++ ()
        {
            ++value;
        }

        void operator ++(int)
        {
            value++; //a=c++ dileo compiler some dummy value expect kore like a = c++ int; prefix theke postfix alada korte eti use kora hoy. but er kuno reason nai.
        }

        void display()
        {
            cout<< "count:" << value << endl;
        }
    } ;



int main()
{
    count c1;
    c1++;
    c1.display();

    ++c1;
    c1.display();

    return 0;
}
