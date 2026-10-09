#ifndef SECURITY_MONITOR_H
#define SECURITY_MONITOR_H

#include "SecurityEvent.h"
#include "DetectionRule.h"
#include "Alert.h"
#include "Incident.h"

#include <vector>
#include <memory>

class SecurityMonitor
{
private:
  std::vector<std::shared_ptr<SecurityEvent>> events;
  std::vector<std::shared_ptr<DetectionRule>> rules;
  std::vector<Alert> alerts;
  std::vector<Incident> incidents;

public:
  void addEvent(std::shared_ptr<SecurityEvent> event);
  void addRule(std::shared_ptr<DetectionRule> rule);

  void analyzeEvents();
  void displayEvents() const;
  void displayAlerts() const;
  void displayIncidents() const;

  int getEventCount() const;
  int getAlertCount() const;
  int getIncidentCount() const;
};

#endif