#include <iostream>

using namespace std;

void max_sum_div_eff_2()
{
    /**
     1 ��������� ������ 2 �� 40 ������
     2 ����� ��������� ������ � ���������� [x > 40][x % 40] += 1
     3 ����������� ��������������� ������� ��� 40 ��������, 20 ��������, ��������� ��������
    */
    int x = 0;
    int counters[2][40];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            counters[i][j] = 0;
        }
    }

    std::cin >> x;
}
int main()
{
    max_sum_div_eff_2();
    return 0;
}
