#include <iostream>
#include <vector>
using namespace std;
void if_()
{
    /**
    1.  ������ ������ ������ ����� � ������� +
    2.  �������� ������� �� ���� ����� ������
    2�. ��������� ��� ������ ��������� �� ������ �����
    2�. ��� ���������
    3.  ������� ����
    3�. ��� �������
    4.   ����� ���
    **/
    int n(0);
    cin >> n;
    int min_num(1000);
    int min_sum(2000);
    vector<int> numbers(4);
    for (int i(0); i < 4; i++)
        cin >> numbers[i];
    for (int j(0); j < n-4; j++)

    cout << min_sum << endl;
}

int main()
{
    if_();
    return 0;
}
