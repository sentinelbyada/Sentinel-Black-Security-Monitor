#include "Alert.h"
#include <iostream>

Alert::Alert(int id, std::string rule, std::string level, std::string msg)
    : alertId(id), ruleName(rule), severity(level), message(msg) {}

void Alert::displayAlert() const
{
  std::cout << "\n========== SECURITY ALERT ==========\n";
  std::cout << "Alert ID: " << alertId << "\n";
  std::cout << "Rule: " << ruleName << "\n";
  std::cout << "Severity: " << severity << "\n";
  std::cout << "Message: " << message << "\n";
  std::cout << "===================================\n";
}