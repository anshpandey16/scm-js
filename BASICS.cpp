#include <iostream>
using namespace std;

int main()
{
  // to find out the  size of array
  /*int myNumbers[5]={10,20,30,40,50};
  int getArrayLength = sizeof(myNumbers)/ sizeof(int);
  cout<< getArrayLength;
  return 0;*/

  // To make use of two dimensional array
  /*string letters[2][4] ={{"a","b","c","d"},{"e","f","g","h"}};
  for(int i=0;i<2;i++){
      for(int j=0;j<4;j++)
      cout<< letters[i][j]<<"\n";
  }*/
  // To make use of three dimensional array
  /*string letters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }*/
  // To practise while loop
  /*int n,i=0;
  cin>>n;
  while(i<n){
      cout<<"Tushar";
      int j=1;
      while(j<=4){
          cout<<"sachdeva";
          j++;
      }
      i++;
      cout<<"\n";
  }*/
  // CREATING REFERENCES
  /*string food = "pizza";
  string &meal = food;
  cout<<meal<<endl;
  string*ptr = &food;
  cout<<ptr<<endl;
  cout<<*ptr;*/
  // VARIOUS PRACTISE TO LEARN HOW TO MODIFY POINTERS
  /*string food = "Pizza";
  string* ptr = &food;

  // Output the value of food (Pizza)
  cout << food << "\n";

  // Output the memory address of food (0x6dfed4)
  cout << &food << "\n";

  // Access the memory address of food and output its value (Pizza)
  cout << *ptr << "\n";

  // Change the value of the pointer
  *ptr = "Hamburger";

  // Output the new value of the pointer (Hamburger)
  cout << *ptr << "\n";

  // Output the new value of the food variable (Hamburger)
  cout << food << "\n";*/

  // STRINGS

  // APPEND()FUNCTION USE
  /*string firstName = "Ansh";
  string lastName = "Pandey";
  string fullName = firstName.append(lastName);
  cout << fullName;*/
  // Write your code here
  /*int basic;
    char grade;
    double totalSalary,hra,da,allow,pf;
    cin>>basic>>grade;
    hra = 0.2*basic;
    da = 0.5*basic;
    pf = 0.11*basic;

    grade = toupper(grade);
    if(grade=='A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    totalSalary = basic+hra+da+allow-pf;
    cout<<totalSalary;*/

  // string fullName(we should use getline for that)
  /*string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;*/

  // SUM OF NATURAL NUMBERS
  /*int n,i=1,d=0;
  cin>>n;
  while(i<=n){
    d=d+i;
    i++;
  }
  cout<<d;*/
  /*int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max =arr[0];
  for(int j=0;j<n;j++)
  {
    if(max<arr[j]){
      max=arr[j];
    }
    else{
      continue;
    }
  }
  cout<<max<<endl;
  for(int k =0;k<n;k++){
    if(max==arr[k]){
      cout<<"position of biggest eleement is "<<" "<<k+1;
    }
  }*/

  /*int array[100], position, c, n, value;
  cout<<"Enter number of elements in array\n"<<endl;
  cin>>n;
  if(n%2==0){
   position = n/2;
  }
  else{
   position = (n/2)+1;
  }
  cout<<"Enter elements\n"<<endl;
  for (c = 0; c < n; c++)
  {
  cin>>array[c];
   }
  cout<<"Enter the value to insert\n"<<endl;
  cin>>value;
  for (c = n - 1; c >= position - 1; c--)
  {
  array[c+1] = array[c];
   }
  array[position-1] = value;
   cout<<"Resultant array is\n"<<endl;
  for (c = 0; c <= n; c++)
  {
     cout<<array[c];
        }*/
  /*int x, n;
  cin >> x >> n;
  int a;
  a = x^n;
  cout << a;
  */
  /*int N;
  char a;
  cin>>N;
  int k =64+N;
  for(int i=1;i<=N;i++){
      a=(char)k;
      for(int j=1;j<=i;j++){
          cout<<(char)a;
          (int)a++;
      }
      cout<<endl;
      k--;
  }*/

  /*PROGRAM TO PRINT DIAMOND PATTERN


  /*#include<iostream>
  using namespace std;


  int main(){
      int N,z;
      int k=1,m=1,n;
      cin>>N;
      n=N/2+1;
      int k1 = (N/2)+1,k2 = N/2;
      int p=n;
      z = k2;
      for(int i=1;i<=n;i++){
          for(int j=1;j<=p-i;j++){
              cout<<" ";
          }
           for(int t=i;t<=k+i-1;t++){
              cout<<"*";
          }
          for(int a=1;a<=i-1;a++){
              cout<<"*";
          }
          cout<<endl;
          k++;
      }
      for(int s=1;s<=k2;s++){
          for(int p1 = 1;p1<=s;p1++){
              cout<<" ";
          }
          for(int p2 = z;p2>=1;p2--){
              cout<<"*";
          }
          for(int p3 = z-1;p3>=1;p3--){
              cout<<"*";
          }
          cout<<endl;
          z=z-1;
      }*/
  /*#include <iostream>
  using namespace std;

  int main()
  {
    int len, pos;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
      cin >> arr[i];
    }

    cout << "Position on which to del ";
    cin >> pos;

    for (int c = pos - 1; c <= len; c++)
    {
      arr[c] = arr[c + 1];
    }

    for (int i = 0; i <= len - 2; i++)
    {
      cout << arr[i] << " ";
    }
  */
  /*int n,m;
     cin>>n>>m;
   int arr[n][m];
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
     cin>>arr[i][j];
   }
  }
   int max =arr[0][0];
   for(int j1=0;j1<n;j1++)
   {
     for(int k1=0;k1<m;k1++){
     if(max<arr[j1][k1]){
       max=arr[j1][k1];
     }
     else{
       continue;
     }
  //  }*/
  // #include <iostream>
  // using namespace std;

  // int main()
  // {
  //   char c;
  //   int alphabets = 0, num = 0, space = 0;
  //   while (c != '$')
  //   {
  //     cin >> c;
  //     if (c > 64 && c < 91)
  //     {
  //       c = c + 32;
  //     }
  //     if (c >= 'a' && c <= 'z')
  //     {
  //       alphabets++;
  //     }
  //     else if (c >= '0' && c <= '9')
  //     {
  //       num++;
  //     }
  //     else if ( c == ''|| c == '\t' || c == '\n')
  //     {
  //       space++;
  //     }
  //   }
  //   cout << alphabets << "" << num << "" << space;
  // }

  /*#include<iostream>
  #include<math.h>
  using namespace std;

  int main() {
      int N,sum=0,i=0,z;
      cin>>N;
      while(N>0){
          z=N%10;
          sum=sum+z*(pow(2,i));
          N=N/10;
          i++;
      }
      cout<<sum;
      return 0;
  }*/
  // #include<iostream>
  // using namespace std;
  // int add(int,int,int);
  // int main(){
  //   int a,b,c;
  //   cout<<"enter any three number";
  //   cin>>a>>b>>c;
  //   cout<<"sum is"<<add(a,b,c);
  // }
  // int add(int x,int y,int z){
  //   return(x+y+z);
  // }
  /*int *p;
  int(*ptr)[5];
  int arr[5];
  p=arr;
  ptr=&arr;
  cout<<"p="<<p<<" "<<"ptr="<<ptr<<endl;
  p++;
  ptr++;
  cout<<"p ="<< p <<" "<<"ptr ="<<ptr<<endl;
  /*int a, k;
  cin >> a;
  int *p[a];
  int arr[a];
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
    p[i] = &arr[i];
    cout << p[i] << endl;
  }*/
  return 0;
}