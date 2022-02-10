/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/

#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    int T,i;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> a >> b;
        sum  = a+b;
        cout << "Case " << i <<": " << sum << endl;

    }
    return 0;
}
