// #include<iostream>
// using namespace std;
// int main ()
// {   int n,r;
//     cout<<"enter a number";
//     cin>>n;
//      cout<<"enter r";
//     cin>>r;
//     //here a= n!, b=r! , c=(n-r)!
//     int a=1,b=1,c=1;
//     for(int i=1;i<=n;i++)
//     {
//        a=a*i;
       
//     } 
//     cout<<a;
//     for(int i=1;i<=n;i++)
//     {
//        b=b*i;
       
//     } 
//     cout<<b;
//     for(int i=1;i<=(n-r);i++)
//     {
//        c=c*i;
       
//     } 
//     cout<<b;
//     cout<<a/(b*c);
//     return 0;
// }
// #include<iostream>
//  using namespace std;
//  int fact(int x){
//     int p=1;
//     for(int i=1;i<=x;i++){
//     p=p*i ;}
//     return p;
// }
 
//  int main (){
//     int n;
//  cout<<"enter n" ;
//  cin>>n;
//  cout<<"enter r" ;
//  int r;
//  cin>>r;
// int a= fact(n);
// int b =fact(r);
// int c= fact(n-r);
// cout<<a/(b*c);
// if(r>n)
// { cout<<"invalid output" ;}
// return 0;
// }
#include<iostream>
 using namespace std;
 int fact(int x){
    int p=1;
    for(int i=1;i<=x;i++){
    p=p*i ;}
    return p;
}
 
 int main (){
    int n;
 cout<<"enter n" ;
 cin>>n;
 cout<<"enter r" ;
 int r;
 cin>>r;
int a= fact(n);
int c= fact(n-r);
cout<<a/(c);
if(r>n)
{ cout<<"invalid output" ;}
return 0;
}
