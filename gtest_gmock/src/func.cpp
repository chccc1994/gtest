/*
 * @Description: 
 * @Version: 0.0.1
 * @Author: shengbw
 * @Date: 2023-02-13 20:20:53
 * @LastEditors: shengbw
 * @LastEditTime: 2023-02-14 13:43:44
 * @FilePath: \gtest_gmock\src\func.cpp
 */
#include "func.h"

int fac(int nInput)  
{  
	if(nInput < 0) { 
		return -1; 
	}   

	int nRev = 1;  
	for(int i = 1; i <= nInput; ++i){  
		nRev *= i;  
	}   
	return nRev;  
}

/** 
** @brief Add an item to configuration store. Duplicate item will be ignored 
** @param str item to be stored 
** @return the index of added configuration item 
**/ 
int Config::addItem(std::string str){
	std::vector<std::string>::const_iterator vi=std::find(vItems.begin(), vItems.end(), str); 
	if(vi !=vItems.end()){
		return vi-vItems.begin();
	}
	vItems.push_back(str);
	return vItems.size()-1;
}
/** 
** @brief Return the configure item at specified index. 
** If the index is out of range, "" will be returned 
** @param index the index of item 
** @return the item at specified index 
**/ 
std::string Config::getItem(int index){
	if(index>=vItems.size()){
		return "";
	}else{
		return vItems.at(index);
	}
}
/**
** @brief 返回vItems大小
** 
** @return int 
**/
int Config::getSize(){
	return vItems.size();
}

