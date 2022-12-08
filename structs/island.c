#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
}island;

void display(island *start)
{
    island *i = start;
    for(;i!=NULL;i->next)
    {
        printf("Название: '%s'. Открыть %s - %s\n",i->name,i->opens,i->closes);
    }
}

island* create(char *s)
{
    island *i = malloc(sizeof(island));
    i->name = s;
    i->opens = "09:00";
    i->closes = "17:00";
    i->next  = NULL;
    return i;
}

int main()
{
    /*
    setlocale(LC_ALL,"Russian");
    island amity = {"Дружбы","09:00","17:00",NULL};
    island craggy = {"Скалистый","09:00","17:00",NULL};
    island isla_nublar = {"Туманный","09:00","17:00",NULL};
    island shutter = {"Проклятых","09:00","17:00",NULL};

    amity.name = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    display(&amity);
    



    island *amity = malloc(sizeof(island));
    amity->name = "Дружбы";
    amity->opens = "09:00";
    amity->closes = "17:00";

    island *craggy = malloc(sizeof(island));
    craggy->name = "Скалистый";
    craggy->opens = "09:00";
    craggy->closes = "17:00";

    island *islan_nublar = malloc(sizeof(island));
    islan_nublar->name = "Туманный";
    islan_nublar->opens = "09:00";
    islan_nublar->closes = "17:00";

    island *shutter = malloc(sizeof(island));
    shutter->name = "Проклятых";
    shutter->opens = "09:00";
    shutter->closes = "17:00";

    amity->next = craggy;
    craggy->next = islan_nublar;
    islan_nublar->next = shutter;
    
    display(amity);





   island *amity = create("Дружбы");
   island *craggy = create("Скалистый");
   island *isla_nublar = create("Туманный");
   island *shutter = create("Проклятых");

   amity->next = craggy;
   craggy->next = isla_nublar;
   isla_nublar->next = shutter;

   display(amity);
    */

   island *start = NULL;
   island *next = NULL;
   island *i = NULL;
   char name[80];

   for(;fgets(name,80,stdin) !=NULL;i =next)
   {
    next = create(name);
    if(start == NULL)
        start = next;
    if(i!=NULL)
        i->next = next;
   }
   display(start);
    return 0;
}