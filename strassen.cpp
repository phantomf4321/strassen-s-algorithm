#include <iostream>
using namespace std;
void multiply(int[100][100], int[100][100], int);
int display(int[100][100], int);
void multiply(int a[100][100], int b[100][100], int n, int c1)
{
    int c[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            c[i][j] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    display(c, n);
}
int display(int c[100][100], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << "\n";
    }
    return 0;
}


int main()
{

    int a[100][100], b[100][100];
    int n1, n2;

    cin >> n1;


    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
            cin >> a[i][j];

    }


    cin >> n2;
    
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> b[i][j];
    }

    multiply(a, b, n1, n2);
    
    system("pause");
    return 0;
}
