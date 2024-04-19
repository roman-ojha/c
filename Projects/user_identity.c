
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

int main() { return 0; }
