#include "User.h" // Включаем заголовочный файл c описанием класса
#include <stdio.h>

using namespace std;

User::User(string name, string login, string pass):_name(name), _login(login), _pass(pass)
{
}

User::~User()
{
}
