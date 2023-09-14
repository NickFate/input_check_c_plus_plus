# Проверка ввода, с++

## Установка
1. Скопируйте функции из файла [solution.cpp](https://github.com/NickFate/input_check_c_plus_plus/blob/master/input_check_c%2B%2B/solulion.cpp)
2. Подключите библиотеку `<iostream>`
3. Для преобразования строки в целочисленный тип данных подключите библиотеку `string` 
4. Используйте ```using namespace std;```
5. Измените кодировку файла на *Кирилица Windows, кодовая страница 1251*, для отображения сообщения о неверном вводе
6. Используйте ```setlocale(LC_ALL, "rus");```

## Примеры 

### Установка
```c++
#include <iostream>
#include <string>

using namespace std;

bool is_digit(string str) { ... }

bool is_string(string str) { ... }

string input_with_checking(bool checking_func(string)) { ... }
```

### Ввод целочисленного числа
``` c++
setlocale(LC_ALL, "rus");

cout << "Введите число: ";
int a = stoi(input_with_checking(is_digit));

cout << "Введено число: " << a;

```

> #### результат работы программы:
Введите число: ф <br>
Неверный ввод, повторите ввод <br>
1 <br>
Введено число: 1

## Добавление собственных условий для проверки строк

Для добавления собственного условия проверки необходимо реализовать функцию по шаблону

```
bool название(string str)
{
    if (условие проверки выполнено)
    {
        return true;
    }
    return false;
}
```

после данную функцию необходимо передать в `input_with_checking()` в качестве аргумента

