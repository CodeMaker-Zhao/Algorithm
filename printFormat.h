#ifndef PRINTFORMAT
#define PRINTFORMAT
#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
class Student {
public:
	std::string name;
	int score1=0, score2=0;
	Student() = default;
	Student(std::string s, int i1, int i2) :name(s), score1(i1), score2(i2) {};
	double s1Divs2() {
		return (double)score1 / score2;
	}
};
void printFormat() {
	std::string name;
	int i1, i2;
	std::vector<Student> vs;
	while (std::cin >> name >> i1 >> i2 && name!="quit") {
		//多个参数的构造函数无法执行隐式转换
		vs.push_back(Student(name,i1,i2));
	}
	for (auto& c : vs) {
		std::cout << c.name << " " << c.score1 << " " << c.score2 << " " << std::setprecision(3) << c.s1Divs2()<<std::endl;
	}
}
#endif // !PRINTFORMAT

#pragma once
