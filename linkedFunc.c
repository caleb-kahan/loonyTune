#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "linkedHead.h"


struct Song_node * insert_front(struct Song_node *nody, char *name, char *artist){
    struct Song_node *newSong = malloc(sizeof(struct Song_node));
    strcpy(newSong->name, name);
    strcpy(newSong->artist, artist);
    newSong->next = nody;
    return newSong;
}
int song_cmp(struct Song_node *one, struct Song_node *two){
  if(strcmp(one->name,two->name)){
    return strcmp(one->artist,two->artist);
  }
  return strcmp(one->name,two->name);
}
struct Song_node * insert_ordered(struct Song_node *front, struct Song_node *newNode){
    struct Song_node *newSong = malloc(sizeof(struct Song_node));
    *newSong = *newNode;
    if(song_cmp(front,newSong)>=0){
      newSong->next = front;
      return newSong;
    }
    //newSong->name = newNode->name;
    //newSong->artist = newNode->artist;
    //newSong->next = newNode->next;
    struct Song_node *currentSong_node = front;
    while(currentSong_node->next){
      if(song_cmp(currentSong_node->next,newSong)>=0){
          newSong->next = currentSong_node->next;
          currentSong_node->next = newSong;
          return front;
      }
      currentSong_node = currentSong_node->next;
    }
    currentSong_node->next = newSong;
    return front;
}

struct Song_node *remove_Song_node(struct Song_node *front, struct Song_node *soon_dead_node){
  if(song_cmp(front,soon_dead_node)){
      struct Song_node *returner = front->next;
      free(front);
      return returner;
  }
  struct Song_node *currentSong_node = front;
  while(currentSong_node->next){
    if(song_cmp(currentSong_node->next,soon_dead_node)){
        struct Song_node *deadSong_node = currentSong_node->next;
        if(currentSong_node->next->next)
          currentSong_node->next = currentSong_node->next->next;
        else
          currentSong_node->next = NULL;
        free(deadSong_node);
        return front;
    }
    currentSong_node = currentSong_node->next;
  }
  return front;
}
struct Song_node * free_list(struct Song_node *list){
  while(list != NULL){
    printf("freeing Song_node: ");
    print_node(list);
    printf("\n");
    list = remove_Song_node(list,list);
  }
  return list;
}
void print_list(struct Song_node *nody){
    if(nody != NULL){
      while(nody->next){
        print_node(nody);
        printf(" | ");
        nody = nody->next;
      }
      print_node(nody);
      printf(" |\n");
    }
    else
      printf("NO SONGS!\n");
}
void print_node(struct Song_node *nody){
  printf("%s: %s", nody->name, nody->artist);
}
struct Song_node *find_unique(struct Song_node *list, char *artist, char*name){
  struct Song_node *currentSong_node = list;
  while(currentSong_node){
    if(strcmp(currentSong_node->artist,artist) && strcmp(currentSong_node->name,name)){
      return currentSong_node;
    }
    currentSong_node = currentSong_node->next;
  }
  return NULL;
}
struct Song_node *find_artist(struct Song_node *front, char *artist){
  struct Song_node *currentSong_node = front;
  while(currentSong_node){
    if(strcmp(currentSong_node->artist,artist)){
      return currentSong_node;
    }
    currentSong_node = currentSong_node->next;
  }
  return NULL;
}
struct Song_node *find_random(struct Song_node *front){
  int total = countSongs(front);
  srand( time(NULL) );
  int index = rand() %total;
  int i = 0;
  struct Song_node *currentSong_node = front;
  while(i!=index){
    currentSong_node = currentSong_node->next;
    i++;
  }
  return currentSong_node;
}
int countSongs(struct Song_node *front){
  int total = 0;
  struct Song_node *currentSong_node = front;
  while(currentSong_node){
      total++;
  }
  return total;
}
