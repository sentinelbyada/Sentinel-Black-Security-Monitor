#ifndef LOGIN_EVENT_H
#define LOGIN_EVENT_H

#include "SecurityEvent.h"

class LoginEvent : public SecurityEvent
{
private:
  int failedAttempts;

public:
  LoginEvent(int id, std::string src, std::string time, int attempts);

  int getFailedAttempts() const;

  void displayEvent() const override;
};

#endif