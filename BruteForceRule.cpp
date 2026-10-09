#include "BruteForceRule.h"

bool BruteForceRule::detect(const SecurityEvent &event)
{

  const LoginEvent *loginEvent =
      dynamic_cast<const LoginEvent *>(&event);

  if (loginEvent != nullptr)
  {
    return loginEvent->getFailedAttempts() >= 3;
  }

  return false;
}

std::string BruteForceRule::getRuleName() const
{
  return "Brute Force Detection";
}