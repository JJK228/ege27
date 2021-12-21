#include <iostream>
#include <vector>

using namespace std;

void div_()
{
    /**
     1 считать число
     2 добавить его к одному из счетчиков соответсвующего класса
     3 ответ
    */
    int n6 = 0, n3 = 0, n2 = 0, no = 0;
    int n = 0, cur = 0;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> cur;
        if (cur % 6 == 0)
            n6++;
        else if (cur % 2 ==0)
            n2++;
        else if (cur % 3 == 0)
            n3++;
    }

    no = n - n6 - n3 - n2;
    cout << n6 << ' ' << n3 << ' ' << n2 << ' ' <<  no;


}

int main()
{
    div_();
    return 0;
}
