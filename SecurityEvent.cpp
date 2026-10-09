#include "SecurityEvent.h"
#include <iostream>

SecurityEvent::SecurityEvent(int id, std::string type, std::string src, std::string time)
    : eventId(id), eventType(type), source(src), timestamp(time) {}

int SecurityEvent::getEventId() const
{
  return eventId;
}

std::string SecurityEvent::getEventType() const
{
  return eventType;
}

std::string SecurityEvent::getSource() const
{
  return source;
}

std::string SecurityEvent::getTimestamp() const
{
  return timestamp;
}

void SecurityEvent::displayEvent() const
{
  std::cout << "\n--- Security Event ---\n";
  std::cout << "Event ID: " << eventId << "\n";
  std::cout << "Type: " << eventType << "\n";
  std::cout << "Source: " << source << "\n";
  std::cout << "Timestamp: " << timestamp << "\n";
}