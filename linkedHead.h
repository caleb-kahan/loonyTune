struct Song_node * insert_front(struct Song_node *nody, char *name, char *artist);
int song_cmp(struct Song_node *one, struct Song_node *two);
struct Song_node * insert_ordered(struct Song_node *front,char *name, char *artist);
struct Song_node *remove_Song_node(struct Song_node *front, struct Song_node *soon_dead_node);
struct Song_node * free_list(struct Song_node *list);
void print_list(struct Song_node *nody);
void print_node(struct Song_node *nody);
struct Song_node *find_unique(struct Song_node *list, char *artist, char*name);
struct Song_node *find_artist(struct Song_node *front, char *artist);
struct Song_node *find_random(struct Song_node *list);
int countSongs(struct Song_node *front);

struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};
