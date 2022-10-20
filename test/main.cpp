#include <gtest/gtest.h>
#include "lib.hpp"

void function_not_used()
{
  dummy();
  int notUsed = 0;
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
