#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int i = 0;
    char j;
    while (true){
        j = (char) i;
        cout<<j<<"\n";
        if(i>=129){
            i=1;
        }
        sleep(0.5);
        i++;
    }
}