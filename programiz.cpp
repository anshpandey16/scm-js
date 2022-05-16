/*#include<iostream>
using namespace std;

/*int add(int x,int z){
    return (x+z);
}
int main(){
    int sum;
    sum=add(700,500);
    cout<<"The sum is = "<<sum<<endl;
    cout<<isdigit('a');

/*int main(){
    int a;
    double d;
    char c;
    cin>>a>>d>>c;
    cout<<a<<c<<d<<endl;
    return 0;
}
void prime();
int main(){
    prime();
    return 0;
}
void prime(){
    int x,flag=0;
    cout<<"Enter any number"<<endl;
    cin>>x;
    for(int i=2;i<=x;i++){
        if(x%i==0){
            flag++;
        }
    }
    if(flag==1){
        cout<<"Given number is prime number"<<endl;
        }
        else{
            cout<<"Given number is not a prime number";
        }
}*/
/*#include <iostream>
using namespace std;

/*void test()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    
    test();
    test();
    test();
*/
/*int main(){
int p = 100;
if(p > 20) {
    if(p < 20) {
        printf("coding");
    }
} else {
    printf("ninjas");
}
    return 0;
}*/

// #include<iostream>
// using namespace std;

// int operation(int a,int b){
// 	int result;
// 	result = a+b;
// 	return result;
// }
// int operation(int a,int b,int c){
// 	int result;
// 	result = a*b*c;
// 	return result;
// }
// double operation(double a,double b){
// 	double result;
// 	result = a/b;
// 	return result;
// }
// int operation(int a,int  b,float z){
// 	int result;
// 	result = a-b;
// 	return result;
// }
// int main(){
// int i,j,n;
// float z;
// double p,l;
// 	cin>>i>>j>>n;
//     cin>>p>>l;
//     cin>>z;
// 	cout<< operation(i,j);
// 	cout<< operation(i,j,n);
// 	cout<< operation(p,l);
// 	cout<< operation(i,j,z);
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// class Count {
//    private:
//     int value;

//    public:

//     Count() : value(5) {}

//     void operator ++ () {
//         ++value;
//     }

//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };

// int main() {
//     Count count1;

//     ++count1;

//     count1.display();
//     return 0;
// }


#include <iostream>
using namespace std;
 
class Time {
private:
    int hrs, mnt;
 
   
public:
   
    void setTime(int x, int y, int z)
    {
        hrs = x;
        mnt = y;
    }
 
   
    void showTime()
    {
        cout << endl
             << hrs << ":" << mnt;
    }
 
   
    void normalize()
    {
        hrs = hrs + mnt / 60;
        mnt = mnt % 60;
    }
 
    // + Operator overloading
    // to add the time t1 and t2
    Time operator+(Time t)
    {
        Time temp;
        temp.mnt = mnt + t.mnt;
        temp.hrs = hrs + t.hrs;
        temp.normalize();
        return (temp);
    }
};
 
int main()
{
    Time t1, t2, t3;
    t1.setTime(5, 20, 30);
    t2.setTime(6, 35, 38);
 
    t3 = t1 + t2;
 
 
    t1.showTime();
    t2.showTime();
    t3.showTime();
 
    return 0;
}