#ifndef SECURITY_EVENT_H
#define SECURITY_EVENT_H

#include <string>

class SecurityEvent
{
private:
  int eventId;
  std::string eventType;
  std::string source;
  std::string timestamp;

public:
  SecurityEvent(int id, std::string type, std::string src, std::string time);

  int getEventId() const;
  std::string getEventType() const;
  std::string getSource() const;
  std::string getTimestamp() const;

  virtual void displayEvent() const;
  virtual ~SecurityEvent() = default;
};

#endif