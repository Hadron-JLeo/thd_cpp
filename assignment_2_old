#include <stdio.h>

// unformatted
// frograce program

int ziel = 2000;

int frosch_s1, frosch_s2, frosch_s3;

int race_is_on=1;

int counter_s = 0;



int reichweite1,reichweite2,reichweite3;



int striche = 0;

float geschwindigkeit = 0.0;

int main()

{ 

 srand(time(NULL));

 while(race_is_on) // solange das rennen laueft

 {

  wipe_screen();

  anf_druck();

  race();

  printf("%i\n%i\n%i\n", frosch_s1,frosch_s2,frosch_s3);

  counter_s++;

  winning();

  }

  if (!race_is_on)

  {

   printf("Nummer %i hat das Rennen gewonnen! Seine durchschnittliche  betraegt: %f m", winning(), geschwindigkeit);

  }

 return 0;

}



int anf_druck()

{

 printf("Rennen ueber 6000m startet\nStart |");

 for (striche; striche <= (ziel/100); striche++)

 {

  printf("-");

 }

 //printf("%i", striche);

 printf("| Ziel\n");

 striche = 0;

}







int sprung(int frosch_n)

{

 if (frosch_s1 < ziel && frosch_s2 < ziel && frosch_s3 < ziel)

 {

  if (frosch_n == 1)

  { 

   int sprung_f1 = 0;// wir pruefen wie weit der frosch pro sprung springt

   for (sprung_f1; sprung_f1 < rand()%500; sprung_f1+=100)

   {

   // printf("=");

    frosch_s1 = frosch_s1 + sprung_f1;

   }

   for (reichweite1; reichweite1 < frosch_s1; reichweite1=reichweite1+100)

    {

    printf("=");

    } 

    reichweite1=0;

   printf("> Frosch %i\n", frosch_n);

  }

  if (frosch_n == 2)

  { 

   int sprung_f2 = 0;// wir pruefen wie weit der frosch pro sprung springt

   for (sprung_f2; sprung_f2 < rand()%500; sprung_f2+=100)

   {

   // printf("=");

    frosch_s2 = frosch_s2 + sprung_f2;

   }

   for (reichweite2; reichweite2 < frosch_s2; reichweite2=reichweite2+100)

    {

    printf("=");

    } 

    reichweite2=0;

   printf("> Frosch %i\n", frosch_n);

  }

  if (frosch_n == 3)

  { 

   int sprung_f3 = 0;// wir pruefen wie weit der frosch pro sprung springt

   for (sprung_f3; sprung_f3 < rand()%500; sprung_f3+=100)

   {

   // printf("=");

    frosch_s3 = frosch_s3 + sprung_f3;

   }

   for (reichweite3; reichweite3 < frosch_s3; reichweite3=reichweite3+100)

    {

    printf("=");

    } 

    reichweite3=0;

   printf("> Frosch %i\n", frosch_n);

  }

 }

 else

 {

  race_is_on = 0;

 }

 return 0;

}



int wipe_screen()

{

 sleep(1);

 system("cls");

}



int race()

{

 sprung(1); sprung(2); sprung(3); 

}



int winning()

{

 int winner = 0;

 if (frosch_s1 > (frosch_s2 ) && frosch_s3)

 {

 winner = 1;

 geschwindigkeit = frosch_s1 / counter_s;

 }

 else if (frosch_s2 > (frosch_s1) && frosch_s3)

 {

 winner = 2;

 geschwindigkeit = frosch_s2 / counter_s;

 }

 else if (frosch_s3 > (frosch_s1) && frosch_s2)

 {

 winner = 3;

 geschwindigkeit = frosch_s3 / counter_s;

 }

 return winner;

}
