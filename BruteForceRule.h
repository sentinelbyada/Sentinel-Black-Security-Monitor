#ifndef BRUTE_FORCE_RULE_H
#define BRUTE_FORCE_RULE_H

#include "DetectionRule.h"
#include "LoginEvent.h"

class BruteForceRule : public DetectionRule
{
public:
  bool detect(const SecurityEvent &event) override;
  std::string getRuleName() const override;
};

#endif