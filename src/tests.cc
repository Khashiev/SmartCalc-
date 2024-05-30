#include <gtest/gtest.h>

#include "Model/model.h"

using namespace s21;

Model model;

TEST(CalculatorTest, test_1) {
  double result = model.Calculate("5 + 5");
  ASSERT_EQ(result, 10);
}

TEST(CalculatorTest, test_2) {
  double result = model.Calculate("7 - 5");
  ASSERT_EQ(result, 2);
}

TEST(CalculatorTest, test_3) {
  double result = model.Calculate("5 * 5");
  ASSERT_EQ(result, 25);
}

TEST(CalculatorTest, test_4) {
  double result = model.Calculate("25 / 5");
  ASSERT_EQ(result, 5);
}

TEST(CalculatorTest, test_5) {
  double result = model.Calculate("5^3");
  ASSERT_EQ(result, 125);
}

TEST(CalculatorTest, test_6) {
  double result = model.Calculate("10 % 3");
  ASSERT_EQ(result, 1);
}

TEST(CalculatorTest, test_7) {
  double result = model.Calculate("2 * (2 + 2)");
  ASSERT_EQ(result, 8);
}

TEST(CalculatorTest, test_8) {
  double result = model.Calculate("sqrt(49)");
  ASSERT_EQ(result, 7);
}

TEST(CalculatorTest, test_9) {
  double result = model.Calculate("sin(0)");
  ASSERT_EQ(result, 0);
}

TEST(CalculatorTest, test_10) {
  double result = model.Calculate("cos(0)");
  ASSERT_EQ(result, 1);
}

TEST(CalculatorTest, test_11) {
  double result = model.Calculate("tan(0)");
  ASSERT_EQ(result, 0);
}

TEST(CalculatorTest, test_12) {
  double result = model.Calculate("ln(1)");
  ASSERT_EQ(result, 0);
}

TEST(CalculatorTest, test_13) {
  double result = model.Calculate("log(100)");
  ASSERT_EQ(result, 2);
}

TEST(CalculatorTest, test_14) {
  double result = model.Calculate("asin(0)");
  ASSERT_EQ(result, 0);
}

TEST(CalculatorTest, test_15) {
  double result = model.Calculate("acos(1)");
  ASSERT_EQ(result, 0);
}

TEST(CalculatorTest, test_16) {
  double result = model.Calculate("atan(0)");
  ASSERT_EQ(result, 0);
}
///
TEST(CalculatorTest, test_17) {
  double result = model.Calculate(
      "-(1+3*(5%3+100))/50/1*20+-(50^2*(5+3^2)%(3*2)+31*20/"
      "(10*-5^(2+1)))+39^2*48*10*123-50-10");
  ASSERT_EQ(result, 89799655.696);
}

TEST(CalculatorTest, test_18) {
  double result = model.Calculate(
      "-(1+3 *(5%3+ 100))/50 / 1*20+-( 50^2*(5+3^2  "
      ")%(3*2)+31*20/(10*-5^(2+1)) )+39^2*48*10*123-50-10");
  ASSERT_EQ(result, 89799655.696);
}

TEST(CalculatorTest, test_19) {
  double result = model.Calculate("15120.150+4961254.9271/2.5^2");
  ASSERT_EQ(result, 808920.938336);
}

TEST(CalculatorTest, test_20) {
  double result = model.Calculate(
      "acos(-0.5)+asin(-0.5)+atan(0.1)*cos(30)*sin(20)*tan(45)");
  ASSERT_EQ(result, 1.593531);
}

TEST(CalculatorTest, test_21) {
  double result =
      model.Calculate("(ln(50)+100)%(2+2.5)+(log(100)*20)^(2+2)+sqrt(25)");
  ASSERT_EQ(result, 2560005.412023);
}

TEST(CalculatorTest, test_22) {
  double result = model.Calculate("-(cos(20)+-10)%2");
  ASSERT_EQ(result, 1.591918);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
