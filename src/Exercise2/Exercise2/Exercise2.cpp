// Exercise2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>

/// <summary>
/// (常數函式)印出一行Hi
/// </summary>
/// <returns></returns>
void PrintOutHi() {
	std::cout << "Hi!!!" << std::endl;
}
/// <summary>
/// (字串函式)回傳 Hi everyone
/// </summary>
/// <returns></returns>
std::string SayHi() {
	return "Hi everyone";
}
/// <summary>
/// (整數函式)取得1
/// </summary>
/// <returns></returns>
int GetOne() {
	return 1;
}

int main()
{
	std::cout << "Hello World!" << std::endl;
	//呼叫函式
	PrintOutHi();
	//呼叫字串函式
	std::cout << SayHi() << std::endl;
	//呼叫整數函式
	std::cout << "1 + 1 = " << 1 + GetOne() << std::endl;
}

