#include <iostream>
#include <Component/ConstantSource.hpp>
#include <Component/Orifice.hpp>

void RealMain()
{
  simpp::Component::ConstantSource<float> source;
  simpp::Component::Orifice<float> valve;

  valve.Input.Connect(source);

  std::cout << std::to_string(valve.Get()) << std::endl;
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
