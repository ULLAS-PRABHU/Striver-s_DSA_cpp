#include<bits/stdc++.h>
using namespace std;

//map stores all the values in sorted order
//based on the key value like 1 then 2 then 100 and so on

/*time complexity - 

(storing and fetching) - in all cases takes (O(logn))
*/

/*advantage of using unorderd map
(storing and fetching) - in best and average case (O(1)) and in worst case O(n)

*/

//use unordered map and if it dosent work only then use map

//because of internal collisions sometimes um dosent work rarely


/*map is implemented internally using 
- divison method - divide the number by 10 and store the frequency in the remainder index and if there are same numbers then do chaining with linked list with binary search
(but in division method there is a risk of collision and it happens when the elements are similar(8,18,28,38.......1008) all the keys ends up at the same index and forms a long chain)


-folding method
-mid square method
*/


//in map any datatype and datastrcuture can be a key but in unorderd map no datastructure but any datatype can be a key

int main()
{
    string s;
    cin>>s;

    //pre_compute
    unorderd_map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    //iterate in the map
    for(auto it:mp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;

    while(q--)
    {
        char c;
        cin>>c;

        //fetch

        cout<<mp[c];

    }
    return 0;
}