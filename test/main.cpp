#include <gtest/gtest.h>
#include "lib.hpp"
#include "src1.hpp"

void function_not_used()
{
  dummy();
  int notUsed = function1(3);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
