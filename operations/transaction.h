#ifndef ELEXION_OPERATIONS_TRANSACTION_H_
#define ELEXION_OPERATIONS_TRANSACTION_H_
#include <string>

class Transaction {
 protected:
  int id;

 public:
  Transaction() = default;
  ~Transaction() = default;
  std::string details;
  std::string date;
  void update();
};

#endif  // ELEXION_OPERATIONS_TRANSACTION_H_
