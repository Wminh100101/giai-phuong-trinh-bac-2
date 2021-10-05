    #include <iostream>
    #include <stdio.h>
    #include <math.h>
    using namespace std;
    /* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int main(int argc, char **argv)
    {
        double a, b, c;
        double x1, x2, x3, d;
        double denta;
        cin >> a;
        cin >> b;
        cin >> c;
        denta = b * b - 4 * a * c;
        if (a == 0)
        {
            if (b == 0 && c != 0)
            {
                cout << "NO";
            }
            else if (b == 0 && c == 0)
            {
                cout << "INF";
            }
            else if (b != 0)
            {
                if (c == 0)
                {

                    d = -c / b;
                    d = abs(d);
                    printf("%0.2f", d);
                }
                else
                {
                    d = -c / b;
                    printf("%0.2f", d);
                }
            }
            // else if (b != 0 && c == 0)
            // {
            // 	cout << "0.00";
            // }
        }
        else
        {
            if (a != 0)
            {
                denta = b * b - 4 * a * c;
                if (denta > 0)
                {
                    x1 = ((-b) - sqrt(denta)) / (2 * a);
                    x2 = ((-b) + sqrt(denta)) / (2 * a);
                    if (x1 < x2)
                    {
                        printf("%0.2f", x1);
                        cout << " ";
                        printf("%0.2f", x2);
                    }
                    else
                    {
                        printf("%0.2f", x2);
                        cout << " ";
                        printf("%0.2f", x1);
                    }
                }
                else if (denta == 0)
                {
                    x3 = -b / (2 * a);
                    printf("%0.2f", x3);
                }
                else if (denta < 0)
                {
                    cout << "NO";
                }
            }
        }
        return 0;
    }
