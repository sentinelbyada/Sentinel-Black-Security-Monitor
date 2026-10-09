#ifndef NETWORK_EVENT_H
#define NETWORK_EVENT_H

#include "SecurityEvent.h"

class NetworkEvent : public SecurityEvent
{
private:
  int portNumber;

public:
  NetworkEvent(int id, std::string src, std::string time, int port);

  int getPortNumber() const;

  void displayEvent() const override;
};

#endif