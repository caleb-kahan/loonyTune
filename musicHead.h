struct Song_node{
  char name[100];
  char artist[100];
  struct Song_node *next;
};

struct Song_node * [] add_song(Song_node *[] library, Song_node *songy);
struct Song_node * song_search(Song_node *[] library, char *artist, char *name);
struct song_node * artist_search(Song_node *[] library, char *artist);
void print_letter(Song_node *[] library, char c);
void print_artist(Song_node *[] library, char *artist);
void print_library(Song_node *[] library);
int findIndex(struct song_node *nody);
int findIndex(char c);
void shuffle();
struct Song_node * [] delete_song(Song_node *[] library, Song_node *songy);
struct Song_node * [] clear_library(Song_node *[] library);