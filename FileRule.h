#ifndef FILE_RULE_H
#define FILE_RULE_H

#include "DetectionRule.h"
#include "FileEvent.h"

class FileRule : public DetectionRule
{
public:
  bool detect(const SecurityEvent &event) override;
  std::string getRuleName() const override;
};

#endif