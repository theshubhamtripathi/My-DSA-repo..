//
//  main.cpp
//  dsa c++ c
//
//  Created by shubham tripathi on 08/07/24.
//

/*#include <iostream>

int main() {
    using namespace std ;
    int n ;
    cout<<"enter the number of element in array ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }


    return 0;
}*/

/*#include <iostream>
using namespace std ;
struct rectangle {
    int length ;
    int breadth ;
    char x ;
};

int main() {
    struct rectangle r1={10,15};
    r1.length=20;
    r1.breadth=30;
    cout << r1.length <<endl;
    cout<<r1.breadth<<endl;
    cout<<sizeof(rectangle)<<endl;

    return 0;
}*/

/*#include <iostream>
#include <stdio.h>
using namespace std ;
int main (){
    int a = 10;
    cout<<a<<endl;
    int *p;
    p=&a;
    cout<<*p<<endl<<p<<endl<<&a<<endl;
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
int main(){
using namespace std ;
    int A[5]={1,2,8,4,4};
    int *p;
    p=A;

    //array me iterate karke eke ek value me jaane ke liye loops use karte hai
always
    //for (int i=0;i<5;i++){
      //  cout<<p[i]<<endl<<p<<endl<<*p<<endl<<endl<<A[4];
    //}
return 0;
}*/

/*#include<iostream>
using namespace std ;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<a;
    }
    if (b>a && b>c) {
        cout<<b;
    } else {
        cout<<c;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std ;
int main (){
    int n ;
    cin>>n;
    int i =1;
    while (i<=n) {
        cout<<i;
        ++i;
    }
}*/

