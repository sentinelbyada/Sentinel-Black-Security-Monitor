#ifndef FILE_EVENT_H
#define FILE_EVENT_H

#include "SecurityEvent.h"

class FileEvent : public SecurityEvent
{
private:
  std::string fileName;

public:
  FileEvent(int id, std::string src, std::string time, std::string file);

  std::string getFileName() const;

  void displayEvent() const override;
};

#endif