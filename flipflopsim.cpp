#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    if (argc < 5) 
        {
            cerr<< "недостатньо елементів";
            return 1;
        }
    
    bool j,k,c,prev;

    if (argv[1][0] == '1')
        j = true;
    else
        j = false;

    if (argv[2][0] == '1')
        k = true;
    else
        k = false;

    if (argv[3][0] == '1')
        c = true;
    else
        c = false;

    if (argv[4][0] == '1')
        prev = true;
    else
        prev = false;
    int res = 0;
    
    if (c) {
        if (j&&k){
            res = int(!prev);
        }
        else{
            if(j){
                res = 1;
            }
            else if(k){
                res = 0;
            }
            else{
                res = int(prev);
            }
        }
        cout<< to_string(res);
    }
}