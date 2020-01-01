#include<bits/stdc++.h>

using namespace std;

/*void increment(int *a)
{

*a=*a+1;

}
int main()
{
int a;
a=80;
increment(&a);
cout<<a;
}*/










/*int main()
{
int A[]={10,20,30,40,50};
cout<<A[0]<<endl;
cout<<&A[0]<<endl;
cout<<(A+0)<<endl;
cout<<*A<<endl;
cout<<*(A+1);

}
*/



/*
Arrays are passed to functions by reference
int sumofelements(int *A,int n)///here int *A is same as int A[] because for creating a new array there is so much memory loss it's just points the array...
{
int i;
for(i=0;i<n;i++)
{
cout<<A[i]<<" ";
}
}
int main()
{
int A[]={10,20,30,40,50};
int siz=(sizeof(A)/sizeof(A[0]));
sumofelements(A,siz);
}
*/

/*

int Double(int *A,int n)///here int *A is same as int A[] because for creating a new array there is so much memory loss it's just points the array...
{
int i;
for(i=0;i<n;i++)
{
A[i]=2*A[i];
}
}
int main()
{
int A[]={10,20,30,40,50};
int siz=(sizeof(A)/sizeof(A[0]));
Double(A,siz);
for(int i=0;i<siz;i++)
cout<<*(A+i)<<" ";
}
*/
///pointers and chracters array
/*
int main()
{
char C1[6]="JOHN";///char C1[6]={'J','O','H','N','\0'};
char *C2=C1;
for(int i=0;i<4;i++)
///cout<<C2[i];///
cout<<*(C2+i);
}

*/
/*
void components(char *C,int n)
{
int i=0;
while(*(C+i)!='\0')//is same as while(C[i]!=0)
{
cout<<C[i];
i++;
}

}

int main()
{
 char C[6]="JOHN";

 int siz=sizeof(C)/sizeof(C[0]);
components(C,siz);

  }

*/


/*
void components(char *C)
{

while(*C!='\0')///
{
cout<<*C;
C++;///As character is 1 byters so we can increase it like this
}

}

int main()
{
char C[6]="JOHN";
components(C);

}

*/

void components(const char *C)///using this const we cann't change the value of the array
{

while(*C!='\0')///
{
cout<<*C;
C++;///As character is 1 byters so we can increase it like this
}

}

int main()
{
char C[6]="JOHN";
///char *C="JOHN";this declaration will not allow us to change the value of the arrya but will work the same
components(C);

}























