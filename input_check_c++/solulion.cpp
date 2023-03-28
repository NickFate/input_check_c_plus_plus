
#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// ���������, �������� �� ������ ������. 
/// </summary>
bool is_digit(string str)
{
    return !str.empty() && str.find_first_not_of("0123456789") == string::npos;
}

/// <summary>
/// ���������, �������� �� ������ ������ ������� ��������� � ��������.
/// </summary>
bool is_string(string str)
{
    return !str.empty() && (str).find_first_not_of("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM����������������������������������������������������������������") == string::npos;
}


/// <summary>
/// ����������� ���� ������ �� ��� ���, ���� ������ �� ����� ��������������� �������� checking_func
/// </summary>
string input_with_checking(bool checking_func(string))
{
    string str;
    cin >> str;
    while (true)
    {
        if (!checking_func(str))
        {
            cout << "�������� ����, ��������� ����" << endl;
            cin >> str;
        }
        else
        {
            return str;
            break;
        }
    }
}

