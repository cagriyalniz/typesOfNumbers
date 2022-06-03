#include <stdio.h>

void integers()
{
    int eggNumbers;
    unsigned int personalID;

    eggNumbers = 3;
    personalID = 123456;
    printf("size of int: %ld \n", sizeof(eggNumbers));
    printf("size of unsigned int: %ld \n", sizeof(eggNumbers));    
    printf("value of eggNumbers: %d \n", eggNumbers);
    printf("value of personalID %d \n", personalID);
    printf("/***************************\\ \n");

    char cupOfMilk;
    unsigned char letterNumbers;

    letterNumbers = 12;
    cupOfMilk = 2;
    printf("size of char: %ld \n", sizeof(cupOfMilk));
    printf("size of unsigned char: %ld \n", sizeof(letterNumbers));
    printf("value of cupOfMilk: %d \n", cupOfMilk);
    printf("value of letterNumbers: %d \n", letterNumbers);
    printf("/***************************\\ \n");

    short studentNumber;
    unsigned short schoolNumber;
    
    studentNumber = 3;
    schoolNumber = 123;
    printf("size of short: %ld \n", sizeof(studentNumber));
    printf("size of unsigned short: %ld \n", sizeof(schoolNumber));
    printf("value of student number: %d \n", studentNumber);
    printf("value of school number: %d \n", schoolNumber);

    long ageOfEarth;
    unsigned long ageOfUniverse;

    ageOfEarth = 39476213487;
    ageOfUniverse = 28176318297638167;
    printf("size of long: %ld \n", sizeof(cupOfMilk));
    printf("size of unsigned long: %ld \n", sizeof(letterNumbers));
    printf("value of age of earth: %ld \n", ageOfEarth);
    printf("value of age of universe: %ld \n", ageOfUniverse);
    printf("/***************************\\ \n");
}