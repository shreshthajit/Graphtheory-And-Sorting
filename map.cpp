#include<bits/stdc++.h>


using namespace std;


int main()
{
/*map<int,int>mp;

mp.insert(pair<int,int>(1,1));
mp.insert(pair<int,int>(2,3));
mp.insert(pair<int,int>(3,4));
mp.insert(pair<int,int>(4,5));

map<int,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++)
cout<<it->first<<" "<<it->second<<endl;
*/

 ///set <int, greater <int> > gquiz1;
  set <int> gquiz1;


    // insert elements in random order
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50); // only one 50 will be added to the set
    gquiz1.insert(10);

    // printing set gquiz1
   /// set <int, greater <int> > :: iterator itr;
   set <int> :: iterator itr;
    cout << "\nThe set gquiz1 is : ";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }




}
