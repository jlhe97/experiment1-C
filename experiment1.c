#include <stdio.h>
#include <stdlib.h>


typedef struct scrub{
    char* name;
    char* lastname;
    int age;
    int graduationYear;
    char* major1;
    char* major2;

} scrub;

int main(int argc, char* argv[]){

    while(1){

    scrub fooScrub;

    fooScrub.name = "Juan Luis";
    fooScrub.lastname = "Herrero Estrada";
    fooScrub.age = 20;
    fooScrub.graduationYear = 2019;
    fooScrub.major1 = "Computer Science";
    fooScrub.major2 = "Mathematics";

    }


    return 0;
}
