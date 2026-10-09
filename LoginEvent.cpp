#include "LoginEvent.h"
#include <iostream>

LoginEvent::LoginEvent(int id, std::string src, std::string time, int attempts)
    : SecurityEvent(id, "Login Event", src, time),
      failedAttempts(attempts) {}

int LoginEvent::getFailedAttempts() const
{
  return failedAttempts;
}

void LoginEvent::displayEvent() const
{
  std::cout << "\n--- Login Security Event ---\n";
  std::cout << "Event ID: " << getEventId() << "\n";
  std::cout << "Type: " << getEventType() << "\n";
  std::cout << "Source: " << getSource() << "\n";
  std::cout << "Timestamp: " << getTimestamp() << "\n";
  std::cout << "Failed Attempts: " << failedAttempts << "\n";
}