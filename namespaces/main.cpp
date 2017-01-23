/*
Пространства имён (namespaces).

Зачем нужны: устранение конфликтов имён (name conflicts).

Область видимости (scope).

Декларативная область видимости (declarative region).
Декларативная область  — это область, в которой могут делаться объявления.

Потенциальная область видимости (potential scope).
Потенциальная область видимости переменной начинается с точки объявления и
простирается до конца ее декларативной области объявления.

Директивы using (using directives):
using namespace std;

Объявления using (using declarations):
using std::cout;

Создание псевдонима для нашего namespace:
namespace fdo = my_special_namespace_for_dogs_only;

*/
//#include "Animal.h"
#include <iostream>
namespace abc{
int a = 2;
}

int a = 10;

int main(){
    int a = 5;

 a += ::a + abc::a;
 std::cout << a;
}
/*
int main()
{
    namespace faa = my_special_namespace_for_any_animals;
    faa::Animal s;
    faa::Animal b;
    s.set_data( "Wolf", "Akella", 3 );
    b.set_data( "Snake", "Kaa", 0 );
    std::cout << s << b;

    namespace fco = my_special_namespace_for_cats_only;
    enum { IS_WILD, IS_DOMESTICATED };
    fco::Animal m( "Cat", "Musya", 3, IS_DOMESTICATED );
    fco::Animal p( "Tiger", "Sherkhan", 4, IS_WILD );
    std::cout << m << p;


}
*/
