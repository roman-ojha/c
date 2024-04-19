#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20

struct DOB {
  int year;
  int month;
  int day;
};

struct Location {
  char place[50];
  char district[50];
};

struct User {
  int uid;
  char first_name[50];
  char last_name[50];
  char email[50];
  float height;
  char password[50];
  struct Location location;
  struct DOB date_of_birth;
};

struct UserNode {
  struct User user;
  struct UserNode *next;
};

int registerUser();
int writeUserToFile(struct User *);
int loginUser();
void printUser(struct User *);
struct UserNode *readUsersFromFile();
void app();
void userListTraversal(struct UserNode *);
int isListEmpty(struct UserNode *);
struct UserNode *userListPush(struct UserNode *, struct User);
int lengthOfUser(struct UserNode *);
int doesEmailExist(struct UserNode *, char[]);
int main() {
  app();
  return 0;
}
