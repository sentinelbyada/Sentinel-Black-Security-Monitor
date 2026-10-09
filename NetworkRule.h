#ifndef NETWORK_RULE_H
#define NETWORK_RULE_H

#include "DetectionRule.h"
#include "NetworkEvent.h"

class NetworkRule : public DetectionRule
{
public:
  bool detect(const SecurityEvent &event) override;
  std::string getRuleName() const override;
};

#endif