#include "SecurityMonitor.h"

#include <iostream>

void SecurityMonitor::addEvent(std::shared_ptr<SecurityEvent> event)
{
  events.push_back(event);
}

void SecurityMonitor::addRule(std::shared_ptr<DetectionRule> rule)
{
  rules.push_back(rule);
}

void SecurityMonitor::analyzeEvents()
{

  int alertId = 1;
  int incidentId = 1;

  for (const auto &event : events)
  {

    for (const auto &rule : rules)
    {

      if (rule->detect(*event))
      {

        std::string message =
            "Suspicious activity detected from " +
            event->getSource();

        alerts.emplace_back(
            alertId++,
            rule->getRuleName(),
            "HIGH",
            message);

        incidents.emplace_back(
            incidentId++,
            message,
            "HIGH");
      }
    }
  }
}

void SecurityMonitor::displayEvents() const
{

  std::cout << "\n========== SECURITY EVENTS ==========\n";

  for (const auto &event : events)
  {
    event->displayEvent();
  }
}

void SecurityMonitor::displayAlerts() const
{

  std::cout << "\n========== ALL ALERTS ==========\n";

  for (const auto &alert : alerts)
  {
    alert.displayAlert();
  }
}

void SecurityMonitor::displayIncidents() const
{

  std::cout << "\n========== ALL INCIDENTS ==========\n";

  for (const auto &incident : incidents)
  {
    incident.displayIncident();
  }
}

int SecurityMonitor::getEventCount() const
{
  return events.size();
}

int SecurityMonitor::getAlertCount() const
{
  return alerts.size();
}

int SecurityMonitor::getIncidentCount() const
{
  return incidents.size();
}