// memory allocation hierarchy heap stack then main so whenever we create
// soething it gets created in the stack meory malloc se c me heap me array
// store karate hai and new se c++ me

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int main (){
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for (int i =0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int main (){
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for (int i =0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    delete[]p; // c++
    free(p); // c
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
struct rectngle {
    int l;
    int b ;
}; // it always comes befor main maemory sturctue
int main (){
    int *p1;
    float *p2;
    double *p3;
    bool *p4;
    char *p5;
    struct rectangle  *p6 ;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    cout<<sizeof(p6)<<endl;
    return 0;
}*/

// pointers and reference are different reference is just another name to print
// a variable and pointers are a type of variable which just store the memory of
// the data set pointer are denoted by *p and referennce are denoted by &r

/*#include <iostream>
using namespace std ;
int main (){
    int a = 10 ;
    int &r = a ;
    int b = 30 ;
    r=b;
    cout << a << r ;
    return  0 ;
}*/

// dynsamic saving means saving the data set ina heap memeory so it will run in
// run time rather thah n compile time malloc function returns values in tnhe
// void form so u have typecast the new data type after writung the code
/*#include <iostream>
using namespace std ;
struct rectangle {
    int l ;
    int b ;
};
int main (){
    struct rectangle *p;
    p=new struct rectangle;

    p->l =15;
    p->b =6 ;

    cout << p->l << p->b ;
    delete[]p;
    return 0 ;
}*/

/*#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
struct rectangle {
    int l ;
    int b ;
};
int main (){
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));

    p->l =15;
    p->b =6 ;

    cout << p->l << p->b ;
    delete[]p;
    return 0 ;
}*/

/*#include <iostream>
using namespace std;
int main() {

    int *p = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    for (int i = 0; i < 5; ++i) {
        cout << "p[" << i << "] = " << p[i] << " \t Address: " << &p[i] << endl;
    }

    delete[] p;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    cout<<sum<<"\n";
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    if(b>a){
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a ;
    cin>>a;
    if(a%2==0) {
        cout<<"even";
    }
    else {
        cout<<"odd";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n ;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    do{
        cout<<n;
        cin>>n;
    }
    while(n>0);

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
    if(n==i) {
         cout<<"prime"<<endl;
    }

    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i;
    int num;
    for(num=a;num<=b;num++){
        for(i=2;i<=num-1;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
        cout<<num<<endl;
    }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;

    char op;
    cout<<"ENTER the operation you want ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;

    default:cout<<"enter any other operation :";
        break;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i=10,j=20,k;
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    //10 - 9 + 19 - 20 + 9 - 20 + 10 - 19
    cout<<i<<j<<k;
    return 0;
} */

/*#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    if(n==10){
        cout<<"equal";
    }
    else if(n>10){
        cout<<"n is more than 10 ";
    }
    else if(n<10){
        cout<<"n is less than 10 ";
    }
return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 4;
    for(int i=1;i<=a;i++){
        cout<<" "<<endl;
        for(int j=1;j<=4;j++){
            cout<<"*";
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 4;
    for(int i=1;i<=a;i++){
        cout<<endl;
        for(int j=1;j<=4;j++){
            if(i==1||i==5){
                cout<<"*";
            }
            else if(j==1||j==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int col=5;
    for(int i=1;i<=rows;i++){
        cout<<" "<<endl;
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int rows=5;
    int col=5;

    for(int i=1;i<=rows;i++){
        cout<<endl;
        for(int j=1;j<=rows;j++){
                if(j<=rows-i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }

    return 0;
} */

/*#include<iostream>
using namespace std;
int main(){
int rows=5;
for(int i=1;i<=rows;i++){
    cout<<endl;
    for(int j=1;j<=i;j++){
        cout<<i;
    }
}
return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
int rows=5;
int count=1;
for(int i=1;i<=rows;i++){
    cout<<endl;
    for(int j=1;j<=i;j++){
        cout<<count;
        count++;
    }
}
return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
int rows=4;
for(int i=1;i<=rows;i++){

    for(int j=1;j<=i;j++){
        cout<<"*";}
    for(int k=1;k<=2*(rows-i);k++){
        cout<<" ";}
    for(int j=1;j<=i;j++){
        cout<<"*";
            }
    cout<<endl;
}
for(int i=rows;i>=1;i--){

    for(int j=1;j<=i;j++){
        cout<<"*";}
    for(int k=1;k<=2*(rows-i);k++){
        cout<<" ";}
    for(int j=1;j<=i;j++){
        cout<<"*";
            }
    cout<<endl;
}

return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = 0;
    if(n==0||n==1){
        cout<<"niether prime nor compisote";
    }
    for (int div=2;div<n;div++){
        if(n%div==0){
            cout<<"not prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse;
   return 0;
}*/

/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int is_it_armstrong=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    if(sum==is_it_armstrong){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstsrong";
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int reverse=0;
    int num=n;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(reverse==num){
        cout<<num<<"  palindriome"<<endl;
    }
    else{
        cout<<reverse<<"  not palindrome ";
    }
   return 0;
}*/

/*#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
        return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std ;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}*/

// dsa c++ course

/*#include <iostream>

int main() {
    using namespace std ;
    int n ;
    cout<<"enter the number of element in array ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }


    return 0;
}*/

/*#include <iostream>
using namespace std ;
struct rectangle {
    int length ;
    int breadth ;
    char x ;
};

int main() {
    struct rectangle r1={10,15};
    r1.length=20;
    r1.breadth=30;
    cout << r1.length <<endl;
    cout<<r1.breadth<<endl;
    cout<<sizeof(rectangle)<<endl;

    return 0;
}*/

/*#include <iostream>
#include <stdio.h>
using namespace std ;
int main (){
    int a = 10;
    cout<<a<<endl;
    int *p;
    p=&a;
    cout<<*p<<endl<<p<<endl<<&a<<endl;
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
int main(){
using namespace std ;
    int A[5]={1,2,8,4,4};
    int *p;
    p=A;

    //array me iterate karke eke ek value me jaane ke liye loops use karte hai
always
    //for (int i=0;i<5;i++){
      //  cout<<p[i]<<endl<<p<<endl<<*p<<endl<<endl<<A[4];
    //}
return 0;
}*/

/*#include<iostream>
using namespace std ;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<a;
    }
    if (b>a && b>c) {
        cout<<b;
    } else {
        cout<<c;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std ;
int main (){
    int n ;
    cin>>n;
    int i =1;
    while (i<=n) {
        cout<<i;
        ++i;
    }
}*/

// memory allocation hierarchy heap stack then main so whenever we create
// soething it gets created in the stack meory malloc se c me heap me array
// store karate hai and new se c++ me

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int main (){
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for (int i =0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
int main (){
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for (int i =0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    delete[]p; // c++
    free(p); // c
    return 0;
}*/

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
struct rectngle {
    int l;
    int b ;
}; // it always comes befor main maemory sturctue
int main (){
    int *p1;
    float *p2;
    double *p3;
    bool *p4;
    char *p5;
    struct rectangle  *p6 ;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    cout<<sizeof(p6)<<endl;
    return 0;
}*/

// pointers and reference are different reference is just another name to print
// a variable and pointers are a type of variable which just store the memory of
// the data set pointer are denoted by *p and referennce are denoted by &r

/*#include <iostream>
using namespace std ;
int main (){
    int a = 10 ;
    int &r = a ;
    int b = 30 ;
    r=b;
    cout << a << r ;
    return  0 ;
}*/

// dynsamic saving means saving the data set ina heap memeory so it will run in
// run time rather thah n compile time malloc function returns values in tnhe
// void form so u have typecast the new data type after writung the code
/*#include <iostream>
using namespace std ;
struct rectangle {
    int l ;
    int b ;
};
int main (){
    struct rectangle *p;
    p=new struct rectangle;

    p->l =15;
    p->b =6 ;

    cout << p->l << p->b ;
    delete[]p;
    return 0 ;
}*/

/*#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
struct rectangle {
    int l ;
    int b ;
};
int main (){
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));

    p->l =15;
    p->b =6 ;

    cout << p->l << p->b ;
    delete[]p;
    return 0 ;
}*/

/*#include <iostream>
using namespace std;
int main() {

    int *p = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    for (int i = 0; i < 5; ++i) {
        cout << "p[" << i << "] = " << p[i] << " \t Address: " << &p[i] << endl;
    }

    delete[] p;

    return 0;
}*/

// monolith programming when every fuction is done inside main function only
// procedural or modular programming when we maake and define functions about
// main function and call them in main function objected oriented programming
// when we ake objects and functions and make a collection of objects as class

/*#include<iostream>

using namespace std ;
int add (int a , int b){
    int c ;
    c=a+b;
    return c;
}
int main (){
    int x , y , sum ;
    cin>>x;
    cin>>y;
    sum = add(x,y) ;
    cout<<sum;
    return 0;
}*/

/*#include <iostream>
using namespace std ;
void swap (int *num1 , int *num2 ){
    int temp ;
    temp = *num1;
    *num1=*num2;
    *num2=temp;
    cout<<*num1;
    cout<<*num2;

}
int main(){
    int x=10 , y=20 ;

    swap(&x,&y);

    return 0;
}*/

/*#include <iostream>
using namespace std ;
void swap (int &num1 , int &num2 ){
    int temp ;
    temp = num1;
    num1=num2;
    num2=temp;
    cout<<num1;
    cout<<num2;

}
int main(){
    int x=10 , y=20 ;

    swap(x,y);

    return 0;
}*/

// parameter passing by fuction 3 types by direct value by pointers and & with
// memory addresss and last by reference variable by &

// arrays are only passed by address

// array will be pass as pointers in a parameter and in a function also we cant
// use for loop in a pointer

/*#include <iostream>
using namespace std ;
void func(int A [ ]){
    for(int x : A)//we dont use for loops for pointers
}
int main (){
    int A [ ] = {1,2,3,4,5};
    int n =5 ;
    func(A);
    cout<<sizeof(A)<<sizeof(int);

    cout << x <<" ";

    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
void func(int A [ ],int n ){
    for(int i = 0 ; i<=n ; i++){
        cout<<A[i]<<endl;
}
}
int main (){
    int A [ ] = {1,2,3,4,5};
    int n =5 ;
    func(A,n);
    for (int x : A)
    cout<<x<<" ";
    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
void func(int *A,int n ){
    for(int i = 0 ; i<=n ; i++){
        cout<<A[i]<<endl;
}
}
int main (){
    int A [ ] = {1,2,3,4,5};
    int n =5 ;
    func(A,n);
    for (int x : A)
    cout<<x<<" ";
    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
void func(int *A,int n ){
    A[0]=15;

}
int main (){
    int A [ ] = {1,2,3,4,5};
    int n =5 ;
    func(A,n);
    for (int x : A)
    cout<<x<<" ";
    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
int * func (int size){
    int *p;
    p = new int[size];
    for (int i = 0 ; i<size;i++){
    p[i]=i+1;
    }
    return p;
}
int main (){
    int *ptr , sz=10 ;
    ptr=func(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;

    }

    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
struct rectangle {
    int l;
    int b;
};
void func(struct rectangle r){
    r.l=20;
    cout<<"l "<<r.l<<endl<<"b "<<r.b<<endl;//to print anything of a sructure u
have to put r means the name of the structure
                                                     //u have givem at the time
of entering valure with a dot (.)
}
int main (){
    struct rectangle r={10,5};
    func(r);
    printf("l %d \nb %d \n ",r.l,r.b);
    return 0 ;
}*/

/*#include <iostream>
using namespace std ;
struct rectangle {
    int l;
    int b;
};
void func(struct rectangle *p){
   p->l=20;
    cout<<"l "<<p->l<<endl<<"b "<<p->b<<endl;//to print anything of a pointer u
have to put -> means the name of the structure
                                                     //u have givem at the time
of entering valure with a arrow (->))
}
int main (){
    struct rectangle r={10,5};
    func(&r);
    printf("l %d \nb %d \n ",r.l,r.b);
    return 0 ;
}*/

/*#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std ;
struct rectangle {
    int l ;
    int b ;
};
struct rectangle  *func()
{
    struct rectangle *p;
    p=new rectangle;
    p->l=10;
    p->b=20;

    return p;
}
int main (){
    struct rectangle *ptr = func();
    cout <<ptr->l<<ptr->b ;
    return 0 ;
}*/

/*#include<iostream>
using namespace std ;
int main (){
    int l,b,area,peri;
    cout<<"enter the length";
    cin>>l;
    cout<<"enter the breadth";   // monolith programming
    cin>>b;
    area = l*b;
    peri = 2*(l+b);
    cout<<area;
    cout<<peri;
}*/

/*#include<iostream>
using namespace std ;
int area (int l , int b ){
    return l*b;
}
int perimeter(int l , int b) {
    return 2*(l+b);
}
int main (){
    int l , b ;
    l=0;
    b=0;
    cin>>l>>b;
    int a = area(l,b);
    int peri= perimeter(l,b); //modular programming
    cout<<a<<endl<<peri;
    return 0 ;
}*/

/*#include<iostream>
using namespace std ;
struct rectangle {
    int l;
    int b;
};
int area (struct rectangle r){
    return r.l*r.b;
}
int perimeter(rectangle r ) {  //if u have defined the struct one time then u
dont have to write strut multiple times in the para meter passing return
2*(r.l+r.b);
}
void initialise(struct rectangle *r ,int length , int breadth ) { //initialise
used as a pointer to get the values from the user r->l=length; r->b=breadth;
}
int main (){
    int l , b ;
    rectangle r = {0,0};

    cin>>l>>b;
    initialise (&r,l,b);
    int a = area(r);
    int peri= perimeter(r); //modular programming
    cout<<a<<endl<<peri;
    return 0 ;
}*/

/*#include<iostream>
using namespace std ;
struct rectangle {
    int l;
    int b;

int area (){
    return l*b;
}
int perimeter() {
    return 2*(l+b);
}
void initialise(int length , int breadth ) {
    l=length;
    b=breadth;
}
};
int main (){
    int l , b ;
    rectangle r = {0,0};

    cin>>l>>b;
    r.initialise (l,b);
    int a = r.area();
    int peri= r.perimeter(); //object oriented  programming
    cout<<a<<endl<<peri;
    return 0 ;
}*/
// in c ++ everything in class and structure are same just the difference is
// that everthing in class is by default privATE WHILe in structure it is public

/*#include<iostream>
using namespace std ;
class rectangle {
public:
    int l;
    int b;

int area (){
    return l*b;
}
int perimeter() {
    return 2*(l+b);
}
void initialise(int length , int breadth ) {
    l=length;
    b=breadth;
}
};
int main (){
    int l , b ;
    rectangle r; //object oriented program with classes

    cin>>l>>b;
    r.initialise (l,b);
    int a = r.area();
    int peri= r.perimeter(); //object oriented  programming
    cout<<a<<endl<<peri;
    return 0 ;
}*/

/*#include<iostream>
using namespace std ;
class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle ()
    {
        length=0; //default consturctor
        breadth=0;
    }
    rectangle (int l , int b )
    {
        length=l;  //parametrrised constructor
        breadth=b;
    }
    int area ()
    {
        return length*breadth; //methods
    }
    int perimeter ()
    {
        return 2*(length+breadth);
    }
    void setlegth (int l)
    {
        length=l;
    }
    void setbreadth (int b)
    {
        breadth=b;
    }
    int getlenght ()
    {
        return length;
    }
    int getbreadth ()
    {
        return breadth;
    }
    ~rectangle() //destructor
    {
        cout<<"deleted" ;
    }
};
int main(){
    rectangle r (77,77);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0 ;
}*/

/*#include<iostream>
using namespace std;
class arithmatic {
private:
    int a ;
    int b ;
public:
    arithmatic(int A, int B)
    {
        this->a=A;//ensuring clarity between class members and parameters with
the same name. this->b=B;
    }
    int add()
    {
        return a+b;
    }

    int sub()
    {
        return a-b;
    }
};
int main (){
    int a,b;
    cout<<"enter  ";
    cin>>a>>b;

    arithmatic ar(a,b);//if a constructor is parrametreterised then u have to
give the the argumnets means () symbol with values if it is default go without
parenthesis cout<<ar.add()<<endl<<ar.sub(); //whenever use any function in the
time of function calling u have to always use fuc_name with () always return 0 ;
}*/

// if we have to define function outside the class we have to use a :: scope
// resolution operator

/*#include<iostream>
using namespace std;
class arithmatic {
private:
    int a ;
    int b ;
public:
    arithmatic(int a , int b );
    int add();
    int sub();

};
    arithmatic::arithmatic(int a, int b)
    {
        this->a=a;//ensuring clarity between class members and parameters with
the same name. this->b=b;
    }
    int arithmatic::add()
    {
        return a+b;
    }

    int arithmatic::sub()
    {
        return a-b;
    }

int main (){
    int a,b;
    cout<<"enter  ";
    cin>>a>>b;

    arithmatic ar(a,b);//if a constructor is parrametreterised then u have to
give the the argumnets means () symbol with values if it is default go without
parenthesis cout<<ar.add()<<endl<<ar.sub(); //whenever use any function in the
time of function calling u have to always use fuc_name with () always return 0 ;
}*/

// Templates in C++ are a powerful feature that allows the creation of functions
// and classes that can operate with any data type. This feature is particularly
// useful for writing generic and reusable code.

/*#include<iostream>
using namespace std;
template<class T>
class arithmatic
{
private:
    T a ;
    T b ;
public:
    arithmatic(T a , T b );
    T add();
    T sub();

};
template<class T>
    arithmatic<T>::arithmatic(T a, T b)
    {
        this->a=a;//ensuring clarity between class members and parameters with
the same name. this->b=b;
    }
    template<class T>
    T arithmatic<T>::add()
    {
        return a+b;
    }
     template<class T>
    T arithmatic<T>::sub()
    {
        return a-b;
    }

int main (){
    int a,b;
    cout<<"enter  ";
    cin>>a>>b;

    arithmatic<int> ar(a,b);//if a constructor is parrametreterised then u have
to give the the argumnets means () symbol with values if it is default go
without parenthesis cout<<ar.add()<<endl<<ar.sub(); //whenever use any function
in the time of function calling u have to always use fuc_name with () always
    return 0 ;
}*/

// for template in every function out side the class u have to write
// template<class T> then u have to change every othwer data type into T also u
// have to write with the class and in the class name outside the class  have to
// again use class name with <T>

// arrangement of data in proper organisation so we can use them efficiently in
// main meromory is called data structures it is not in the storage meory it is
// in the main merory that is ram

// huge size data which is not required now it is data of past but can be used
// in future the place where it stored is called datawarehouse

// arrangement of data in the disk like hardisk is called data base

// with the growing of internet huge amout of data is getting stored day by day
// storing and manipulation that data is called big data

// memory is divided into smaller addressable units known as bytes //in big rams
// sizes are divided into smaller parts knows as segment which is around 64 gb
// in soze

// a program uses the main memory by divinding into 3 parts stack heap and main

// whatever variable we create and whatever memory we need these all memories
// are stored in the stack and memory needed to run the program is decided by
// compiler before runiing(run time) thats it is called static or stack as it is
// decided before compiling hence static

// memory allocated in the form of one over another in the time of function
// calling hence the memory allocation id a little stack type thats why it is
// also called stack

// heap memory is used for unorganise memory heap memory is like a resource when
// u want to use u use else u delete it also program not directly acess the heap
// merory it uses pointers to acess new keyword is used and u must delete after
// using dynamic or heap memory

// array static size fixed limit we use it when we are sure how big our data set
// is also it is stored in stack and heap with the help of pointers contiguous
// memory allocation

// linked list and arrays are physical data structures cause they shows how data
// is stored linked list is complete dynamic memory allocated

// logical data structures are stack queue trees hashtable graph
// stack last in first out
// queue firt in first out
// stack and queue are linear data structure
// trees and graph are non linear data structure
// hash table is tabular data structure
// all the operation are only done by physical data structure we use physical
// structure to implement logical data structure abstract data type any data can
// be shown as representation of data anad organisation of data abstract means
// hiding internal details in object oriented programming languages we use our
// own and created data types known as abstract data types it also increases
// modularity and resuability of data if one for loop tc 0(n) if 2 for loops tc
// o(n^2) if one for loops but it is alwas diving by 2 then tc is o(logn)

// function calling itself is called recursion , function calling again and
// again itself recursive function have 2 parts calling and returning it is like
// a strecthing of a rubber band recurrsion have both acending and decending
// phase but loops have only acending phase recursive functions are memory
// consuming functions they consume memorory in the stacks in the form of n+1
// and their oreder os order on n only

/*#include <iostream>
#include <cstdlib>
#include <ctime>

void guessTheNumber() {
    srand(static_cast<unsigned int>(time(0)));

    bool playAgain = true;
    while (playAgain) {
        int numberToGuess = rand() % 5 + 1;
        int guess;

        std::cout << "I have a number between 1 and 10.\n";
        std::cout << "Can you guess my number?\n";

        do {
            std::cout << "Please type your first guess: ";
            std::cin >> guess;

            if (guess < numberToGuess) {
                std::cout << "Too low. Try again.\n";
            } else if (guess > numberToGuess) {
                std::cout << "Too high. Try again.\n";
            } else {
                std::cout << "Excellent! You guessed the number!\n";
            }
        } while (guess != numberToGuess);

        char response;
        std::cout << "Would you like to play again (y or n)? ";
        std::cin >> response;
        if (response != 'y' && response != 'Y') {
            playAgain = false;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}*/

/*#include<stdio.h>
void fun(int n){
    if(n>0){
        printf("%d",n);
        fun(n-1);
    }
}
int main (){
    int x = 3;
    fun(x);
    return 0 ;
}*/

/*#include<stdio.h>
void fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d",n);
    }
}
int main (){
    int x = 3;
    fun(x);
    return 0 ;
}*/

// static and global variable will only have a single copy they dont change
// their value depending upon there positioning they get stores in the code
// memory and always copy the same value

/*#include<stdio.h>
static int x = 0;
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1)+x; //static variable
    }
    return 0 ;
}
int main (){
    int r ;
    r=fun(5);
    printf("%d",r);
}*/

/*#include<stdio.h>
int x = 0;
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0 ;     //global variable
}
int main (){
    int r ;
    r=fun(5);
    printf("%d\n",r);
    r=fun(5);
    printf("%d\n",r);
}*/

// there are 5 types of recursion tail ,head ,tree ,nested ,indirect
// tail recurion is the recursion in which the recursive part of function
// calling is the last statement of the function in this every operation is done
// in the reuturning time and also there must be no function in the returning
// time . we can write recursive function in the the form of loops and vice
// versa tail recursion can be easily converted into loops space taken by
// recursion will be order of n while space taken by loops will be just order of
// n in case of tail recurssion loops are more efficient head recursion is the
// type of recursion where the calling of the function is at the top and the
// first statement in the recursion calling statement it can be converted in the
// form loops but it will not looks as it is a little chnage we will have to do
// if a recursive funtion calls itself more then one time then it is called tree
// recursion  time complexity we canculate by seeing and space is o(n+1)

/*#include<stdio.h>
void fun(int n){
    if(n>0){
    printf("%d ",n);
    fun(n-1);
    fun(n-1);    //tree recursion
    }
}
int main(){
    fun(5);
    return 0;
}*/

// indirect recursion is the type of recursion where each function is connected
// to another function indirectly forming a cyclic pateern

/*#include<stdio.h>
void funB(int n);
void funA(int n){
    if(n>0){
    printf("%d ",n);
    funB((n-1));
    }}
void funB(int n){
    if(n>1){
        printf("%d ", n);   //indirect recursion
        funA(n/2);
    }

}
int main(){
    funA(20);
    return 0;
}*/

// nested recursive function means if a function is called again by same
// function then its recursion is called nested recursion

/*#include<stdio.h>
int fun(int n){
    if(n>100){
        return (n-10);}
    return fun(fun(n+11));

}
int main(){   //nested recursion
    int r;
    r=fun(101);
    printf("%d ",r);
    return 0;
}*/

/*#include<stdio.h>
void fun(int n){
    if(n>0){
        printf("%d ",n);
        fun(n-1);   //tail recursion
    }
}
int main(){
    fun(3);
    return 0 ;
}*/

// sum of n natural number can be done by 3 ways by mathmatical formula n(n+1)/2
// or by loops and by recursion by recursion is code below

/*#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0 ;
    }
    else{
        return sum(n-1)+n;  //sum of n natural nuber using recursion
    }
}
int main(){
    printf("%d ",sum(5));
    return 0;
}*/

/*#include<stdio.h>
int fact(int n){
   if(n==0){
       return 1 ;
   }
   else{
       return fact(n-1)*n;  //factorial number using recursion
   }
}
int factI(int n){
   int f=1;
   for(int i=1;i<=n;i++){        //using itertative loops approach
       f=f*i;
   }
   return f;
}
int main(){
   printf("%d ",fact(5));
   printf("%d ",factI(5));
   return 0;
}*/

// power function there are mainly 3 types first when 0 ans 1 then when even
// number m*m,n/2 then when odd m*m,n-1/2

/*#include<stdio.h>
int power(int m,int n){
    if(n==0){
        return 1 ;
    }
    else{
        return power(m,n-1)*m ;
    }
}
int power1(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return m*power(m*m,(n-1)/2);   //pwer with 2 approaches
    }
}
int main(){
    int r ;
    int q;
    r=power(2,9);
    q=power(2,8);
    printf("%d ",r);
    printf("%d ",q);
}*/

// taylor series goes like e^x=1 + x/1! + x^2/2! + like the so in short we use
// all 3 functions here sum fact and power

/*#include<stdio.h>
double e(int x,int n){
    static double p=1 , f=1;
    double r;
    if(n==0){
        return 1;   // taylor series
    }
    r=e(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}
int main(){
    printf("%lf ", e(1,15));
}*/

// using hornet rule we decreaase the time complexity of taylor series from
// qudractic to linear as using haornet series it is done by by taking common
// and multiplication

/*#include<stdio.h>
double e(int x,int n){
    static double s=1;
    if(n==0){
        return s;   // horner taylor series recursion
    }
    s=1+x*s/n;
    return e(x,n-1);
}
int main(){
    printf("%lf ", e(1,15));
}*/

/*#include<stdio.h>
double e(int x,int n){
    double s = 1;
    double num=1;
    double den=1;
    for(int i = n;i>=1;i--){
        num=num*x;
        den=den*i;
        s=s+num/den;
    }                                        // horner taylor series loops
    return s;
}
int main(){
    printf("%lf ", e(1,15));
}*/

// fibinacci means the third term is the sim of firt 2 terms like 0 1 1 2 3 5 8
// like this , there are easy ways like just adding f(n-1)+f(n-2)it take
// complexity of around 2^n while iterartive approach take the complexity of
// aroind n so we are interested to see the improved version of this the
// improved version tc is order of n ,, calling each function multiple time is
// called excessive recursion memoization means storing the result in a array so
// we can use it again which decrease time complex

/*#include<stdio.h>
int fib(int n){
    int t0=0,t1=1,s=0;
    if(n<=1){
        return n   //
    }
    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int fibr(int n){
     if(n<=1){
        return n;
    }
    return fibr(n-2)+fibr(n-1);
}
int F[10];
int fibm(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{                                //all types of fibonacci codes
        if(F[n-2]==-1){
            F[n-2]=fibm(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fibm(n-1);
        }
        F[n]=F[n-2]+F[n-1];

    return F[n-2]+F[n-1];    }
    }
int main(){
    for(int i=0;i<10;i++){
    F[i]=-1;
    }
    printf("%d ",fibm(6)) ;

}*/

// ncr we can print by 2 ways one by formula and one by recursion by recursion
// we use pascal triangle by addding 2 previious elements of pascal triangle we
// do tae addition

/*#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int ncr(int n,int r){
    int num ;
    int den ;
    num = fact(n);
    den = fact(n-r)*fact(r);
    return num/den;
}
int ncrpascal(int n,int r){
    if(r==n||r==0){
        return 1;
    }
    return ncrpascal(n-1,r-1) + ncrpascal(n-1,r);
}

int main(){
    printf("%d ",ncrpascal(5,2));
}*/

// tower of hanoi problem is the type of problem where u have mainly 3 bars and
// 3 disks in this you have to set the 3 disks from first bar to third bar u
// have no. of disks and source bar and intermediate bar and destination bar in
// the order of TOH(no.,s,i,d)like in this order there are some conditions too
// like u cant place big element and lower disk below also the order of orders
// of didk must be same like from big to small or small to big also we cant omve
// 2 disk at a tiem
//2^n - 1 total step 

/*#include<stdio.h>
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        printf("(%d,%d)",a,c);
        toh(n-1,b,a,c);
    }
}
int main (){
    toh(4,1,2,3);
}*/

// quiz 1 (recursion) cheeck udemy for rivision
/*Question 1:
Consider the following  C function
int f(int n)
{
static int i = 1
if (n>=5)return n;
n = n+i;
i++;
return f(n);
}
the value returned by f(1) is ans 7*/

// when u have any static variable us hould take it separately in a abox like
// structutre

// arrays are the collectiuon of same data elements which is stored under one
// name (list of elemnts) memory allocation is contiguois that is one after the
// another using name and index we can look thorugh the desired elemnet
// traversing means going through all the elements atleast one time , in the
// time of printing the element any element then u can do either a[i]ori[a]
// adress print karne ke liye we use %u in c language and & symbol ka use karte
// hai once a array is created its size cant be modified array gets stored in
// the stack for acessing anything from the heap we need a pointer malloc is use
// in c and new is used in c++ (type caste data*)malloc(no of elements*size of
// elements) while in c++ just use p=new int[5]

/*#include<stdio.h>
#include<stdlib.h>
int main(){
int A[5]={1,2,3,4,5};
int *p;
p=(int *)malloc(5*sizeof(int));
p[0]=11;
p[1]=22;
p[2]=33;
p[3]=44;
p[4]=55;
free (p);
for(int i=0;i<=5;i++){
    printf("%d" ,A[i]);
    }
printf("\n");
for(int i=0;i<=5;i++){
    printf("%d" ,p[i]);
}
}*/

// array sizes cant be increased as array needs contiguous memory allocations to
// save data and we cant guarentee that memory allocations are free as before

/*#include<stdio.h>
#include<stdlib.h>
int main (){
    int *p,*q;
    p=(int *)malloc(5*(sizeof(int)));
    p[0]=1;
    p[1]=3;
    p[2]=4;
    p[3]=5;
    p[4]=2;
    q=(int *)malloc(10*(sizeof(int)));

    for(int i=0;i<=4;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<=4;i++){
        printf("%d \n",p[i]);
    }
    return 0;
}*/

// a[i][j] is a example of 2 dimensional arrays where i is row and j is coloumn
// we need 2 for loops to raverse in 2d arrays first one goes from i for rows
// and next one goes in j for columns suppose a aaray is empty A[] then it
// prints the garbage value  suppose A[5]={1,2,3} then it will print 2 0s and at
// last if u have print the elements of arrays u have to either go for for loop
// and traverse all the elements

/*#include<stdio.h>
#include<stdlib.h>
int main (){

int a[3][4]={{1,2,3,4},{5,6,7,8},{1,2,3,4}}; //all stored in stack

int *b[3];//rows sotred in stack rest in heap
b[0]=(int *)malloc(4*sizeof(int));
b[1]=(int *)malloc(4*sizeof(int));
b[2]=(int *)malloc(4*sizeof(int));

int **c;//everything is stored in stack
c=(int **)malloc(3*sizeof(int*));
c[0]=(int *)malloc(4*sizeof(int));
c[1]=(int *)malloc(4*sizeof(int));
c[2]=(int *)malloc(4*sizeof(int));

for(int i=0;i<3;i++){                       //for rows
     for(int j=0;j<4;j++){                  //coloumns
        printf("%d ",c[i][j]);

        //printf("%d \n",b[3][4]);
        //printf("%d \n",a[3][4]);
    }
    printf("\n");//isliye loop ke bahar kiya kyuki vo rows ke liye tha
}
return 0;
}*/

// formula use by compiler to get memory address of any array is
// addressA[i]=l(0){adress of first element}+(i*size of datatype) here is
// indexing of that specific element

// to represent a 2d array in 1d we use 2 methods row major method and coloumn
// major method in row major metthod we use row wise peresentation one after
// another row major formula here i are rows number and j is coloumn number and
// m is total row elem and n is total col elem = adressA[i][j]= l(0) +
// (i*n+j)(size of datatype) agr index 1 se chalu ho raha hai toh i ke jagh i-1
// ho jaayega dhyaan dena iss baat ka for eg A[5][4] iss ka ye find karo
// A[2][3]=200+(2*4+3)*2 2 d arrays are stored in a sigle array only

// coloumn major formula , supoose ek array hai 2d A[4][5] adrress chiye
// A[1][4]ka = l(0)+(j*m+i)*size of datatype for row major we go from left to
// right from start for coloumn major we go from right to lfet from back part

// formulas for nd arrays
// suposoe type A[d1][d2][d3][d4][d5]
// then its row major formula will be
// address
// (A[i1][i2][i3][i4][i5])=l(0)+[i1*d2*d3*d4*d5+i2*d3*d4*d5+i3*d4*d5+i4*d5+i5]*size
// of datatype we are going from left to right from start in row major formula
// as seen above address
// (A[i1][i2][i3][i4][i5])=l(0)+[i5*d1*d2*d3*d4+i4*d1*d2*d3+i3*d1*d2+i2*d1+i1]*size
// of datatype this is atype of colounm major here we are going from right to
// left from end

// so in general or nd it is = l(0)+ sigma(p=1 se p=n)(i(p) * pi(q=p+1 se q=n
// tak)dq)*size of datatype

// when we see the time complexity of this formula its ranging from 0(n^2) but
// when we take common its time complexity is around o(n) so by taing the things
// common we decresased the time complexity so this technique of taking things
// common is alos known as horners rule

// quiz 2 direct wahi se jaake dekh lo
// check question 2 of quiz (tough)

// abstract data type means represenation of data and the operations based on
// that it also tell us about implementattion of data rather than how it exactly
// works represenattion : array space , size(total number of elements it can
// store) , length (no of elements) operations : display , add/append , insert ,
// delete , search , get , set , max/min , revrse , shift/rotate

// while using input in c with the help of scanf always use & and while making a
// structure call it with the help of structure variable everytime along with
// the dot symbol

/*#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("elements are ");
    for(i = 0 ; i <arr.length ; i++){
        printf("%d",arr.A[i]);
    }
}

int main(){
    struct Array arr;
    printf("Enter the size of array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;                                       //array abstract datatype dynamic memory aloocation 
    printf("Enter the total no of elememnts in array u want ");
    int n ;
    scanf("%d",&n);
    printf("Enter all the elememnts in array");
    for(int i=0 ;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;
    display(arr);
    return 0 ;
}*/

/*#include<iostream>
struct array
{
    int a[20];
    int size;
    int length;
};
void display (struct array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d",arr.a[i]);
    }
}
int main (){
    struct array arr={{1,2,3,4,5},20,5};  //by static memory allocation in stack size is fixed  
    display(arr); 
    return 0;
}*/

// appending or adding a element means adding the element at the last of the
// array     tc o(1)

// inserting a element means inserting a element at whatever index we want its
// min tc is o(1) and max tc is o(n) we have to change the indexing of every
// prior element depending upon the index of the element to be inserted we dont
// leave blank places in between array at the time of deletion
/*#include<stdio.h>
struct array
{
    int a[20];
    int size;
    int length;
};
void display (struct array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d",arr.a[i]);
    }
}
void append (struct array *arr,int x){        //here pointer is being used
because it is going to change the value of array if(arr->length<arr->size)
        arr->a[arr->length++]=x;
}
void insert (struct array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
        for(int i = arr->length;i>index;i--){
            arr->a[i]=arr->a[i-1];
        }
        arr->a[index]=x;
        arr->length++;
    }
}
int delet (struct array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->a[index];
        for(int i = index;i<arr->length-1;i++){
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main (){
    struct array arr={{1,2,3,4,5},20,5};
    append(&arr,20);         //adding the element at the last indx
    insert(&arr,2,56);       //inserting a element by index           it will
not print the any index as it can traverse through the valid index only
    printf("%d\n",delet(&arr,6));  //deleting
    display(arr);
    return 0;
}*/

// there are mainly 2 types of searching binary and linear  searching means
// finding a respective element in the whole set in searching there must be
// always unique elements present in linear search we always search for
// respective key elemnt we compare it to the element we have to find in a
// linear fashion and do the manipulation if the key elemnt is found the search
// is sucessful if no the search is unsucessful linear search best time comp is
// 0(1) and worst case is 0(n) avg case is tough to find you have to add all the
// tc of every step ie : n(n-1)/2/n=(n-1)/2 is avg case tc improving linear
// seach to make it faster we can use tranposition in this whenever we find a
// element we move it by one step forward so next time it wil be searched again
// in tranposition there is a sudden decrease in tc of elements as the one which
// is being searched is coming towards first element and the one which is  not
// seached is going away from the first element one more type of improvement is
// The second method is you can directly swap the key element to the first
// element this process is called move to head . The next search for the same
// element becomes faster.

/*#include<stdio.h>
struct array {
    int A[10];
    int size;
    int len;
};
void display(struct array arr){
    printf("The elements in the array are ");
    for(int i = 0;i<arr.len;i++){
        printf("%d",arr.A[i]);
    }
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int linears(struct array *arr,int key){
    for(int i=0;i<arr->len;i++){
        if(key==arr->A[i]){
            if(i>0){
                swap(&arr->A[i],&arr->A[i-1]);}  // for move to head just change i-1 to 0 return i;       //whenever returning a something using return keyword
alwsy use printf at the time of fuction call
        }
    }
    return -1;
}
int main(){
    struct array arr = {{1,2,3,4,5},10,5};
    printf("%d\n",linears(&arr,4));
    display(arr);
    return 0;
}*/

// binary search in this the array must be sorted prior an dalso it starts from
// the mid of the arrays and divides the array into 2 that why it is known as
// binary it has basicallyy 3 componenets high low and mid ie : l+h/2 we can do
// the binary search by boht ways recursively by recursion and iteratively by
// for loops

/*#include<stdio.h>
struct array
{
    int A[10];
    int size;
    int len;
};
void display(struct array arr){
    for(int i=0;i<arr.len;i++){
        printf("%d",arr.A[i]);
    }
}*/
/*int binarysearch(struct array arr , int key){    //iterative approach
    int l,h,mid;
    l=0;
    h=arr.len-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if (key>arr.A[mid])
        {
            l=mid+1;
        }
        else if (key<arr.A[mid])
        {
            h=mid-1;
        }
    }
    return -1;}*/

/*int binarysearchr(int a[],int l,int h,int key){
    int mid = 0;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if (key<a[mid]){
            return binarysearchr(a,l,mid-1,key);
        }
        else return binarysearchr(a,mid + 1,h,key);
    }
    return -1;
}

int main(){
    struct array arr={{1,2,3,4,5},10,5};
    //printf("%d\n",binarysearch(arr,1));
    printf("%d\n",binarysearchr(arr.A,0,arr.len,5));
    display(arr);
    return 0;
}*/

// tc of binary search best case is o(1) and worst case is order of o(logn) with
// the help of height of tree we find it sucessive division is log and
// successive multiplication is power ie inverse of power is log avg case for
// binary search is o(log n) total number of external nodes = total number of
// internal node + 1 E=sum of path of external node , I=sum of path of internal
// node , n=total number of internal node -> E=I+2n get function tells us about
// the index at which the desired element is present  tc o(1) set is used to
// overright or replacing the value at a given index   tc o(1) max function will
// tell the greatest element in a array      tc o(n) min function will tell the
// smallest element in a array      tc(n) sum will do the sum of each individual
// element till the end of array     tc o(n) avg will just divide the sum by no
// of element tc o(n)

/*#include <stdio.h>
struct array {
  int A[10];
  int size;
  int length;
};
void display(struct array arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d", arr.A[i]);
  }
}
int get(struct array arr, int index) {
  if (index >= 0 && index < arr.length) {
    return arr.A[index];
  }
  return -1;
}
void set(struct array *arr, int index,
         int x) { // here we use pointer concept because the value inside array// gonna change
  if (index >= 0 && index < arr->length)
    arr->A[index] = x;
}
int max(struct array arr) {
  int i;
  int max = arr.A[0];
  for (i = 0; i < arr.length; i++) {
    if (arr.A[i] > max) {
      max = arr.A[i];
    }
  }
return max;
}
int min(struct array arr) {
  int i;
  int min = arr.A[0];
  for (i = 0; i < arr.length; i++) {
    if (arr.A[i] < min) {
      min = arr.A[i];
    }
  }
  return min;
}
int sum(struct array arr) {
  int s = 0;
  for (int i = 0; i < arr.length; i++) {
    s = s + arr.A[i];
  }
  return s;
}
float avg(struct array arr) { 
  return (float)sum(arr) / arr.length; }
int main() {
  struct array arr = {{1, 2, 3, 4, 5}, 10, 5};
  display(arr);
  printf("%d \n", get(arr, 2));
  set(&arr, 4, 10); // void ko direct just function name se print kar sakte hai
  printf("%d \n", max(arr));
  printf("%d \n", min(arr));
  printf("%d \n", sum(arr));
  printf("%f \n", avg(arr)); // jb bhi hum function me return likhte hai toh call ke time , we always use cout to get the value of the function
}*/

//there are typically 5 methods reverse,left shift,left rotate,right shift,right rotate 
//revrse tc o(n) just reversing the whole array 
//in left shift and left roatate all elements will be shifted to left one by one and and one left space will be left empty when all the elments will be shifted rotation means that space will be filled by the elements which is remvoed int he proecess of shifting forming a cyclic represetataion
//similary for right shift things will hapen only in the right direction 

/*#include<stdio.h>
#include<stdlib.h>
struct array {
    int A[10];
    int size;
    int len;
};
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void reverse(struct array *arr){        //we are using pointer here because we want to change the value of array
    int *B;
    B=(int *)malloc(arr->len * sizeof(int));                 //reverse the array 
    int i , j;
    for(i=arr->len-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<=arr->len-1;i++){
        arr->A[i]=B[i];
    }
}
void reverse2(struct array *arr){                    //revrese array swap 
    for(int i=0,j=arr->len-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    } 
}
void leftshift(struct array *arr){          //left shift
    for(int i=0;i<arr->len-1;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->len-1]=0;
}
void leftr(struct array *arr){
    int first_ele = arr->A[0];
    for(int i=0;i<arr->len-1;i++){                //left rotation
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->len-1]=first_ele;
}
void rightshift(struct array *arr){              //right shift
    for(int i=arr->len-1;i>0;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=0;
}
void rightr(struct array *arr){
    int last_ele = arr->A[arr->len-1];            //right rotation 
    for(int i=arr->len-1;i>0;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=last_ele;
}
void display(struct array arr){                       //display 
    for(int i=0;i<arr.len;i++){
        printf("%d",arr.A[i]);
    }
}
int main (){
    struct array arr = {{1,2,3,4,5},10,5};
    //rightr(&arr);
    //rightshift(&arr);
    //leftshift(&arr);
    //leftr(&arr);
    //reverse2(&arr);
    display(arr);
    return 0;
}*/

/*#include<iostream>   //armstrong no 
#include<cmath>
using namespace std;
int armstrong(int n){
    int a=n;
    int sum=0;
    while(n>0){
        int remainder_lastdigit=n%10; //last didgit milti hai 
        sum = sum + pow(remainder_lastdigit,3);  // to do the cube of each digit 
        n=n/10;     // to shift to next number 
    }
    if(a==sum){
        cout<<"it is a armstrong no";
    }
    else{
        cout<<"it is not";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter to check the no is armststrong or not "<<endl;
    cin>>n;
    armstrong(n);
    return 0;
}*/

//to convert binary to decimal 
/*#include<iostream>
using namespace std;
int main(){
    int dec=0,bin,base,lastd;
    base=1;
    cout<<"ENTER THE BIN NO : "<<endl;
    cin>>bin;
    while(bin>0){
        lastd=bin%10;   //to find last digit
        dec=dec+base*lastd;
        bin=bin/10;
        base=base*2;
    }
    cout<<"THE DECIMAL NO IS : "<<endl<<dec;
    return 0;
} */

//generalise code for armsstrong no
/*#include<iostream>
using namespace std ;
int armst(int n){
    int store = n; //stores the digit of n so that will not get chnaged after the loop to 0 it mainly stores the origial value 
    int sum = 0;
    int noofdigits = 0;
    int temp = n;
    while(temp>0){
        temp=temp/10;
        noofdigits++;
    }
    while(n>0){
        int lastd=n%10;
        sum = sum + pow(lastd,noofdigits);
        n=n/10;
    }
    if(store==sum){
        cout<<"The no is arms";
    }
    else{
        cout<<"the no is not";
    }
    return 0;
}
int main(){
    int n ;
    cout<<"IS THE NO. IS ARMSSTRONG OR NOT "<<endl;
    cin>>n;
    armst(n);
    return 0;
}*/

//fibinacci
/*#include<iostream>
using namespace std ;
int main(){
    int n;
    int temp;
    int sum = 0;
    cout<<"ENTER THE NO OF TERMS : ";
    cin>>n;
    int num  = 0;
    int num1 = 1;
    for(int i=1;i<=n;i++){
        cout<<num<<"   ";
        temp = num ;
        num = num1 + num;
        num1 = temp ;
        sum = sum + num ;
    }
    cout<<endl<<sum<<endl;
    return 0 ;
}*/

//for loop is used to know when we have a limit or range to do the things and while loop we mostly used when we dont know a condition 
//rearrange means when we put -ve elements on one side and +ve elements on one side  
//if the present no is smaller than the next number then the series or array is know as sorted  its
//inserted a element in a sorted array means inserting at specific index where that value is suit its tc o(n)
/*#include<stdio.h>
#include<stdlib.h>
struct array {
    int A[10];
    int size ;
    int len ;
};
void display(struct array arr){
    int i ;
    for(i=0;i<arr.len;i++){
        printf("%d",arr.A[i]);
    }
}
void insertsort(struct array *arr,int x){
    int i = arr->len-1;
    if(arr->len==arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->len++;
}
int issort(struct array arr){
    for(int i = 0; i<arr.len-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0 ;
        }
    }
    return 1 ;
}
void swap(int *x , int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
void rearrange(struct array *arr){
    int i=0;
    int j = arr->len-1;
    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[j]>0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
} 
struct array* merge(struct array *arr1,struct array *arr2){
    int i ,j ,k ;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr1->len;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->len;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->len = arr1->len+arr2->len;
    arr3->size=10;

    return arr3;
}
int main (){
    //struct array arr = {{-1,-2,3,4,-5},10,5};
    struct array arr1 = {{ 2,6,10,15,25},10,5};
    struct array arr2 = {{3,4,7,18,20},10,5};
    struct array *arr3;
    arr3 = merge(&arr1,&arr2);
    display(*arr3);
    //rearrange(&arr);  //here we will not use printf because this function will only chnage the array and doest not return anything 
    //printf("%d \n",issort(arr)); check whether the sorting is happening or not 
    //insertsort(&arr,8); sorting at specific index 
    //display(arr);
    return 0;
}*/

//some of the binary functions on the array are append(adding the elements in the array modification done in the same array) ,concat(combining the array ahppens in a different array), comapre(checking whether both array have same elements or not ), copy(copy the elements in the array in 2nd array)
//similar to this we have merge where both arrays aare sorted and we combine both array to make a single sorted array
//here tc is o(m+n)

//we can also perform some operation in arrays like union tc o(n^2) if both the arrays are sorted already then ignore the duplicate elements and follow the merge process if the array is sorted then its tc is o(n),intersection in this the elements present in both the arrays will be taken in this we also have 2 cases first when the array is sorted and another when the array is not sorted its time complexity is o(n^2) when it is sorted its time compexity is o(n) in short we are only copying duplicates ,difference in difference operator we only take elements which is present in first array but not in 2nd array tc when the array is not sorted is o(n^2) when the array is sorted the order of (n),set memebership same like searching 

/*#include<stdio.h>
#include<stdlib.h>
struct array {
    int A[10];
    int size;
    int len;
};
void display(struct array arr){
    for(int i=0 ; i<arr.len ; i++){
        printf("%d",arr.A[i]);
    }
} 
struct array* unisort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if (arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->len;i++){        //use for copying thr elements 
        arr3->A[k++]=arr1->A[i];
    }    
    for(;j<arr2->len;j++){
        arr3->A[k++]=arr2->A[j];
    }    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
} 
struct array* interssort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if (arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
}
struct array* diffesort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if (arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->len;i++){
        arr3->A[k++]=arr1->A[i];
    }    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
}
//student excersize to do the same operations but in unsorted array 
void sortarray(struct array *arr){
    int temp ;
    for(int i=0;i<arr->len-1;i++){
        for(int j=0;j<arr->len-1-i;j++){
            if(arr->A[j]>arr->A[j+1]){
                temp = arr->A[j];
                arr->A[j]=arr->A[j+1];
                arr->A[j+1]=temp;
            }
        }
    } 
}
struct array* unionnonsort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    sortarray(arr1);
    sortarray(arr2);
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if (arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->len;i++){        //use for copying the elements 
        arr3->A[k++]=arr1->A[i];
    }    
    for(;j<arr2->len;j++){
        arr3->A[k++]=arr2->A[j];
    }    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
}
struct array* intersnonsort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    sortarray(arr1);
    sortarray(arr2);
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if (arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
} 
struct array* diffenonsort(struct array *arr1,struct array *arr2){
    int i , j , k ;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->len && j<arr2->len){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if (arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->len;i++){
        arr3->A[k++]=arr1->A[i];
    }    
    arr3->len = k ;
    arr3->size = 10 ;
    return arr3; 
}
int main(){
    struct array arr1 = {{1 ,7 ,5 ,3 ,9 },10,5};
    struct array arr2 = {{1 ,8 ,6 ,2 , 10},10,5};
    struct array *arr3;
    arr3 = diffenonsort(&arr1,&arr2);
    display(*arr3);
    return 0 ;

    // for set memebership it is same as binary and linear search juts copy that
}*/

// menu driver program means use the case for switch and case and call all the elements accordingly check its pdf for more info i am not adding it here (vide n0 : 118)
//in c languge u get input with the help of scanf and use & smbol at the time of taking input 
//this video is based on how to convert c program to c++ so here mainly we are making a class and its object and giving its data members functions acess specifiers then we will sue constructor and parametrised constructors and all then and all like that to get more referernce see video (119)

//finding missing element only sigle didgit in sorted and unsorted array its tc o(1)

/*#include<stdio.h>
struct array{
    int A[15];
    int size;
    int len;
};
void display(struct array arr){
    for(int i = 0;i<arr.len;i++){
        printf("%d",arr.A[i]);
    }
}
//In summary, initializing variables ensures the program starts with well-defined values, avoids unpredictable behavior, and ensures logical correctness throughout the execution.
int missing(struct array arr){
    int tsum  = (arr.A[arr.len-1]*(arr.A[arr.len-1]+1))/2 ; //sum of n natural number n(n+1)/2 this method is typically used for sorted array
    int sum = 0 ;
    for(int i = 0;i<arr.len;i++){
        sum = sum + arr.A[i];
    }
    return tsum-sum ;
}
int missing2(struct array arr){
    int diffe=arr.A[0]-0 ;    //initialising is always necessary 
    int i ;                   //in this we are taking difference from element and its index and comparing this method is  mostly used in unsorted array 
        for(i = 0 ; i < arr.len ; i++){
            if(arr.A[i]-i!=diffe){
                return diffe + i ;
        }
        }
    return -1 ;
}
void missingmultiple(struct array arr){   //its tc o(n)
    int diffe = arr.A[0]-0;
    int i ;
    for(i=0;i<arr.len;i++){
        if(arr.A[i]-i != diffe){
            while (diffe<arr.A[i]-i)
            {
                printf("%d",i+diffe);
                diffe++;
            }
            
        }
    }
}
//there are many methods for finding the missing element in a array one of this method is using hash table we can do it in o(n) time 
// we do it with the help of hash tables and if space is not a constrain then hashing is best  
void missing3(struct array arr ,int l,int h){
    int hash[h+1];       //making a hash array greater than largest size of array original 
    for ( int i = 0; i <=h ; i++){         //setting up hash array all the elemets 0 
        hash[i]=0;
    }
    for (int i = 0 ; i < arr.len ; i++){      //checking all the elements which is present in the original array and making it 1 in hash  
           hash[arr.A[i]]=1;
    }
    for(int i = l ; i <= h ; i++){
        if(hash[i]==0){
            printf("%d",i) ;
        }
    }
}
int main(){
    struct array arr1 = {{6,7,8,9,11,12,15,16,17,18,19},15,11};
    missing3(arr1,6,19);
    return 0 ;
}*/

//finding duplicates in a sorted array also counting no of duplicate arrays tc is order of n 
/*#include<stdio.h>
int main(){
    int array[10]={2,3,4,5,5,6,7,8,8,8};
    int duplicate = 0 ;  //storing duplicate lements 
    int i ;
    for(i=0;i<9;i++){  //indeing is from 0 to 9 
        if(array[i]==array[i+1] && array[i]!=duplicate){
            printf("%d\n",array[i]);
            duplicate=array[i];
        }
    }
    return 0 ;
}*/

//counting the no of total duplicates 
/*#include<stdio.h>
int main (){
    int array[10] = {1,2,3,4,5,5,5,6,6,7};
    int i, j;
    
    for(i = 0; i < 9; i++){
        if(array[i] == array[i+1]){  // Compare current element with the next one
            j = i + 1;  // Initialize j to i+1
            while(array[j] == array[i] && j < 10){  // Count how many times the duplicate appears
                j++;
            }
            printf("%d appears %d times\n", array[i], j - i);  // Print the element and the count
            i = j - 1;  // Move i to skip the counted duplicates
        }
    }
    
    return 0;
 }*/
//now we gonna do it by hashing in hashing we make one more array which will be equal to max element in the first array and the total indix of 2nd array will be amx elemnt plus 1 as the indexes starts from 0
//its complexity is o(n) ie linear 
/*#include<stdio.h>
int main(){
    int A[10] = {1,2,3,4,4,5,5,6,6,6};
    int H[7] = {0};//going from 0 to 6 ie 7
    int i;
    for(i=0;i<10;i++){
        H[A[i]]++;
    }
    for(i=0;i<7;i++){
        if(H[i]>1){
            printf("%d appaears %d \n",i,H[i]);
        }
    }
    return 0;
} */
//for unsorted array counting he duplicates elements its tc is o(n^2)
/*#include<stdio.h>
int main (){
    int A[10] = {8,3,6,4,6,5,6,8,2,7};
    int i , j , count ;
    for(i=0;i<9;i++){
        count = 1 ;
        if(A[i]!=-1){       //-1 denotes here that elementy is present there so thats why it is checking the condition here also measn the elements are not repeating 
            for(j=i+1;j<9;j++){
                if(A[i]==A[j]){
                    count ++ ;
                    A[j]=-1;
                }
            }
        }
        if(count>1){
            printf(" %d, %d",A[i],count);
        }
    }
    return 0 ;
}*/

//2nd method with hashing with tc of o(n) linear 
/*#include<stdio.h>
int main(){
    int A[10] = {8,3,6,4,6,5,6,8,2,7};
    int max = 8 ;
    int hash[max + 1] ; //creation of hash table 
    int i ;
    for (i=0;i<=max;i++){
        hash[i]=0; //== this is use when we have to checvkl the equality of 2 things for assignment only one = is used 
    }
    for (i=0;i<9;i++){   //storing all the array one elemeunt in the hash table 
        hash[A[i]]++;
    }
    for (i=0;i<=max;i++){
        if(hash[i]>1){
            printf(" %d appaers %d ",i,hash[i]);
        }
    } //checking the duplicates elemnts 
    return 0 ;
} */

//find a pair with sum k 
//the tc of this will be o(n^2) quadractic time complexity 

/*#include <stdio.h>
int main (){
    int A[10] = {6,3,8,10,16,7,5,2,9,14};
    int i ,j;
    for(i=0;i<9;i++){      // here till 9 bacuause we are compairing till the elements also the index is staring from 0 so we go till 9
        for(j=i+1;j<10;j++){              //here till 10 because we are checking the value of each things till the last element 
            if(A[i]+A[j]==10){
                printf("%d + %d = %d ",A[i],A[j],10);
            }
        }
    }
    return 0;
}*/

//for less timecomplexity of linear tc we will do by 2nd method that is hash table 
//while using hash table u need extra memory also the lenghth of hash tble will be equal to the length of max elemnt present + 1

/*#include<stdio.h>
int main(){
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};  // Array to find pairs that sum to 10
    int H[17] = {0};  // Hash array initialized with all zeros
    int i;
    
    for(i = 0; i < 10; i++) {
        if (10 - A[i] >= 0 && H[10 - A[i]] != 0) {  // Check if the complement is non-negative and exists in H
            printf("%d + %d = %d\n", A[i], 10 - A[i], 10);
        }
        H[A[i]]++;  // Mark the current number in the hash array
    }
    
    return 0;
}*/

//now same code for sorted array its tc is o(n)
/*#include<stdio.h>
int main(){
    int A[10] = {1,3,4,5,6,8,9,10,12,14};
    int i , j ;
    for(i=0,j=9;i<j;){
        if(A[i]+A[j]==10){
            printf("%d + %d = %d ",A[i],A[j],10);
            i++;
            j--;
        }
        else if(A[i]+A[j]<10){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}*/

//finding max and min in a single scan 
//best case and worst case is a different thing than time here in this specific questic the tc id o(n) but the best case is n-1 and also the worst case is o(2n-2)
/*#include<stdio.h>
int main(){
    int A[10] = {5,8,3,9,6,2,10,7,-1,4};
    int i;
    int min , max;
    min = A[0];
    max = A[0];
    for(i=0;i<10;i++){
        if(min>A[i]){
            min = A[i];
        }
        else if (max<A[i]){
            max = A[i];
        }
    }
    printf("max is %d , min is %d",max,min);
    return 0;
}*/

//then its quiz check from solution btw u perfomed well in this 



//strings 
//characters set are the set of character that are suppoeted by programming language 
//everything on compueter is number so to store any character computer usses set of numbers which is known as ascii code ie american standard code for information inetrchange 
//unicodes are the codes which are also iso standared and also be used as inetrnanational measures 
//for A=65 ,B=66 ,Z=90, a=97, b=98, z=122,ascii codes is also available for numbers like 0=48,1=49,9=57 for every letter in keyboard there is ascii no avilabale aslo for rnter asciii code is 10 for space 13 for escape 27
//ascii codes start from 0 to 127  total 128 total 7 bits are suffcient for ascii code in ram it is stored in 1 bit 
// ascii code is subset of unicode it takes 2 bytes or 16 bits represented in hexa decimal
//now suppose we have a char datatype suppose char t if we print by %d we get value 65 if we print by %c then we will get a 
//in char we can just have to write only single value that too only in '' only inside this format even " "this format will not work 
// we can also create one array with char dattype and it will print the data based on ascii value 
//in c there is string delimeter or end of the string char represented by \o(ye haesha char form me hi likhna) which shows the end if string shows here the string will end in c++ and we have to sue this 
// the difference between array of character and string is when we put \0(ye hamesha char form mr hi likhna hai) in the last of string is knows as string else it is known as array of charcters 
//writing something in double "  " means it is already in string format we dont have to use /0 at end strings are enclosd in double quotes 
//to print string we have to write %s
//in string we can write complete array or print complete array with just array name not possible in any other cases similarly for scanf 
//gets is a function which will read all the till we hit enter 

//checking the len of the string
/*#include<stdio.h>
int main (){
    char S[]="welcome";
    int i;
    for(i=0;S[i]!='\0';i++){

    }
    printf("length is %d",i);
    return i;
}*/

//changing the case of any letter (we can check the diff of ascii codes by 32 cause the difference of ascii codes of small letter and capital letter is same ) there are total 26 alphabets 
/*#include<stdio.h>
    int main(){
    char s[]="welcome";  //we have chnage it to lower case    
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=s[i]-32;
    }
    printf("the case chnage result is %s",s);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char s[]="WELCOME";
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=s[i]+32;
    } 
    printf("The chnage case value is %s",s);
}*/

//toggle means changing lower case to upper case and vice versa 
/*#include<stdio.h>
int main (){
    char s[] = "WELcome";
    int i ;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }
    } 
    printf("the toggled things are %s",s);
    return 0;
}*/

//counting vowels and consonents 
/*#include<stdio.h>
int main (){
    char s[]  =  "how are you";
    int vcounter = 0 , counter = 0;
    int i ;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            vcounter++;
        }
        else if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
            counter++;
        }
    }
    printf("total no of vowels and counters are %d,and consonenets are %d",vcounter,counter);
    return 0 ;  
}*/

// counting number of wrods based on spaces 
/*#include<stdio.h>
int main(){
    char s[] = "how     are you";
    int i , word = 1 ;        //words = spaces +1 so we are here initialising with 1 
    for(i=0;s[i]!='\0';i++){    // \0 means last element of a string 
        if(s[i]==' ' && s[i-1]!=' '){
            word ++;
        }
    }   
    printf("total no of words are %d",word);
    return 0;
}*/

//validating a string 
/*#include<stdio.h>
int valid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
            return 0 ;
        }
    }
    return 1;
}
int main(){
    char name[] = "anil123";
    if(valid(name)){
        printf("this is a valid string");
    }
    else{
        printf("this is a invalid string");
    }
}*/

//reversing a string 1st method 
/*#include<stdio.h>
int main (){
    char s[] = "python";
    char t[7];
    int i,j;
    for(i=0;s[i]!='\0';i++){
    } 
    i--;
    for(j=0;i>=0;i--,j++){
        t[j] = s[i];
    }
    t[j]='\0';
    printf("the reverse of string is %s",t);
    return 0 ;
}*/ 


//method 2 for revesing
/*#include<stdio.h>
int main(){
    char s[]="python";
    char t[7],temp;
    int i , j;
    for(j=0;s[j]!='\0';j++){        //searching the lowest element 
    }
    j--;
    for(i=0;j>i;i++,j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("the reverse array is %s",s ); 
    return 0 ;
}*/

//cehcking whether a string is palindrome or not also we are checking equality or not (also write code for without case sensitive )
/*#include<stdio.h>
int main(){
    char a[] = "Painter";
    char b[] = "painter";
    int i , j;
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
            break;             //after going through whole loop it breaks 
        }
    }
    if(a[i]==b[j]){
        printf("equal");
    }
    else if (a[i]<b[j])
    {
        printf("smaller");
    }
    else{
        printf("greater");
    }
    return 0 ;
}*/

//now non case sensitive 
/*#include<stdio.h>
#include<ctype.h>    // To use the tolower() function which is used to convert all the characters to small letters 

int main(){
    char a[] = "Painter";
    char b[] = "painter";
    int i, j;

    // Loop through both strings
    for(i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++){
        // Convert both characters to lowercase and compare
        if(tolower(a[i]) != tolower(b[j])){
            break; // Exit loop if characters don't match
        }
    }

    // After exiting loop, compare the final characters
    if(tolower(a[i]) == tolower(b[j])){
        printf("equal\n");
    }
    else if(tolower(a[i]) < tolower(b[j])){
        printf("smaller\n");
    }
    else{
        printf("greater\n");
    }

    return 0;
}*/

//palindrome which from front and back are same like madam , nitin etc 
/*#include<stdio.h>
int main(){
    char s[] = "mada";
    char t[6] ;
    int i , j ;
    for(i=0;s[i]!='\0';i++){

    }
    i--;
    for(j=0;i>=0;j++,i--){
        t[j]=s[i];
    }
    t[j]='\0';
    if(s[i]==t[j]){
        printf("the string is palindrome");
    }
    else{
        printf("the string is not palindrome");
    }
    printf(" the reverse is %s",t);
    return 0 ;
}*/

//finding the duplicates in the string there are basically 3 methods by : compairing with other letters , using hashtable as counting , using bits 
//1st method comapiring with other letters its tc is o(n^2)
/*#include<stdio.h>
int main(){
    char str[] = "summary";
    int i , j , count;
    int len = 0 ; //intialise 

    while(str[len]!='\0'){  //it will measure the lenght of the string 
        len++;
    }

    for(i=0;i<len;i++){
        count = 1;
        if(str[i]!=-1)
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
            count++;
            str[j]=-1;
            }
        }
     if(count>1){
        printf("%c appears %d ",str[i],count); //character print kar rahe thats why used %c
        }
    }
    return 0;
}*/

//2nd method by hash table its tc is o(n) linear 
/*#include<stdio.h>
int main(){
    char A[] = "FindingF";
    int H[128] = {0}; //hash always stays in int because we have to check the ascii value of characters also initialising by 0
    int i;
    for(i=0;A[i]!='\0';i++){
        H[A[i]]+=1;
    }
    for(i=0;i<123;i++){
        if(H[i]>1){
            printf("%c appars %d ",i,H[i]);
        }
    }
    return 0;
}*/

//method 3 using bitwise operators here we have to know first 3 concepts that is left shift it shifts everything to left by that digit also the places that will be vacanteded will be filled by 0 
//for eg 5 if we do leftshifting 5<<1 means all binary digit of 1 will be left shifted by 1 places that is 0101 is 5 if we do left shifting then it will be 1010 this is 10 
//anding and oring is like typical and and or functions 
//checking whether a bit is on or off by performing and function is known as masking ie 0 or 1 
//setting the bit on in memory is known as merging  tc is o(n)
//bitwise and & and bitwise | are different from logical and && and logical || 
/*#include<stdio.h>
int main(){
    char A[]="finding";
    long int H=0 , X=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        X=1;
        X=X<<(A[i]-97);
        if((X & H) > 0){   //means non zero ie 1 also bitwise karte time brackets ya parenthesis ka dhyaan dena cause they get impacted by precedence and prioroty
            printf("%c is duplicate ",A[i]);
        }
        else{
            H=(X|H);
        }
    }
    return 0;
}*/

//anagram means if they have same character of words but difeerent meaning for eample decimal and medical its tc is o(n^2) (distinct letters)
/*#include<stdio.h>
int main(){
    char A[] = "decimal";
    char B[] = "uedical";
    int i;
    int H[128] = {0}; //ascii value check karna hai isliye int me lia hai 
    for(i=0;A[i]!='\0';i++){
        H[A[i]]+=1;
    }
    for(i=0;B[i]!='\0';i++){
        H[B[i]]-=1;
        if(H[B[i]]<0){
            printf("Not anagram");
            return 0;
        }
    } 
    printf("anagram");
    return 0 ;
}*/

//including duplicates too the same above code will run and do the work 

//permutation in string 3 terms 
//brute force means finding out all possible permutation by any method u want 
//backtracking finding out going back to back and going to other possible solutions 
//whenever you are doing something in which u have to back and go for the other route those steps are implemented by recursion and these process are known as back tarcking 
//A state space tree is a conceptual structure used in backtracking algorithms and search problems to systematically explore all possible configurations or states of a problem. 
//here we need 3 arrays one hwre we re putting the string onw for saving the reselt and one for boolean falg to check whether the no is copmng or not also we need to have one k variable to check the level of tree 

/*#include<stdio.h>
void permu(char s[] , int k){
    static int a[10] = {0};
    static char res[10];
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        printf("%s",res);
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(a[i]==0){
                res[k]=s[i];
                a[i]=1;
                permu(s,k+1);
                a[i]=0;
            }
        }
    }
}
int main(){
    char s[] = "abc";
    permu(s,0);
    return 0;
}

//another method by swapping 
#include<stdio.h>
void swap(char *x , char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char s[],int l,int r){
    int i;
    if(l==r){
        printf("%s \n",s);
    }
    else{
        for(i=l;i<=r;i++){
            swap(&s[l],&s[i]);
            permute(s,l+1,r);
            swap(&s[l],&s[i]);
        }
    }
}
int main(){
    char s[] = "abcd";
    permute(s,0,3);
    return 0;
}*/


//in this section we learn about special  matrices which is aslo known as square matrix means its no of rows and coloumns are same 
//in this section we will learn about diagonal lower trangular upper triangular symeetric and tridiagonal band toplitz and last sparse matrix 
//diagonal matrix if all the elements of the matrix is 0 other than diagonal elements then that matrix is known as diagonal matrix 
//inshort only diagonal elemnts are non zero 
//M[i,j]=0 if i!=j
//in diagonal martrix we have mostly zero elemts so to save all is not necessary we can just store all the diagonal elements in a 1d array 

#include<stdio.h>
struct matrix{
    int A[10];
    int n;
};
void set (struct matrix *m,int i,int j,int x){                  //whenever we have to add or do changes in a matrix we use pointer
    if(i==j){
        m->A[i-1] = x; //c me 0 index se start hota par maths me toh 1 se na isliye -1 kiya hai 
    }
}     
int get (struct matrix m, int i , int j){   //pointer isliye nahi use nahi kiya cause its not chnaging any value in the array 
    if(i==j){
        return m.A[i-1];
    }
    else{
        return 0;
    }
}
void display (struct matrix m){
    for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            if(i==j){
                printf("%d ", m.A[i-1]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n"); //to move in next line 
    }
}
int main(){
    struct matrix m;
    m.n = 4;
    set(&m,1,1,1);
    set(&m,2,2,1);
    set(&m,3,3,1);
    set(&m,4,4,1);
    display(m);
    return 0;
} 



