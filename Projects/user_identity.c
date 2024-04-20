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

void app() {
  printf("=================== User Identity ======================\n");
  printf("Choose bellow options\n");
option:
  printf("1. Register New User\n");
  printf("2. Login Registered User\n");
  int option = 0;
  scanf("%d", &option);
  switch (option) {
  case 1:
    registerUser();
    break;
  case 2:
    loginUser();
    break;
  default:
    printf("============= Warning: Please chose between given option numbers "
           "===============\n");
    goto option;
    break;
  }
}

int writeUserToFile(struct User *user) {
  FILE *file = fopen("user_data.bin", "ab");
  if (file == NULL) {
    printf("Unable to open file for writing.\n");
    fclose(file);
    return 0;
  }
  int flag = 0;
  flag = fwrite(user, sizeof(struct User), 1, file);
  if (flag) {
    fclose(file);
    return 1;
  } else {
    printf("Error Writing new user to file!\n");
    fclose(file);
    return 0;
  }
}

struct UserNode *readUsersFromFile() {
  struct UserNode *head;
  head = NULL;
  FILE *file = fopen("user_data.bin", "rb");
  if (file == NULL) {
    // printf("Unable to open file for writing.\n");
    fclose(file);
    return head;
  }
  struct User user;
  while (fread(&user, sizeof(struct User), 1, file)) {
    head = userListPush(head, user);
  }
  fclose(file);
  return head;
}

int doesEmailExist(struct UserNode *userHead, char email[]) {
  struct UserNode *ptr = userHead;
  while (ptr != NULL) {
    if (strcmp(email, ptr->user.email) == 0)
      return 1;
    ptr = ptr->next;
  }
  return 0;
}

int registerUser() {
  char password[50], c_password[50];
  struct DOB dob;
  struct User user;
  struct Location location;
  struct UserNode *userHead = readUsersFromFile();
  system("cls || clear");
  printf("=================== User Registration ======================\n");
  printf("Enter First Name: ");
  scanf("%s", user.first_name);
  printf("Enter Last Name: ");
  scanf("%s", user.last_name);
email:
  printf("Enter Email: ");
  scanf("%s", user.email);
  if (doesEmailExist(userHead, user.email)) {
    printf("============= Warning: Given email already exist, pelase use "
           "another one =============\n");
    goto email;
  };
  printf("Enter Height: ");
  scanf("%f", &user.height);
  printf("Enter Place: ");
  scanf("%s", location.place);
  printf("Enter District: ");
  scanf("%s", location.district);
password:
  printf("Enter Password: ");
  scanf("%s", password);
  printf("Enter Confirm Password: ");
  scanf("%s", c_password);
  if (strcmp(password, c_password) != 0) {
    printf("============== Warning: Password didn't match please re-enter "
           "password & confirm password ==================\n");
    goto password;
  } else {
    strcpy(user.password, password);
    goto next;
  }
next:
  printf("Enter Date of birth Year: ");
  scanf("%d", &dob.year);
  printf("Enter Date of birth Month: ");
  scanf("%d", &dob.month);
  printf("Enter Date of birth Day: ");
  scanf("%d", &dob.day);
  user.location = location;
  user.date_of_birth = dob;
  user.uid = lengthOfUser(userHead);
  if (writeUserToFile(&user))
    printf("User registered successfully\n");
  // push added user to linked list
  userHead = userListPush(userHead, user);
  // userListTraversal(userHead);
  return 1;
}

int loginUser() {
  char email[50], password[50];
  system("cls || clear");
  printf("=================== User Login ======================\n");
login:
  printf("Enter Email: ");
  scanf("%s", email);
  printf("Enter Password: ");
  scanf("%s", password);
  struct UserNode *userHead = readUsersFromFile();
  struct UserNode *ptr = userHead;
  int userFoundFlag = 0;
  while (ptr != NULL) {
    if (strcmp(email, ptr->user.email) == 0 &&
        strcmp(password, ptr->user.password) == 0) {
      userFoundFlag = 1;
      break;
    }
    ptr = ptr->next;
  }
  if (!userFoundFlag) {
    printf("=========== Warning: User not found with given "
           "credential, please login again"
           "===========\n");
    goto login;
  }
  system("cls || clear");
  printf("=================== Hello, %s ======================\n "
         "================ Your Information ===================\n",
         ptr->user.email);
  printUser(&ptr->user);
  return 1;
}

void printUser(struct User *user) {
  printf("UID: %d\nFullName: %s %s\nEmail: %s\nHeight: %f "
         "Feet\nLocation: "
         "%s, %s\nDate of Birth: %d-%d-%d",
         (*user).uid, (*user).first_name, (*user).last_name, (*user).email,
         (*user).height, (*user).location.place, (*user).location.district,
         (*user).date_of_birth.year, (*user).date_of_birth.month,
         (*user).date_of_birth.day);
}
