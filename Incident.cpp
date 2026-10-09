#include "Incident.h"
#include <iostream>

Incident::Incident(int id, std::string desc, std::string level)
    : incidentId(id),
      description(desc),
      severity(level),
      status("Open") {}

void Incident::closeIncident()
{
  status = "Closed";
}

void Incident::displayIncident() const
{
  std::cout << "\n========== SECURITY INCIDENT ==========\n";
  std::cout << "Incident ID: " << incidentId << "\n";
  std::cout << "Description: " << description << "\n";
  std::cout << "Severity: " << severity << "\n";
  std::cout << "Status: " << status << "\n";
  std::cout << "=======================================\n";
}