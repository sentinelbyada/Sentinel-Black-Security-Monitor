# Sentinel Black — Security Event Monitoring System

**A rule-based security event monitoring and alert system built using C++ and Object-Oriented Programming (OOP).**

## Overview

Sentinel Black is an academic cybersecurity project that reads sample security logs, identifies events matching predefined detection rules, and generates alerts, incidents, and a security report.

## Features

* Reads security events from a log file.
* Processes login, network, and file-related events.
* Detects activity matching predefined security rules.
* Generates alerts and incident records.
* Produces a security monitoring report.
* Handles malformed log entries using exception handling.

## Detection Rules

| Rule                  | Detection condition                                                     |
| --------------------- | ----------------------------------------------------------------------- |
| Brute Force Detection | Failed login attempts reach the configured threshold                    |
| Network Rule          | A network event uses the configured port, such as `8080`                |
| File Rule             | A file event matches a configured filename, such as `system_config.txt` |

These are demonstration rules; matching an event does not by itself prove malicious activity.

## Technologies Used

* C++
* Object-Oriented Programming
* File handling
* Exception handling
* Rule-based event detection

## OOP Concepts Demonstrated

* Encapsulation
* Inheritance
* Abstraction
* Polymorphism
* Virtual functions
* Composition and association

## Project Files

* `main.cpp` — program entry point
* `SecurityEvent.*` — base security event class
* `LoginEvent.*`, `NetworkEvent.*`, `FileEvent.*` — event types
* `DetectionRule.*`, `BruteForceRule.*`, `NetworkRule.*`, `FileRule.*` — detection rules
* `SecurityMonitor.*` — event monitoring and processing
* `LogReader.*` — reading security logs
* `Alert.*`, `Incident.*` — alerts and incidents
* `Report.*` — security report generation
* `security_logs.txt` — sample input data

## How to Compile and Run

Run these commands from the directory containing the source files, using a C++ compiler such as Clang:

```bash
clang++ -std=c++14 main.cpp SecurityEvent.cpp LoginEvent.cpp NetworkEvent.cpp FileEvent.cpp DetectionRule.cpp BruteForceRule.cpp NetworkRule.cpp FileRule.cpp Alert.cpp Incident.cpp SecurityMonitor.cpp LogReader.cpp Report.cpp -o main
```

Run the program:

```bash
./main
```

## Limitations

Sentinel Black is a rule-based academic prototype. It does not perform live network packet capture, machine-learning-based detection, or production-grade SIEM monitoring.

## Purpose

This project demonstrates the application of C++ and OOP principles to a cybersecurity monitoring scenario.

**Author:** Ada Khan

**Project:** Sentinel Black
