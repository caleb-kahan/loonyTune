#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};

struct Song_node * table[27];

struct Song_node * [] add_song(Song_node *[] library, Song_node *songy){
  int index = findIndex(*songy);
  library[index] = insert_ordered(library[index],songy);
  return library;
}
struct Song_node * song_search(Song_node *[] library, char *artist, char *name){
  int index = findIndex(*songy);
  return find_unique(library[unique], artist, name);
}

int findIndex(struct_node *songy){
  int index = songy[0] - 'a';
  if(! (index >= 0 && index <26)){
    index = 26;
  }
  return index;
}
