#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>

namespace my_special_namespace_for_any_animals
{

    class Animal
    {
    private:
        std::string kind_;
        std::string name_;
        unsigned int number_of_legs_;

    public:
        Animal();

        Animal
            (
                std::string kind,
                std::string name,
                unsigned int number_of_legs
            );

        // типичная функция-член (сеттер)
        void set_data
            (
                std::string kind,
                std::string name,
                unsigned int number_of_legs
            );

        // друг класса Animal
        // в объявлении функции необходимо ключевое слово friend
        friend std::ostream & operator<<( std::ostream & os, const Animal & a );

    }; // endof class Animal declaration

} // endof my_special_namespace_for_any_animals

namespace my_special_namespace_for_cats_only
{

    class Animal
    {
    private:
        std::string kind_;
        std::string name_;
        unsigned int number_of_legs_;
        bool is_domesticated_;

    public:
        Animal();

        Animal
            (
                std::string kind,
                std::string name,
                unsigned int number_of_legs,
                bool is_domesticated
            );

        // типичная функция-член (сеттер)
        void set_data
            (
                std::string kind,
                std::string name,
                unsigned int number_of_legs,
                bool is_domesticated
            );

        // друг класса Animal
        // в объявлении функции необходимо ключевое слово friend
        friend std::ostream & operator<<( std::ostream & os, const Animal & a );

    }; // endof class Animal declaration

} // endof my_special_namespace_for_cats_only


#endif // ANIMAL_H
