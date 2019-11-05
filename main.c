#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedHead.h"
#include "musicHead.h"

int main() {
  //char *name =
  //char *artist =

  //struct Song_node comp1 = {"CAleb","blah",0};
  //print_node(&comp1);

  //struct Song_node *comp2 ;
  //printf("%d",song_cmp(comp1,comp2));
  //og = insert_front(og,"lady gaga", "Radio");
  //og = insert_front(og,"lady gaga", "Bad Romance");
  //og = insert_ordered(og,"lady gaga","Zot

  struct Song_node *og = 0;
  og = insert_front(og,"lady gaga", "alexandro");

  //og = insert_front(og,"lady gaga", "bad romance");
  //og = insert_ordered(og,"lady gaga","perfect illusion");
  og = insert_ordered(og,"queen","bohemian rhapsody");
  og = insert_ordered(og,"lady gaga","applause");
  /*og = insert_ordered(og,"queen","another one bites the dust");
  og = insert_ordered(og,"queen","we will rock you");
  og = insert_ordered(og,"queen","radio ga ga");
  /*og = insert_ordered(og,"avicii","hey brother");
  og = insert_ordered(og,"avicii","levels");

  og = insert_ordered(og,"avicii","wake me up");
  og = insert_ordered(og,"avicii","broken arrows");
  og = insert_ordered(og,"maroon 5","don't wanna know");
  og = insert_ordered(og,"maroon 5","payphone");
  og = insert_ordered(og,"maroon 5","moves like jagger");
  og = insert_ordered(og,"taylor swift","you need to calm down");
  og = insert_ordered(og,"taylor swift","shake it off");
  og = insert_ordered(og,"taylor swift","blank space");
  og = insert_ordered(og,"katy perry","last friday night");
  og = insert_ordered(og,"katy perry","roar");
  og = insert_ordered(og,"katy perry","dark horse");
  og = insert_ordered(og,"katy perry","part of me");
  og = insert_ordered(og,"katy perry","look what you made me do");
  og = insert_ordered(og,"michael jackson","smooth criminal");
  og = insert_ordered(og,"michael jackson","thriller");
  og = insert_ordered(og,"michael jackson","billie jean");
  og = insert_ordered(og,"michael jackson","beat it");
  og = insert_ordered(og,"marshmello","alone");
  og = insert_ordered(og,"marshmello","one thing right");
  og = insert_ordered(og,"marshmello","stars");
  og = insert_ordered(og,"marshmello","summer");
  og = insert_ordered(og,"marshmello","together");
  */
  print_list(og);
}
