#include <iostream>
#include <vector>
using namespace std;

void div_()
{
    /**
    1 ������� � ��������� ��� �����
    2 ������� ��� ����
    3 ������ ���� ������� �����
    4 ��������� ��������� �����
    5 ������� ������ ���������� �����
    */
    int n(0);
    cin >> n;
    vector <int> numbers(n);
    for (int i(0); i<n; i++)
            cin >> numbers[i];
    int max_sum(0);
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
        {int cur_sum(numbers[j] + numbers[i]);
            if (cur_sum % 2 != 0 and cur_sum>max_sum)
                max_sum = cur_sum;
        }
    cout <<max_sum;
}
int main()
{
    div_();
    return 0;
}
