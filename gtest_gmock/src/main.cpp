/*
 * @Description: 
 * @Version: 0.0.1
 * @Author: shengbw
 * @Date: 2023-02-13 20:01:07
 * @LastEditors: shengbw
 * @LastEditTime: 2023-02-14 13:40:14
 * @FilePath: \gtest_gmock\src\main.cpp
 */
#pragma once 

#include <iostream>
#include <limits>
#include"func.h"
#include"gtest/gtest.h"
// #include"configure.h"

TEST(Fac_test, input_negative){  
	EXPECT_EQ(-1, fac(-1));  
	EXPECT_EQ(-1, fac(-2));  
	EXPECT_EQ(-1, fac(-5));  
}  

// TEST(Fac_test, input_zero){  
// 	EXPECT_EQ(1, fac(0));  
// }  

// TEST(Fac_test, input_positive){  
// 	EXPECT_EQ(1, fac(1));  
// 	EXPECT_EQ(2, fac(2));  
// 	EXPECT_EQ(6, fac(3));  
// }
TEST(ConfigTest, addItem) 
{
	 	// 配置类的初始化
    Config* pc = new Config();
    ASSERT_TRUE(pc != NULL); 

		// 配置增加项目
		pc->addItem("A"); 
		pc->addItem("B"); 
		pc->addItem("A");
		// 断言判断
		EXPECT_EQ(pc->getSize(), 2);  //相等
		EXPECT_STREQ(pc->getItem(0).c_str(), "A"); // 字符串断言判断
		EXPECT_STREQ(pc->getItem(1).c_str(), "B"); 
		EXPECT_STREQ(pc->getItem(10).c_str(), ""); 
		delete pc;
}
int main(int argc, char** argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}