#ifndef ELEXION_OPERATIONS_WITHDRAW_H_
#define ELEXION_OPERATIONS_WITHDRAW_H_
#include <string>

class Withdraw {
 protected:
  int id;

 public:
  Withdraw() = default;
  ~Withdraw() = default;
  std::string amount;
  std::string date;
  std::string reciept;
  void update();
};

#endif  // ELEXION_OPERATIONS_WITHDRAW_H_
