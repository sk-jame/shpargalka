/*
Обычная лямбда-функция:
[]( int x ) { return x > 0; }

Синтаксис хвостового возвращаемого типа:
[]( double x )->double
{
    int y = x;
    return x - y;
}
возвращаемый тип - double.
Нужен, если в теле лямбды больше одного statement'a

Доступ по значению и ссылке.
Доступ к переменной addition по значению:
[addition](int x) { return x + y; }

Доступ к переменной sum по ссылке:
[&sum](int x) { return x + y; }

Доступ ко всем переменным по значению:
[=](){ return cats + dogs; }

Доступ ко всем переменным по ссылке:
[&](){ return cats + dogs; }

Доступ к cats по значению, а к dogs по ссылке:
[cats, &dogs](){ return cats + dogs; }

Доступ к dogs по ссылке, а ко всем остальным переменным по значению:
[=, &dogs](){ return cats + dogs; }

Доступ к cats по значению, а ко всем остальным переменным по ссылке:
[&, cats](){ return cats + dogs; }
*/

#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    int arr[] = { 30, 15, 58, 33, 42, 11, 99, 58 };

    std::cout <<
        std::count_if
            (
                std::begin( arr ),
                std::end( arr ),
                []( int x ) { return x % 3 == 0; }
            );

    int first_elem = *std::begin( arr );
    int last_elem = *( std::end( arr ) - 1 );

    auto it =
        std::find_if
            (
                std::begin( arr ),
                std::end( arr ),
                [&first_elem, &last_elem]( int x )->bool
                {
                    ++first_elem;
                    ++last_elem;
                    std::cout << "\n" << first_elem << " " << last_elem;
                    return x == first_elem + last_elem;
                }
            );

    if ( it < std::end( arr ) )
    {
        std::cout
            << "\n\nYes, your array contains this element: "
            << *it;
    }
    else
        std::cout << "\n\nNo, this element is not exists in your array.";

    int ololo =5;


    return 0;
}
