#include <stdio.h>

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void catalog(struct fish f)
{
    printf("%s - это %s с %i зубами. Ему %i года\n",f.name,f.species,f.teeth,f.age);
}

void label(struct fish f)
{
    printf("Кличка:%s\nРазновидность:%s\n%i года, %i зубов\n",f.name,f.species,f.teeth,f.age);
}

int main()
{
    struct fish a = {"Акула","пиранья",69,4};

    catalog(a);
    label(a);
    return 0;
}