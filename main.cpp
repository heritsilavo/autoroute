#include <iostream>

using namespace std;

int main()
{
    auto l=21;
    int nb=0;
    int A[l]={1,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1};
    int B[l]={2,0,0,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0};
    if(A[0]==2)
    {
        int *tab=A;
        for(int i=1;i<l;i++)
        {
            if(tab[i]==0)
            {
                continue;
            }
            else
            {
                nb++;
                i=i-1;
                if(tab==A)
                {
                    tab=B;
                }
                else
                {
                    tab=A;
                }
            }
        }
    }
    else
    {
        int *tab=B;
        for(int i=1;i<l;i++)
        {
            if(tab[i]==0)
            {
                continue;
            }
            else
            {
                nb++;
                i=i-1;
                if(tab==A)
                {
                    tab=B;
                }
                else
                {
                    tab=A;
                }
            }
        }
    }
    std::cout<<"fin "<<nb<<std::endl;
    return 0;
}
