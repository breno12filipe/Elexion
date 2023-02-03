#ifndef ELEXION_ENTITIES_USER_H_
#define ELEXION_ENTITIES_USER_H_
#include <string>

class User {
 protected:
  void enableUser();
  void disableUser();

 public:
  User() = default;
  ~User() = default;
  std::string atmNumber;
};

#endif  // ELEXION_ENTITIES_USER_H_
