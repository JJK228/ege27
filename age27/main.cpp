#include <iostream>
#include <vector>

using namespace std;
void div_()
{
    /**
     1 ������� � ��������� �����
     2 ������� ��� ���� �����
     3 ������ ��� ������� ������������
     4 ��������� ��������� ������������
     5 ���������� � ������ ��������� ���������� ���
    */
   int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    int pairs = 0;
    for (int j = 0; j < n; ++j)
        for (int i = j + 1; i < n; ++i)
            {
                int cur_prod = numbers[j] * numbers[i];
                if (cur_prod % 55 == 0)
                    pairs++;
            }
    cout << pairs;
}

int main()
{
    div_();
    return 0;
}
