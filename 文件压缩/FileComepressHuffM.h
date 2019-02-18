#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class FileComepressHuffM{
public:
	FileComepressHuffM();
	void CompressFile(const string& strFilePath);
};

struct char_info{
	char _ch;					//当前字符
	size_t charCount;			//当前字符出现的次数
	std::string _strCode;		//字符的编码；
};

