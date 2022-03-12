#include <iostream>
using namespace std;
int main()
{
    int N;
    int M;
    int a = 0;
    int c1;
    int c2;

    cin >> N;
    cin >> M;
    int matriz1[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriz1[i][j];
        }
    }

    for (int k = 0; k < M; k++)
    {
        cin >> c1;
        cin >> c2;
        int b = 1;
        int var=c1-1;
        if (matriz1[c1-1][c2-1] == 0)
        {
            while ((c1-1)-b != 0)
            {
                if (matriz1[(c1-1)-b][c2-1] == 1)
                {
                    a++;
                    break;
                }
                else
                {
                    if(var>0){
                    var--;
                    b++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    cout << a << endl;
}
