#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Commits Commits;

Commits init_repo(char repo_name, char repo_directory);

Commits add_file(Commits * commit, char file_directory);  // file content is in the file
Commits remove_file(Commits * commit, char file_directory);

Commits commit(Commits * commit);

char get_file_content(Commits * commit, char file_directory);
int get_file_exists(Commits * commit, char file_directory);

void print_commit(Commits * commit);
void print_history(Commits * commit);
void print_files(Commits * commit);

Commits create_branch(Commits * commit, char branch_name);
Commits get_branch_head(char branch_name);

Commits checkout(Commits * commit);

Commits merge_simple(Commits * commit1, Commits * commit2);

int count_objects(Commits * commit);

long long int show_memory_saving(Commits commit);
