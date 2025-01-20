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

        count operator ++ (int)
        {
            count temp;
            temp.value = ++value;
            return temp;
        }

        count operator ++ ()
        {
            count temp;
            temp.value = value++;
            return temp;
        }
        void display()
        {
            cout<< "count:" << value << endl;
        }
    } ;



int main()
{
    count c1, result;
    result = c1++;
    result.display();

    result = ++c1;
    result.display();

    return 0;
}
