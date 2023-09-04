#include <iostream>

using namespace std;

int main()
{
    int height;
    cout<< " enter the height of the pyramid: ";
    cin >> height ;
    for ( int x=1; x<=height ; ++x){
        for ( int z=1 ; z<= height -x ; ++z){

        cout<< " ";
     for ( int z=1 ;z<=2*x-1; ++z) {
    cout<<"*";
     }
        }
cout << endl;

        }


}
