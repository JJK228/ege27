#include <iostream>
#include <vector>
using namespace std;

void div()
{
    /**

    1 ��������� ������ 6 ����� � ������� (6 - ���������� ����� ������� >=)
    2 ����� � ����� �� 6 �� n:
    �) ���������� ����� �� ������, ���������� ���� �� ������� �� 33 ��������� �� ������ ����� � �������
    �) ������ ����� ������ � ������� � ��� �������������� ������� �� ������� ������ �� 33, ���������� ���� ������� � ����������
    3 ������� ���������� �������

    **/

    int n, count = 0;
    cin >> n;
    vector<int> counters(33, 0);

    vector<int> worm_num(6, 0);

    for (int i(0); i < 6; i++)
        cin >> worm_num[i];

    for (int i = 6; i < n; ++i)
    {
        counters[worm_num[i % 6] % 33] += 1;

        cin >> worm_num[i % 6];

        count += counters[(33 - (worm_num[i % 6] % 33)) % 33];

    }
        cout << count;
}

int main()
{
    div();
    return 0;
}
