#include <iostream>
using namespace std;
class Number
{
    private:
        int x;
    public:
        Number()
        { x = 0; };
    Number(int n)
    { x = n; }
    void show_data()
    {  cout << "\n x = " << x; }  
    Number operator ++()
    {
        x++;
        return Number(x);
    }
    Number operator --()
    {
        x--;
        return Number(x);
    }
    Number operator ++(int)
    {
        return Number(x++);
    }
    Number operator --(int)
    {
        return Number(x--);
    }

};

main()
{
    Number N1(10), N2, N3(20), N4, N5(30), N6, N7;
    N2 = ++N1;
    cout<<"\n Prefix Increment";

    N2.show_data();
    cout<<"\n Prefix Decrement";
    N4 = --N3;
    N4.show_data();
    cout<<"\n Postfix Incriment";
    N6=N5++;
    N6.show_data();
    cout<<"\n Postfix Decrement";
    N7=N5--;
    N7.show_data();
}