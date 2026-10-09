#include "FileEvent.h"
#include <iostream>

FileEvent::FileEvent(int id, std::string src, std::string time, std::string file)
    : SecurityEvent(id, "File Event", src, time),
      fileName(file) {}

std::string FileEvent::getFileName() const
{
  return fileName;
}

void FileEvent::displayEvent() const
{
  std::cout << "\n--- File Security Event ---\n";
  std::cout << "Event ID: " << getEventId() << "\n";
  std::cout << "Type: " << getEventType() << "\n";
  std::cout << "Source: " << getSource() << "\n";
  std::cout << "Timestamp: " << getTimestamp() << "\n";
  std::cout << "File Name: " << fileName << "\n";
}