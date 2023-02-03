#ifndef ELEXION_ENTITIES_ADMIN_H_
#define ELEXION_ENTITIES_ADMIN_H_
#include <string>

class Admin {
 private:
  std::string username;
  std::string password;

 protected:
  int id;

 public:
  Admin() = default;
  ~Admin() = default;
  std::string name;
  std::string username;
  std::string contactNumber;
  void create();
  void update();
};

#endif  // ELEXION_ENTITIES_ADMIN_H_
