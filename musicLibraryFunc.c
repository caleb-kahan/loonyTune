#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedHead.h"
#include "musicHead.h"

struct Song_node ** add_song(struct Song_node * library [], char *artist, char *name){
  int index = findIndexChar(artist[0]);
  library[index] = insert_ordered(library[index],artist,name);
  return library;
}
struct Song_node * song_search(struct Song_node * library [], char *artist, char *name){
  int index = findIndexChar(artist[0]);
  return find_unique(library[index], artist, name);
}
struct Song_node * artist_search(struct Song_node * library [], char *artist){
  int index = findIndexChar(artist[0]);
  struct Song_node *front = library[index];
  return find_artist(front,artist);
}
void print_letter(struct Song_node * library [], char c){
  int index = findIndexChar(c);
  if(index == 26){
    printf("* list\n");
  }
  else
    printf("%c list\n",c);
  print_list(library[index]);
}
void print_artist(struct Song_node * library [], char *artist){
  struct Song_node *start = artist_search(library,artist);

  while(start){
    print_node(start);
    printf("\n");
    if(! start ->next)
      break;
    start = start->next;
    start = find_artist(start,artist);
  }
}
void print_library(struct Song_node * library []){
  char a;
  for(a='a';a<='z'+1;a++){
    if(countSongs(library[a-'a']))
      print_letter(library,a);
  }
}
int findIndexSong(struct Song_node *nody){
  return findIndexChar((nody->artist)[0]);
}
int findIndexChar(char c){
  int index = c - 'a';
  if(! (index >= 0 && index <26)){
    index = 26;
  }
  return index;
}
void shuffle(struct Song_node * library []){
  int i;
  int counts[27] = {0};
  int total = 0;
  for(i=0;i<27;i++){
    counts[i]= countSongs(library[i]);
    total+= counts[i];
  }
  srand( time(NULL) );
  for(i =0;i<5;i++){
    shuffleHelper(library,counts,total);
  }
}
void shuffleHelper(struct Song_node * library [], int counts [] , int total){
  int picker = rand() % total;
  total = 0;
  int i;
  for(i=0;i<27;i++){
    total+=counts[i];
    if(picker<total){
      print_node(find_random(library[i]));
      printf("\n");
      return;
    }
  }
}
struct Song_node ** delete_song(struct Song_node * library [], struct Song_node *songy){
  int index = findIndexSong(songy);
  library[index] = remove_Song_node(library[index],songy);
  return library;
}
struct Song_node ** clear_library(struct Song_node * library []){
  int i;
  for(i=0;i<27;i++){
    library[i] = free_list(library[i]);
  }
  return library;
}
