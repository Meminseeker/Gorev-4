#include <iostream>

struct Province;
struct Country;

struct Province {
    std::string name;
    Country* domain;
};

struct Country {
    std::string name;
    Province* capital;
};

int main() {
    Country Turkey;
    Province Istanbul;
    Province Ankara;

    Turkey.name = "Turkey";
    Istanbul.name = "Istanbul";
    Ankara.name = "Ankara";

    Turkey.capital = &Ankara;
    Istanbul.domain = &Turkey;
    Ankara.domain = &Turkey;

    printf("Turkey Country'sinin adi: %s\n", Turkey.name.c_str());
    printf("Turkey Country'sinin capital'inin adi: %s\n\n", Turkey.capital->name.c_str());

    printf("Istanbul Province'inin adi: %s\n", Istanbul.name.c_str());
    printf("Istanbul Province'inin domain'inin adi: %s\n", Istanbul.domain->name.c_str());
    printf("Istanbul Province'inin domain'inin capital'inin adi: %s\n", Istanbul.domain->capital->name.c_str());

    return 0;
}
