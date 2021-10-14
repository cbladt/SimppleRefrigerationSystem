#include <iostream>
#include <Exception.hpp>
#include <Unit/Pressure.hpp>
#include <Component/ConstantSource.hpp>
#include <Component/SinkToConsole.hpp>
#include <Component/Gain.hpp>

void RealMain()
{
  simpp::Unit::Pressure initial;
  initial.SetBarAbsolute(13.37);

  simpp::Component::ConstantSource<simpp::Unit::Pressure> source(initial);
  simpp::Component::Gain<simpp::Unit::Pressure> gain(0.9999f);
  simpp::Component::SinkToConsole<simpp::Unit::Pressure> sink;

  source.SendTo(gain);
  gain.SendTo(sink);
  gain.SendTo(gain);

  source.Tick();
}

int main()
{
  try
  {
    RealMain();
  }
  catch(simpp::Exception e)
  {
    std::cout << "Exception: " << e.What() << std::endl;
  }
}
