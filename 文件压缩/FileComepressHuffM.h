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
	char _ch;					//��ǰ�ַ�
	size_t charCount;			//��ǰ�ַ����ֵĴ���
	std::string _strCode;		//�ַ��ı��룻
};

