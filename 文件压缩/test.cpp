#define _CRT_SECURE_NO_WARNINGS
#include"FileComepressHuffM.h"


void FileComepressHuffM::CompressFile(const string& strFilePath){
	FILE* fIn = fopen(strFilePath.c_str(), "r");
	if (nullptr == fIn){
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	char* pReadBuff = new char[1024];
	vector<char_info> char_info(256);
	while (1){
		size_t rdSize = fread(pReadBuff, 1, 1024, fIn);//����ֵrdΪʵ�ʶ������ֽ���
		if (rdSize == 0){
			break;
		}
		for (size_t i = 0; i < rdSize; ++i){
			char_info[pReadBuff[i]].charCount++;
		}
	}

	
}