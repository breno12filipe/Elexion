#ifndef ELEXION_OPERATIONS_DEBIT_H_
#define ELEXION_OPERATIONS_DEBIT_H_
#include <string>

class Debit {
 public:
  Debit() = default;
  ~Debit() = default;
  std::string information;
  void processDebit();
};

#endif  // ELEXION_OPERATIONS_DEBIT_H_
