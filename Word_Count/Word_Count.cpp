#include <pch.h>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<iterator>
#include<cctype>
#include<unordered_map>
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define N 0
using namespace std;


	bool is_char(char str)  //判断是否是字符
	{
		if (isalpha(str) || (str = 32) || (str = 9) || (str = 10))
			return true;
		else
			return false;
	}
	
	int count_charandline(fstream &outfile)  //统计函数
	{
		int char_num = 0;
		int line_num = 0;
		char str[100000];
		while (outfile.getline(str, 100000))
		{
			int tmp = 0;

			for (int i = 0; i < strlen(str); i++)
			{
				
				if (is_char(str[i]))  //tmp judge blank line
				{
					char_num++;
					tmp++;
				}   
			}
			if (tmp != 0)
				line_num++;
			tmp = 0;
			
		}
		cout << "characters: " << char_num << endl << "line: " << line_num << endl;
		return 0;
	}

	int count_word(int state, char input, int  count)
	{
		int flag = 3;
		cout << flag ;
		switch (state)
		{
		case A:
			if ((input=' ')) return A;
			if (isalpha(input)) return C;
			if ((input>='0')&& (input<='9')) return B;

		case B:
			if ((input = ' ')) return A;
			else return B;

		case C:
			if ((input >= '0') && (input <= '9')) return B;
			if (isalpha(input)) return D;
			else return A;

		case D:
			if ((input >= '0') && (input <= '9')) return B;
			if (isalpha(input)) return E;
			else return A;

		case E:
			if ((input >= '0') && (input <= '9')) return B;
			if (isalpha(input)) return F;
			else return A;

		case F:
			if (isalnum(input)) return F;
			else { count++; return A; }
		}
		
	}
	
int main()
{
	char filename[100000],c;
	int state = A;
	int count = 0;
	//int line_num, char_num, word_num;


	cout << "please input your filename:" << endl; //输入要统计的文本的绝对路径
	cin.getline(filename, 100000);
	//fstream outfile(filename, ios::in);
	//count_charandline(outfile);

	std::fstream file;
	file.open(filename, std::ios::in);
	while (file.get(c))
	{
		c = tolower(c);
		cout << c;
		state = count_word(state, c, count);
	}
	cout << endl;
	if (state == F)
	{
		count++;
	}
	
	cout<<"word:"<<count<<endl;

	//outfile.close();

	return 0;

}
