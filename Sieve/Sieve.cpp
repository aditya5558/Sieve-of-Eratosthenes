#include <iostream>
using namespace std;

int main() {
    //Variable Declaration
    int n;
    cout << "\nEnter n:";
    cin >> n;

    /*Initialise each number to max
     *number of factors possible
     *i.e. the number itself
     */
    int prime[n+1];
    for(int i = 2; i <= n; i ++)
       prime[i] = i;

    /*All composite numbers are marked
     *with number 0. The square of numbers is
     *taken and all numbers in the range are marked
     *as 0
     */
    for(int i = 2; i*i <= n; i ++)
	   for(int j = i*i ; j <= n ; j += i) 
            prime[j] = 0;
            
    //Print out the unmarked numbers
    for(int i = 2; i <= n; i ++)
        if(prime[i] != 0)
            cout << prime[i] << " ";

    return 0;
}
