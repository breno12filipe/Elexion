#ifndef ELEXION_OPERATIONS_CREDIT_H_
#define ELEXION_OPERATIONS_CREDIT_H_
#include <string>

class Credit {
 public:
  Credit() = default;
  ~Credit() = default;
  std::string collaterals;
  void add();
  void update();
};

#endif  // ELEXION_OPERATIONS_CREDIT_H_
