#include "Report.h"
#include <iostream>

Report::Report(int events, int alerts, int incidents)
    : totalEvents(events),
      totalAlerts(alerts),
      totalIncidents(incidents) {}

void Report::generateReport() const
{

  std::cout << "\n========== SECURITY REPORT ==========\n";

  std::cout << "Total Security Events: "
            << totalEvents << "\n";

  std::cout << "Total Alerts Generated: "
            << totalAlerts << "\n";

  std::cout << "Total Incidents: "
            << totalIncidents << "\n";

  if (totalAlerts == 0)
  {
    std::cout << "Security Status: NORMAL\n";
  }
  else
  {
    std::cout << "Security Status: THREATS DETECTED\n";
  }

  std::cout << "=====================================\n";
}