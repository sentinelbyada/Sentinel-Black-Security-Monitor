#ifndef REPORT_H
#define REPORT_H

#include <string>

class Report
{
private:
  int totalEvents;
  int totalAlerts;
  int totalIncidents;

public:
  Report(int events, int alerts, int incidents);

  void generateReport() const;
};

#endif