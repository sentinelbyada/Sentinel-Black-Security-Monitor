#ifndef DETECTION_RULE_H
#define DETECTION_RULE_H

#include "SecurityEvent.h"
#include <string>

class DetectionRule
{
public:
  virtual bool detect(const SecurityEvent &event) = 0;
  virtual std::string getRuleName() const = 0;

  virtual ~DetectionRule() {}
};

#endif