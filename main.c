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
struct Song_node * insert_ordered(struct Song_node *nody, int data){
    struct Song_node *newSong = malloc(sizeof(struct Song_node));
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
    newSong->i = data;
    newSong->next = nody;
    return newSong;
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
