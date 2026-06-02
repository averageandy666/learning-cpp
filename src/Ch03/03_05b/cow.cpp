#include "cow.h"

    Cow::Cow(std::string name_i, int age_i, cow_purpose purpose_i)
    {
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }

    std::string Cow::get_name() const
    {
        return name;
    }
    int Cow::get_age() const
    {
        return age;
    }
    cow_purpose Cow::get_purpose() const
    {
        return purpose;
    }
    void Cow::set_age(int new_age)
    {
        age = new_age;
    }