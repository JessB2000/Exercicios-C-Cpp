##include <iostream>

using namespace std;

int main ()
{
  int N;
  int M;
  int i, j;
  int final = 0;

  cin >> N;
  cin >> M;

  int matriz1[N][M];

  for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
	cin >> matriz1[i][j];
    }

  for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
	{
	  if (i % 2 == 0)
	    {
	      final = final +  matriz1[i][j];
	    }
	  else
	    {

	      final = final + matriz1[i][M-1-j];



	    }

	  if (final < 0)

	    {

	     final=0;
	    }
	  }
    }

  cout << final << endl;

}
