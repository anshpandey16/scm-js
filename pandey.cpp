#include<iostream>
using namespace std;


int main(){
    int x = 10;
while(x >= 0) {
    x = x - 1;
    cout<<x;
    x--;
}
 /*int i = 1;
while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}*/
    return 0;
}
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
// string a;
// getline(cin,a);
// cout<<a<<endl;
// a.pop_back();
// cout<<a<<endl;
// a.push_back('s');
// cout<<a;

// 	return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// #include <sstream>
// using namespace std;
// int main() {
//    string str("Hello from the dark side");
//    string tmp; // A string to store the word on each iteration.
//    stringstream str_strm(str);
//    vector<string> words; // Create vector to hold our words
//    while (str_strm >> tmp) {
//       // Provide proper checks here for tmp like if empty
//       // Also strip down symbols like !, ., ?, etc.
//       // Finally push it.
//       words.push_back(tmp);
//    }
//    for(int i = 0; i<words.size(); i++)
//       cout << words[i] << endl;
// }