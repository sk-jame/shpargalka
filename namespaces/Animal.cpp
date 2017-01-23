#include "Animal.h"

namespace my_special_namespace_for_any_animals
{

    Animal::Animal() :
        kind_( "some animal" ),
        name_( "nameless" ),
        number_of_legs_( 4 )
    {}

    Animal::Animal
        (
            std::string kind,
            std::string name,
            unsigned int number_of_legs
        ) :
        kind_( kind ),
        name_( name ),
        number_of_legs_( number_of_legs )
    {}

    void Animal::set_data
        (
            std::string kind,
            std::string name,
            unsigned int number_of_legs
        )
    {
        kind_ = kind;
        name_ = name;
        number_of_legs_ = number_of_legs;
    }

    // друг класса Animal
    // в реализации ключевое слово friend не нужно
    // квалификатор ClassName:: также не нужен, ведь это не функция-член
    std::ostream & operator<<( std::ostream & os, const Animal & a )
    {
        os
            << a.kind_
            << " "
            << a.name_
            << "\n";

        return os;
    }

} // endof my_special_namespace_for_any_animals

namespace my_special_namespace_for_cats_only
{

    Animal::Animal() :
        kind_( "some animal" ),
        name_( "nameless" ),
        number_of_legs_( 4 ),
        is_domesticated_( true )
    {}

    Animal::Animal
        (
            std::string kind,
            std::string name,
            unsigned int number_of_legs,
            bool is_domesticated
        ) :
        kind_( kind ),
        name_( name ),
        number_of_legs_( number_of_legs ),
        is_domesticated_( is_domesticated )
    {}

    void Animal::set_data
        (
            std::string kind,
            std::string name,
            unsigned int number_of_legs,
            bool is_domesticated
        )
    {
        kind_ = kind;
        name_ = name;
        number_of_legs_ = number_of_legs;
        is_domesticated_ = is_domesticated;
    }

    // друг класса Animal
    // в реализации ключевое слово friend не нужно
    // квалификатор ClassName:: также не нужен, ведь это не функция-член
    std::ostream & operator<<( std::ostream & os, const Animal & a )
    {
        os
            << a.kind_
            << " "
            << a.name_
            << "\n";

        return os;
    }

} // endof my_special_namespace_for_cats_only
