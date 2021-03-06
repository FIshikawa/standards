/*****************************************************************************
*
* Copyright (C) 2014-2018 by Synge Todo <wistaria@phys.s.u-tokyo.ac.jp>
*
* Distributed under the Boost Software License, Version 1.0. (See accompanying
* file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*
*****************************************************************************/

#include <iostream>
#include <standards/bisection.hpp>

double f(double x) { return 3.293*x*x-5.33*x+1; }

int main() {
  standards::bisection optimizer;
  int iteration;
  iteration = optimizer.find_zero(f, 0, 1);
  if (iteration < 0) {
    std::cout << "Initial enclosure failure\n";
  } else {
    std::cout << iteration << ' ' << optimizer.zero() << std::endl;
  }
}
