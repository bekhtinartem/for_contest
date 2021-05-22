#include <iostream>
#include <cmath>
using namespace std;
bool check(int a) {
    while (a >= 16) {
        a /= 16;
    }
    if (a == 12) {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= 0) {
        if (a % 16 != 11) {
            if (a % 16 < 11) {
                a = (a / 16) * 16 + 11;
            }
            else {
                a = (a / 16 - 1) * 16 + 11;
            }
        }
        int max = 0, count = 0;
        for (a; a <= b; a += 16) {
            if (a > b) {
                break;
            }
            if (check(a) && a % 6 != 0) {
                max = a;
                count++;
            }

        }
        cout << count << " " << max << endl;
    }
    if (a < 0) {
        if (b <= 0) {
            a = (abs(a));
            b = abs(b);
            int c = a;
            a = b;
            b = c;

            if (a % 16 != 11) {
                if (a % 16 < 11) {
                    a = (a / 16) * 16 + 11;
                }
                else {
                    a = (a / 16 - 1) * 16 + 11;
                }
            }
            int max = 0, count = 0;
            for (a; a <= b; a += 16) {
                if (a > b) {
                    break;
                }
                if (check(a) && a % 6 != 0) {
                    if (!max) {
                        max = a;
                    }
                    count++;
                }

            }
            cout << count << " " << -max << endl;


        }
        else {
            a = abs(a);
            int c = b;
            b = a;
            a = 0;
            if (a % 16 != 11) {
                if (a % 16 < 11) {
                    a = (a / 16) * 16 + 11;
                }
                else {
                    a = (a / 16 - 1) * 16 + 11;
                }
            }
            int max = 0, count = 0;
            for (a; a <= b; a += 16) {
                if (a > b) {
                    break;
                }
                if (check(a) && a % 6 != 0) {
                    if (!max) {
                        max = -a;
                    }
                    count++;
                }

            }


            a = 0;
            b = c;


            if (a % 16 != 11) {
                if (a % 16 < 11) {
                    a = (a / 16) * 16 + 11;
                }
                else {
                    a = (a / 16 - 1) * 16 + 11;
                }
            }


            for (a; a <= b; a += 16) {
                if (a > b) {
                    break;
                }
                if (check(a) && a % 6 != 0) {
                    max = a;
                    count++;
                }

            }
            cout << count << " " << max << endl;


        }


    }
    return 0;
}
