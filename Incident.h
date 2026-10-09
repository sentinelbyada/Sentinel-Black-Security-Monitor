#ifndef INCIDENT_H
#define INCIDENT_H

#include <string>

class Incident
{
private:
  int incidentId;
  std::string description;
  std::string severity;
  std::string status;

public:
  Incident(int id, std::string desc, std::string level);

  void closeIncident();
  void displayIncident() const;
};

#endif