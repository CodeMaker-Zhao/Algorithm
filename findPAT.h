#ifndef FINDPAT
#define FINDPAT
#include<string>
#include<vector>
int findPat(std::string s) {
/*array��ʼ��ʱ��Ĭ�Ϲ��캯�����ȷ��������Ԫ�ؽ���Ĭ�ϳ�ʼ���������������һ������
�˳�ʼ����ʣ��Ļ����ֵ��ʼ��*/
	size_t size = s.size();
	std::vector<int> leftNumP(size, 0);
	std::vector<int> rightNumT(size, 0);
	int times = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (i > 0) {
			leftNumP[i] = leftNumP[i - 1];
		}
		if (s[i] == 'P') {
			leftNumP[i]++;
		}
	}
	for (int i = size-1; i > 0; i--)
	{
		if (i < size - 1) {
			rightNumT[i] = rightNumT[i + 1];
		}
		if (s[i] == 'T') {
			rightNumT[i]++;
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		if (s[i]=='A'){
			times += leftNumP[i] * rightNumT[i];
		}
	}
	return times;
}
#endif // !FINDPAT

#pragma once
