#include <iostream>
#include <memory>

#include "SecurityEvent.h"
#include "LoginEvent.h"
#include "NetworkEvent.h"
#include "FileEvent.h"
#include "DetectionRule.h"
#include "BruteForceRule.h"
#include "Alert.h"
#include "Incident.h"
#include "SecurityMonitor.h"
#include "NetworkRule.h"
#include "FileRule.h"
#include "LogReader.h"
#include "Report.h"

int main()
{

    std::cout << "=====================================\n";
    std::cout << "          SENTINEL BLACK\n";
    std::cout << " Security Event Monitoring System\n";
    std::cout << "=====================================\n";

    // Create Security Monitor
    SecurityMonitor monitor;

    // Create detection rule
    std::shared_ptr<DetectionRule> bruteForceRule =
        std::make_shared<BruteForceRule>();

    monitor.addRule(bruteForceRule);

    std::shared_ptr<DetectionRule> networkRule =
        std::make_shared<NetworkRule>();

    monitor.addRule(networkRule);

    std::shared_ptr<DetectionRule> fileRule =
        std::make_shared<FileRule>();

    monitor.addRule(fileRule);

    // Create security events
    LogReader logReader;

    std::vector<std::shared_ptr<SecurityEvent>> events =
        logReader.readLogs("security_logs.txt");

    for (const auto &event : events)
    {
        monitor.addEvent(event);
    }
    // Display events
    monitor.displayEvents();

    // Analyze events
    std::cout << "\n========== ANALYZING EVENTS ==========\n";
    monitor.analyzeEvents();

    // Display generated alerts
    monitor.displayAlerts();

    // Display generated incidents
    monitor.displayIncidents();

    Report report(
        monitor.getEventCount(),
        monitor.getAlertCount(),
        monitor.getIncidentCount());

    report.generateReport();

    return 0;
}