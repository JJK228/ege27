#include <iostream>
#include <vector>
using namespace std;
void if_()
{
    /**
    1.  счиать первые четыре числа в червяка +
    2.  сдвинуть червяка на одно число вправо
    2а. убедиться что вервяк выводится на каждом этапе
    2б. мин сохранить
    3.  вывести пару
    3а. все классно
    4.   найти мин
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
