#ifndef ELEXION_ENTITIES_EMPLOYEE_H_
#define ELEXION_ENTITIES_EMPLOYEE_H_
#include <string>

class Employee {
 public:
  Employee() = default;
  ~Employee() = default;
  std::string credentials;
  void add();
  void update();
};

#endif  // ELEXION_ENTITIES_EMPLOYEE_H_
