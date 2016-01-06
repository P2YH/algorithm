#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &vIn)
{
    for(size_t i = 0; i < vIn.size(), ++i)
    {
        size_t uMin = i;
        for(size_t j = i+1; j < vIn.size(); ++j)
        {
            if( vIn[uMin] > vIn[j])
            {
                uMin = j;
            }
        }
        int temp = vIn[i];
        vIn[i] = vIn[uMin];
        vIn[uMin] = temp;
    }
}

int main()
{
    int n[7] = {8,3,4,1,4,5,2};
    vector<int> vIn(n, n+7);
    SelectionSort(vIn);
    for(size_t i = 0; i < vIn.size(); ++i)
    {
        cout<<vIn[i]<<",";
    }
    cout<<endl;
    return 0;
}
