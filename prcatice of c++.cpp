
 // //intput the user defined valiable and print it on the screen//
// #include <iostream>
// using namespace std;

// int main(){

//     int apples;
//     cin>>apples;

//     cout<<"number of apples "<<apples<<endl;


//     return 0;
// }

// //swap of two numbers //
// #include <iostream>
// using namespace std;

// int main(){

// int a,b;

// cout<<"a:";
// cin>>a;
// cout<<"b:";
// cin>>b;

// int c;
 
// c=b;
// b=a;
// a=c;

// cout<<"a:"<<a<<endl;
// cout<<"b:"<<b<<endl;

//     return 0;
// }


// operators in c++//
// #include <iostream>
// using namespace std;

// int main(){

//     int a =10;
//     int b =5;
//     cout<<a%b<<endl;//0
//     cout<<++a<<endl;//11
//     cout<<--b<<endl;//4
// }
// //     bool c = true;
//     bool d = false ;
//     bool e = true;
//     bool f = false;
//     cout<<(c==d)<<endl;//0
//     cout<<(c!=a)<<endl;//1
//     cout<<(c&&d)<<endl;//0
//     cout<<(e&&c)<<endl;//1
//     cout<<(d||f)<<endl;//0
//     cout<<(!c)<<endl;//0


// if else statement//
// #include <iostream>
// using namespace std;
// int main () {
//     int n ;
//     cout<<"enter the number:";
//     cin>>n;
//     if (n%2==0) {
//         cout<<"even"<<endl;
//     }
//     else {
//         cout<<"odd"<<endl;
//     }
//     return 0;
//     }

// if else-if statement by using marks//
// #include <iostream>
// using namespace std;
// int main () {
//     int marks;
//     cout<<"enter the marks:";
//     cin>>marks;

//     if (marks>=90) {
//         cout<<"A"<<endl;
//     }
//     else if(marks>=70){
//         cout<<"B"<<endl;
//     }
//     else if(marks>=40){
//         cout<<"C"<<endl;
//     }
//     else{
//         cout<<"FAIL"<<endl;
//     }
// }

// if else-if statement by using age//
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout<<"enter the age:";
//     cin>>age;

//     if (age<=12){
//         cout<<"child"<<endl;
//     }
//     else if (age<=18){
//         cout<<"teeager"<<endl;
//     }
//     else if (age>=18){
//         cout<<"adult"<<endl;
//     }
//     return 0;
// }

// //write a prgram to print the value if it is even and divisible by 3(&&)//
// #include <iostream>
// using namespace std;
// int main () {
//     int value;
//     cout<<"enter the value:";
//     cin>>value;

//     if (value%2==0 && value%3==0){
//         cout<<value<<endl;
//     }
//     return 0;
// }


// wrute a program to print the value if it is divisible by 3 or 5 (||)//
// #include <iostream>
// using namespace std;
// int main (){
//     int value;
//     cout<<"enter the value:";
//     cin>>value;

//     if (value%3==0 || value%5==0){
//         cout<<value<<endl;
//     }
//     return 0;
// }

// write a program to print the day based on the day number (switch case)//
// #include <iostream>
// using namespace std;
// int main () {
//      int day;
//      cout<<"enter the day number:";
//      cin>>day;

//      switch (day) {
//         case 1:
//         cout<<"monday"<<endl;
//         break;

//         case 2:
//         cout<<"tuesday"<<endl;
//         break;

//         case 3:
//         cout<<"wednesday"<<endl;
//         break;

//         case 4:
//         cout<<"thursday"<<endl;
//         break;

//         case 5:
//         cout<<"friday"<<endl;
//         break;

//         case 6:
//         cout<<"saturday"<<endl;

//         case 7:
//         cout<<"sunday"<<endl;

//         default:
//         cout<<"holiday"<<endl;
        
// }
// return 0;
//      }

// write a program to print the character if is vovel or consonant (switch case)//
// #include <iostream>
// using namespace std;
// int main () {
//     char character;
//     cout<<"enter the character:";
//     cin>>character;

//     switch (character) {
//         case 'a':
//         cout<<"vowel"<<endl;
//         break;

//         case 'e':
//         cout<<"vowel"<<endl;
//         break;

//         case 'i':
//         cout<<"vowel"<<endl;
//         break;

//         case 'o':
//         cout<<"vowel"<<endl;
//         break;

//         case 'u':
//         cout<<"vowel"<<endl;
//         break;

//         default:
//         cout<<"consonant"<<endl;
//     }
//     return 0;

// }

// //print the sum of the first n natural numbers, where n is the input
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;

//     int sum=0;
//     int i=1;
//     while (i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<sum<<endl; 

//     return 0;
// }

  
