#include <iostream>

int main()
{
    int nN{};
    int nM{};

    scanf("%d %d", &nN, &nM);

    int arData[nN][nM];
    for(int i=0; i<nN; i++)
    {
        for(int j=0; j<nM; j++)
        {
            scanf("%d", &arData[i][j]);
        }
    }

    int nMin{};
    int nResult{};
    for(int i=0; i<nN; i++)
    {
        nMin = 10001;
        for(int j=0; j<nM; j++)
        {
            if(nMin > arData[i][j])
            {
                nMin = arData[i][j];
            }
        }
        if(nResult < nMin)
        {
            nResult = nMin;
        }
    }
    printf("%d\n", nResult);
}

