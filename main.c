#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};

struct Song_node * insert_front(struct Song_node *nody, char *name, char *artist){
    struct Song_node *newSong = malloc(sizeof(struct Song_node));
    newSong->name = name;
    newSong->artist = artist;
    newSong->next = nody;
    return newSong;
}
int song_cmp(struct Song_node *one, struct Song_node *two){
  if(str_cmp(one->name,two->name)){
    return str_cmp(one->artist,two->artist)){
  }
  return str_cmp(one->name,two->name);
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
    struct node *currentNode = front;
    while(currentSong_node->next){
      if(song_cmp(currentSong_node->next,newSong)>=0){
          newSong->next = currentSong_node->next;
          currentSong->next = newSong;
          return front;
      }
      currentSong_node = currentSong_node->next;
    }
    currentSong->next = newSong;
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
    printf("freeing Song_node: %d\n",list->i);
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
struct Song_node *find_unique(Struct Song_node *list, char *artist, char*name){
  struct Song_node *currentSong_node = front;
  while(currentSong_node){
    if(str_cmp(currentSong_node->artist,artist) && str_cmp(currentSong_node->name,name)){
      return currentSong_node;
    }
    currentSong_node = currentSong_node->next;
  }
  return NULL;
}
struct Song_node *find_artist(Struct Song_node *list, char *artist, char*name){
  struct Song_node *currentSong_node = front;
  while(currentSong_node){
    if(str_cmp(currentSong_node->artist,artist)){
      return currentSong_node;
    }
    currentSong_node = currentSong_node->next;
  }
  return NULL;
}
struct Song_node *find_random(Struct Song_node *list){
  int count = count(list);
  srand( time(NULL) );
  int index = rand() %count;
  int i = 0;
  struct Song_node *currentSong_node = front;
  while(i!=index){
    currentSong_node = currentSong_node->next;
    i++;
  }
  return currentSong_node;
}
int count(Struct Song_node *list){
  int count = 0;
  struct Song_node *currentSong_node = front;
  while(currentSong_node){
      count++;
  }
  return count;
}
