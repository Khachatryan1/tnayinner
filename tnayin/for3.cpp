#include <iostream>
using namespace std;
int main() {
const int max_rows = 3;
const int max_cols = 4;
int my_ints[max_rows][max_cols]={{34,-1,879,22},
                                 {24,365,-101,-1},
                                 {-20,40,90,97}};
for(int row = 0;row<max_rows;++row){
    for(int column = 0;column < max_cols;++column){
        cout << "integer"<< [row][column] <<"="<<my_ints[row][column]<<endl;
    }
}
    return 0;
}
