// Given a column title as appears in an Excel sheet, return its corresponding column number.
//

#include "stdafx.h"

int titleToNumber(string A)
{
    int column = 0;
    const int alphabet = 26;

    // walk through each character
    for (int i = 0; i < A.size(); i++)
    {
        int c = A[i] - 64;
        column += (c * pow(alphabet, A.size() - i - 1));
    }
    return column;
}

int main()
{
    cout << titleToNumber("A") << " = 1" << endl;
    cout << titleToNumber("AA") << " = 27" << endl;
    cout << titleToNumber("AB") << " = 28" << endl;
    cout << titleToNumber("BA") << " = 53" << endl;
    cout << titleToNumber("AAA") << " = 703" << endl;
    return 0;
}

