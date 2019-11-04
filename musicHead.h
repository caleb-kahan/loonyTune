struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};

struct Song_node ** add_song(struct Song_node * library [], struct Song_node *songy);
struct Song_node * song_search(struct Song_node * library [], char *artist, char *name);
struct Song_node * artist_search(struct Song_node * library [], char *artist);
void print_letter(struct Song_node * library [], char c);
void print_artist(struct Song_node * library [], char *artist);
void print_library(struct Song_node * library []);
int findIndexSong(struct Song_node *nody);
int findIndexChar(char c);
void shuffle(struct Song_node * library []);
struct Song_node ** delete_song(struct Song_node * library [], struct Song_node *songy);
struct Song_node ** clear_library(struct Song_node * library []);
