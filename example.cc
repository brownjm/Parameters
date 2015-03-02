#include <stdexcept>
#include <iostream>

#include "parameters.h"


int main(int argc, char* argv[]) {
  if (argc < 2) throw std::runtime_error("Please provide an input filename\n");

  // read parameters
  Parameters::Parameters params(argv[1]);
  
  // print parameters to console
  params.print(std::cout);

  // get value for dt
  double dt;
  params.get("time/dt", dt);
  std::cout << "Read in value of time/dt as: " << dt << "\n";

  // update value for dt
  dt = 2.4;
  params.set("time/dt", dt);
  std::cout << "Value for dt has been updated\n";
  params.print(std::cout);

  std::string input_filename;
  params.get("output/newinput", input_filename);
  params.save(input_filename);
  std::cout << "New parameters saved to " << input_filename << "\n";
}
