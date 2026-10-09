#include "NetworkEvent.h"
#include <iostream>

NetworkEvent::NetworkEvent(int id, std::string src, std::string time, int port)
    : SecurityEvent(id, "Network Event", src, time),
      portNumber(port) {}

int NetworkEvent::getPortNumber() const
{
  return portNumber;
}

void NetworkEvent::displayEvent() const
{
  std::cout << "\n--- Network Security Event ---\n";
  std::cout << "Event ID: " << getEventId() << "\n";
  std::cout << "Type: " << getEventType() << "\n";
  std::cout << "Source: " << getSource() << "\n";
  std::cout << "Timestamp: " << getTimestamp() << "\n";
  std::cout << "Port Number: " << portNumber << "\n";
}