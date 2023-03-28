
#include <iostream>
#include <string>

using namespace std;

/// <summary>
/// Проверяет, является ли строка числом. 
/// </summary>
bool is_digit(string str)
{
    return !str.empty() && str.find_first_not_of("0123456789") == string::npos;
}

/// <summary>
/// Проверяет, содержит ли строка только символы кириллицы и латиницы.
/// </summary>
bool is_string(string str)
{
    return !str.empty() && (str).find_first_not_of("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNMЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮйцукенгшщзхъфывапролджэячсмитьбю") == string::npos;
}


/// <summary>
/// запрашивает ввод строки до тех пор, пока строка не будет соответствовать проверке checking_func
/// </summary>
string input_with_checking(bool checking_func(string))
{
    string str;
    cin >> str;
    while (true)
    {
        if (!checking_func(str))
        {
            cout << "Неверный ввод, повторите ввод" << endl;
            cin >> str;
        }
        else
        {
            return str;
            break;
        }
    }
}

