#include<iostream>
using namespace std;
main()
{
    float price, no_of_copies;

    cout << "Enter the price of each copy of novel:";
    cin >> price;
    cout << "Enter number of copies sold:";
    cin >> no_of_copies;
    float first_option = 5000 + 20000;

    float second_option = (price * no_of_copies) * 12.5 / 100;
    float third_option;

    if (no_of_copies <= 4000)
    {
        third_option = (price * no_of_copies) * 10 / 100;
    }
    else if (no_of_copies > 4000)
    {
        third_option = (price * no_of_copies) * 14 / 100;
    }

    cout << "Option 1:" << first_option << endl;
    cout << "Option 2:" << second_option << endl;
    cout << "Option 3:" << third_option << endl;
    if (first_option > second_option && first_option > third_option)
    {
        cout << "First Option is best.";
    }
    else if (second_option > first_option && second_option > third_option)
    {
        cout << "Second Option is best.";
    }
    else if (third_option > second_option && third_option > first_option)
    {
        cout << "Third Option is best.";
    }
}