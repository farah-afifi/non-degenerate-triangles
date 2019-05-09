#include <iostream>
#include <vector>
using namespace std;

bool isNonDegenerate( vector<int> vec){

    for(int i = 0 ; vec.size() - i != 2 ; i++ )
        for (int j = i + 1; vec.size()- j != 1 ; j++)
            for (int k = j + 1; vec.size() - k != 0 ; k++)
                   if(vec[i] + vec[j] > vec[k] && vec[i] + vec[k] > vec[j] && vec[k] + vec[j] > vec[i]){
                        cout << "we can construct a non-degenerate triangle using the following sides.\n";
                        cout << vec[i] << ' ' << vec[j] << ' ' << vec[k] << endl;
                   }
}

int main()
{
    vector <int> vec = {1,2,3,4 ,5};
    isNonDegenerate(vec);
    return 0;
}
