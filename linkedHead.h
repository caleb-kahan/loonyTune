struct Song_node * insert_front(struct Song_node *nody, char *name, char *artist);
int song_cmp(struct Song_node *one, struct Song_node *two);
struct Song_node * insert_ordered(struct Song_node *front, struct Song_node *newNode);
struct Song_node *remove_Song_node(struct Song_node *front, struct Song_node *soon_dead_node);
struct Song_node * free_list(struct Song_node *list);
void print_list(struct Song_node *nody);
void print_node(struct Song_node *nody);
struct Song_node *find_unique(Struct Song_node *list, char *artist, char*name);
struct Song_node *find_artist(Struct Song_node *front, char *artist);
struct Song_node *find_random(Struct Song_node *list);
int count(Struct Song_node *list);