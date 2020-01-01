#include<bits/stdc++.h>

using namespace std;


int main()
{

int *p;
p=(int *)malloc(sizeof(int));///here p is pointing to a heap memory.....


*p=40;
cout<<*p<<endl;

free(p);

*p=60;///this will assign a new value to p....
cout<<*p;
///but the previous value of p is 40 was in heap memory though p is pointing to 60..

///we need to free the heap memory and we will do so before assigning 60....



int *a;
a=new int;///we can use this new int instead of malloc and it will work same as malloc works

*a=80;

cout<<*a<<endl;

delete a;///we can use delete method instead of free method and it will work same as free works


a=new int[60];///this is for delcaring array....

for(int i=0;i<5;i++)

cin>>*(a+i);
///*a=90;
///*(a+1)=89;

cout<<*(a+0)<<" "<<*(a+1);

delete[] a;






}
