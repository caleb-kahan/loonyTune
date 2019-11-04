#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedHead.h"
#include "musicHead.h"

struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};

struct Song_node * table[27];

struct Song_node * [] add_song(Song_node *[] library, Song_node *songy){
  int index = findIndex(songy);
  library[index] = insert_ordered(library[index],songy);
  return library;
}
struct Song_node * song_search(Song_node *[] library, char *artist, char *name){
  int index = findIndex(artist[0]);
  return find_unique(library[unique], artist, name);
}
struct song_node * artist_search(Song_node *[] library, char *artist){
  int index = findIndex(artist[0]);
  struct song_node *front = library[index];
  return find_artist(front,artist);
}
void print_letter(Song_node *[] library, char c){
  int index = findIndex(c);
  print_list(library[index]);
}
void print_artist(Song_node *[] library, char *artist){
  struct song_node *start = artist_search(library,artist);

  while(start){
    print_node(start);
    printf("\n");
    start = start->next;
    start = find_artist(start,artist);
  }
}
void print_library(Song_node *[] library){
  char a;
  for(a='a';a<='z'+1;a++){
    print_letter(library,a);
  }
}
int findIndex(struct song_node *nody){
  return findIndex((nody->artist)[0]);
}
int findIndex(char c){
  int index = c - 'a';
  if(! (index >= 0 && index <26)){
    index = 26;
  }
  return index;
}
void shuffle(){
  int i;
  srand( time(NULL) );
  for(i=0;i<3;i++){
    int index = rand() %27;
    print_node(find_random(library[index]));
    printf("\n");
  }
}
struct Song_node * [] delete_song(Song_node *[] library, Song_node *songy){
  int index = findIndex(songy);
  library[index] = remove_Song_node(library[index],songy);
  return library;
}
struct Song_node * [] clear_library(Song_node *[] library){
  int i;
  for(i=0;i<27;i++){
    library[i] = free_list(library[i]);
  }
  return library;
}
