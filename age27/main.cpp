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
            cin>> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] << " ";

}
int main()
{
    div_();
    return 0;
}
