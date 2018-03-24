#include <iostream>

using namespace std;

int Hanoi(int n, char A, char B, char C)  //(from,by,to)
{
    if (n == 1)
    {
        cout<< "move" <<n<< "from"<< A <<"to" << C <<endl;
    }
    else
    {
        Hanoi(n - 1, A, C, B);
       cout<< "move"<< n << "from" << A << "to" << C<<endl;
        Hanoi(n - 1, B, A, C);
    }
}

int main()
{
    int num;
    cin>>num;
    Hanoi(num,'A','B','C');
    return 0;
}
