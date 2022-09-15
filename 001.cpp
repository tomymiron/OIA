#include <iostream>
using namespace std;

int main() {
    /*

        [   [   [[][]] [[]] []   ] [   [[]] []   ]   ]

                     ______| a |______
            ________| b |         | c |____
        ____| d - e - f |         | g - h |
        | i - j | k |             | l |

    */

    //   a, ab, ac, abd, abe, abf, abdi, abdj, abek, acg, ach, acgl

    string x = "(((()())(())())((())()))";
    int o = 0;
    for(int i = 0; i < x.length(); i++){
        char item = x[i];
        if(item == '('){o++;}
        else if(item == ')'){o--;}

        if()
    }


}
//   [   [   [[][]] [[]] []   ] [   [[]] []   ]   ]
//   (    (    ( ( ) ( ) )  ( ( ) )  ( )    )  (    ( ( ) )  ( )    )    )
//   1    2    3 4 3 2 3 2  3 4 3 2  3 2    1  2    3 4 3 2  3 2    1    0

//             0
//             1  1  1
//             2  2  2  2  2  2  2  2
//             3  3  3  3  3  3  3  3  3
//             4  4  4


