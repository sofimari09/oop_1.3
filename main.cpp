#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational l, r, p, q, D;
    double x = D.value();
    cout << x << endl;

    p.setA(3);
    p.setB(4);
    p.Display();

    q.setA(2);
    q.setB(5);
    q.Display();
    if (D.great(p, q))
        cout << "the value is greater" << endl;
    if (D.equal(p, q))
        cout << "values are equal" << endl;
    else
        cout << "values are not equal" << endl;
    if (D.less(p, q))
        cout << "the value is smaller" << endl;
    cout << "div = " << D.div(p, q) << endl << endl;

    l.Read();
    l.Display();

    r.Read();
    r.Display();
    if (D.great(l, r))
        cout << "the value is greater" << endl;
    if (D.equal(l, r))
        cout << "values are equal" << endl;
    else
        cout << "values are not equal" << endl;
    if (D.less(l, r))
        cout << "the value is smaller" << endl;
    cout << "div = " << D.div(l, r) << endl << endl;



    cin.get();
    return 0;
}
