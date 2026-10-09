#ifndef ALERT_H
#define ALERT_H

#include <string>

class Alert
{
private:
  int alertId;
  std::string ruleName;
  std::string severity;
  std::string message;

public:
  Alert(int id, std::string rule, std::string level, std::string msg);

  void displayAlert() const;
};

#endif