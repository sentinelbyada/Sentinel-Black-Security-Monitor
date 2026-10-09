#include "FileRule.h"

bool FileRule::detect(const SecurityEvent &event)
{

  const FileEvent *fileEvent =
      dynamic_cast<const FileEvent *>(&event);

  if (fileEvent != nullptr)
  {
    return fileEvent->getFileName() == "system_config.txt";
  }

  return false;
}

std::string FileRule::getRuleName() const
{
  return "Suspicious File Modification Detection";
}