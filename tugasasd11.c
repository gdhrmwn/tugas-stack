#include <stdio.h>
#include <stdlib.h>



struct Stone {
    char* alphabet ;
    struct Stone *link;
};


int main(){
    struct Stone l1,l2,l3,l4,l5,l6,l7,l8,l9;

l1.link = NULL;
l1.alphabet = "F";
l2.link = NULL;
l2.alphabet = "M";
l3.link = NULL;
l3.alphabet = "A";
l4.link = NULL;
l4.alphabet = "I";
l5.link = NULL;
l5.alphabet = "K";
l6.link = NULL;
l6.alphabet = "T";
l7.link = NULL;
l7.alphabet = "N";
l8.link = NULL;
l8.alphabet = "O";
l9.link = NULL;
l9.alphabet = "R";

l1.link=&l8; //F ke O
l8.link=&l2; //o ke m
l2.link=&l5; //m ke k
l5.link=&l3; //k ke a
l3.link=&l6; //a ke t
l6.link=&l9; //t ke r
l9.link=&l4; //r ke i
l4.link=&l7; //i ke n
l7.link=&l1; //n ke f

//akses data
 printf("%s",l3.link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
 printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
  printf("%s",l3.link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->link->alphabet);
struct Stone* currnt=&l3;
return 0;

}
