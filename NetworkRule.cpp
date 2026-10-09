#include "NetworkRule.h"

bool NetworkRule::detect(const SecurityEvent &event)
{

  const NetworkEvent *networkEvent =
      dynamic_cast<const NetworkEvent *>(&event);

  if (networkEvent != nullptr)
  {
    return networkEvent->getPortNumber() == 8080;
  }

  return false;
}

std::string NetworkRule::getRuleName() const
{
  return "Suspicious Network Port Detection";
}