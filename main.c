#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
  printf("Testing print node with empty node: ");
  print_node(og);
  printf("\n");
  printf("Testing print list with empty node: ");
  print_list(og);
  og = insert_front(og,"lady gaga", "alexandro");
  print_node(og);
  printf(": Insert Front #1\n");
  og = insert_front(og,"lady gaga", "bad romance");
  print_node(og);
  printf(": Insert Front #2\n");
  og = insert_front(og,"lady gaga", "bad romance");
  print_node(og);
  printf(": Insert Front #3\n");
  printf("Testing print_list with three insert_front\n");
  print_list(og);
  printf("Testing free_list\n");
  og = free_list(og);
  og = 0;
  og = insert_ordered(og,"queen","bohemian rhapsody");
  og = insert_ordered(og,"lady gaga","applause");
  og = insert_ordered(og,"queen","another one bites the dust");
  og = insert_ordered(og,"queen","we will rock you");
  og = insert_ordered(og,"avicii","hey brother");
  og = insert_ordered(og,"queen","radio ga ga");
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
  printf("Testing 16 insert-ordered\n");
  print_list(og);
  printf("Testing find_node:\n\n");
  printf("looking for [maroon 5: don't wanna know]: ");
  print_list(find_unique(og,"maroon 5","don't wanna know"));
  printf("looking for [caleb: anysong]: ");
  print_list(find_unique(og,"caleb","anysong"));
  printf("looking for [taylor swift: you need to calm down]: ");
  print_list(find_unique(og,"taylor swift","you need to calm down"));
  printf("\n\nTesting find_artist:\n\n");
  printf("looking for [queen]: ");
  print_list(find_artist(og,"queen"));
  printf("looking for [caleb: anysong]: ");
  print_list(find_artist(og,"caleb"));
  printf("looking for [katy perry]: ");
  print_list(find_artist(og,"katy perry"));
  printf("\n\nTesting song_cmp:\n\n");
  printf("Comparing [avicii:hey brother] to [avicii:hey brother]\n");
  printf("%d\n",song_cmp(find_unique(og,"avicii","hey brother"),find_unique(og,"avicii","hey brother")));
  printf("Comparing [avicii:levels] to [avicii:hey brother]\n");
  printf("%d\n",song_cmp(find_unique(og,"avicii","levels"),find_unique(og,"avicii","hey brother")));
  printf("Comparing [avicii:hey brother] to [avicii:levels]\n");
  printf("%d\n",song_cmp(find_unique(og,"avicii","hey brother"),find_unique(og,"avicii","levels")));
  printf("Comparing [taylor swift:blank space] to [maroon 5:payphone]\n");
  printf("%d\n",song_cmp(find_unique(og,"taylor swift","blank space"),find_unique(og,"maroon 5", "payphone")));
  printf("\n\nTesting countSongs:\n\n");
  printf("Count Songs: %d", countSongs(og));
  srand(time(NULL));
  printf("\n\nTesting random:\n\n");
  print_node(find_random(og));
  printf("\n");
  print_node(find_random(og));
  printf("\n");
  print_node(find_random(og));
  printf("\n");
  print_node(find_random(og));
  printf("\n");
  printf("\n\nTesting Remove_Node:\n\n");
  printf("Removing [maroon 5 : payphone]\n");
  og = remove_Song_node(og,find_unique(og,"maroon 5", "payphone"));
  printf("Removing [maroon 5 : payphone]\n");
  og = remove_Song_node(og,find_unique(og,"maroon 5", "payphone"));
  printf("Removing [taylor swift : you need to calm down]\n");
  og = remove_Song_node(og,find_unique(og,"taylor swift", "you need to calm down"));
  printf("Removing [queen: radio ga ga]\n");
  og = remove_Song_node(og,find_unique(og,"queen", "radio ga ga"));
  printf("\n\nTesting Free List Again:\n\n");
  free_list(og);

  printf("\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\nMusic Library Testing\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
  struct Song_node * table[27] = {0};
  printf("\n\nTesting findIndexChar:\n\n");
  printf("%d\n", findIndexChar('c'));
  printf("%d\n", findIndexChar('z'));
  printf("%d\n", findIndexChar('$'));
  printf("\n\nTesting Add Song:\n\n");
  memcpy(table,add_song(table,"lady gaga", "alexandro"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"lady gaga", "bad romance"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"lady gaga", "bad romance"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"queen","bohemian rhapsody"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"lady gaga","applause"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"queen","another one bites the dust"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"queen","we will rock you"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"avicii","hey brother"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"queen","radio ga ga"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"avicii","levels"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"avicii","wake me up"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"avicii","broken arrows"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"maroon 5","don't wanna know"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"maroon 5","payphone"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"maroon 5","moves like jagger"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"taylor swift","you need to calm down"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"taylor swift","shake it off"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"taylor swift","blank space"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"katy perry","last friday night"),sizeof(struct  ong_node * [27]));
  memcpy(table,add_song(table,"katy perry","roar"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"katy perry","dark horse"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"katy perry","part of me"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"katy perry","look what you made me do"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"michael jackson","smooth criminal"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"michael jackson","thriller"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"michael jackson","billie jean"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"michael jackson","beat it"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"marshmello","alone"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"marshmello","one thing right"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"marshmello","stars"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"marshmello","summer"),sizeof(struct Song_node * [27]));
  memcpy(table,add_song(table,"marshmello","together"),sizeof(struct Song_node * [27]));



  //print_list(og);
}
