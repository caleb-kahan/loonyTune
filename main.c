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

struct Song_node *remove_Song_node(struct Song_node *front, int data){
  if(front->i == data){
      struct Song_node *returner = front->next;
      free(front);
      return returner;
  }

  struct Song_node *currentSong_node = front;
  while(currentSong_node->next){
    if(currentSong_node->next->i == data){
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
    list = remove_Song_node(list,list->i);
  }
  return list;
}
void print_list(struct Song_node *nody){
    printf("Printing list: [ ");
    if(nody != NULL){
      while(nody->next){
        printf("%d ", nody->i);
        nody = nody->next;
      }
      printf("%d ", nody->i);
    }
    printf("]\n");
}
