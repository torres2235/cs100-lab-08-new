#include "gtest/gtest.h"

#include "lab-04/op_test.hpp"
#include "lab-04/rand_test.hpp"
#include "lab-04/mult_test.hpp"
#include "lab-04/div_test.hpp"
#include "lab-04/add_test.hpp"
#include "lab-04/sub_test.hpp"
#include "lab-04/pow_test.hpp"

#include "lab-06/Floor_test.hpp"
#include "lab-06/Ceil_test.hpp"
#include "lab-06/Abs_test.hpp"
#include "lab-06/Paren_test.hpp"
#include "lab-06/Trunc_test.hpp"

#include "binary_iterator.cpp"
#include "unary_iterator.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
