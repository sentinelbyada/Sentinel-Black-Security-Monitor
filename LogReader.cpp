#include "LogReader.h"
#include "LoginEvent.h"
#include "NetworkEvent.h"
#include "FileEvent.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

std::vector<std::shared_ptr<SecurityEvent>>
LogReader::readLogs(const std::string &fileName)
{

  std::vector<std::shared_ptr<SecurityEvent>> events;

  try
  {

    std::ifstream file(fileName);

    if (!file.is_open())
    {
      throw std::runtime_error("Could not open log file.");
    }

    std::string line;

    while (std::getline(file, line))
    {

      try
      {

        std::stringstream ss(line);

        std::string type;
        std::string idText;
        std::string source;
        std::string timestamp;
        std::string data;

        std::getline(ss, type, '|');
        std::getline(ss, idText, '|');
        std::getline(ss, source, '|');
        std::getline(ss, timestamp, '|');
        std::getline(ss, data, '|');

        int id = std::stoi(idText);

        if (type == "LOGIN")
        {

          int failedAttempts = std::stoi(data);

          events.push_back(
              std::make_shared<LoginEvent>(
                  id, source, timestamp, failedAttempts));
        }
        else if (type == "NETWORK")
        {

          int port = std::stoi(data);

          events.push_back(
              std::make_shared<NetworkEvent>(
                  id, source, timestamp, port));
        }
        else if (type == "FILE")
        {

          events.push_back(
              std::make_shared<FileEvent>(
                  id, source, timestamp, data));
        }
        else
        {
          std::cerr << "Warning: Unknown event type: "
                    << type << "\n";
        }
      }
      catch (const std::exception &e)
      {

        std::cerr << "Warning: Invalid log entry skipped.\n";
        std::cerr << "Reason: " << e.what() << "\n";
      }
    }

    file.close();
  }
  catch (const std::exception &e)
  {

    std::cerr << "Error: " << e.what() << "\n";
  }

  return events;
}