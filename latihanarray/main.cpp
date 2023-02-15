#include <iostream>

using namespace std;

int main()
{
    int i;
    string xiirpl[5] = {"saipul", "hendra", "rega", "fajar", "iqbal"};

    cout << "yang paling cakep di XII RPL 1 adalah " << xiirpl[4] << endl;
    cout << "Diantara";
    for(i=0; i<5; i++) {
        cout << xiirpl[i] << ", ";
    }
    return 0;
}
