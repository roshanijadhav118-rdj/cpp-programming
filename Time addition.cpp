#include <iostream>
using namespace std;

class Time
{
public:
    int Hr, Mn, Sc;

    void getTime()
    {
        cin >> Hr >> Mn >> Sc;
    }

    void showTime()
    {
        cout << Hr << " hr"
             << ":" << Mn << " min"
             << ":" << Sc << " sec" << endl;
    }

    void add(Time t1, Time t2)
    {
        Sc = t1.Sc + t2.Sc;
        Mn = t1.Mn + t2.Mn + Sc / 60;
        Hr = t1.Hr + t2.Hr + Mn / 60;

        Sc %= 60;
        Mn %= 60;
    }
};

int main()
{
    Time t1, t2, t;

    cout << "enter first time:";
    t1.getTime();

    cout << "enter second time:";
    t2.getTime();

    t.add(t1, t2);

    cout << "Time1:";
    t1.showTime();

    cout << "Time2:";
    t2.showTime();

    cout << "Total Time:";
    t.showTime();

    return 0;
}
