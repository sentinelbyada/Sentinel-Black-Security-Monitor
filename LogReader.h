#ifndef LOG_READER_H
#define LOG_READER_H

#include <string>
#include <vector>
#include <memory>

#include "SecurityEvent.h"

class LogReader
{
public:
  std::vector<std::shared_ptr<SecurityEvent>>
  readLogs(const std::string &fileName);
};

#endif