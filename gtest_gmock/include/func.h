/*
 * @Description: 测试单元：GoogleTest库测试
 * @Version: 0.0.1
 * @Author: shengbw
 * @Date: 2023-02-13 20:20:39
 * @LastEditors: shengbw
 * @LastEditTime: 2023-02-14 13:41:41
 * @FilePath: \gtest_gmock\include\func.h
 */
#ifndef FUNC_C
#define FUNC_C
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

#ifdef __cplusplus
extern "C"
{
#endif

	int fac(int nInput);

#ifdef __cplusplus
}
#endif

class Config{
	private:
		std::vector<std::string> vItems;
	public:
		int addItem(std::string str);
		std::string getItem(int index);
		int getSize();
};

#endif // FUNC_C
