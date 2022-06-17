# Exercise1 - 函式

### 一. 常數函式
- 可以不用`return`

```Cpp
/// <summary>
/// (常數函式)印出一行Hi
/// </summary>
/// <returns></returns>
void PrintOutHi() {
	std::cout << "Hi!!!" << std::endl;
}
```

### 二. 字串函式
- 需要 `return` 字串

```Cpp
/// <summary>
/// (字串函式)回傳 Hi everyone
/// </summary>
/// <returns></returns>
std::string SayHi() {
	return "Hi everyone";
}
```

### 三. 整數函式
- 需要 `return` 整數

```Cpp
/// <summary>
/// (整數函式)取得1
/// </summary>
/// <returns></returns>
int GetOne() {
	return 1;
}
```

## 在主程式呼叫
```Cpp
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
```

## 前置定義
- 如果函式寫在主程式之後實現，需要做前置定義
```Cpp

//前置定義函式
int GetOne();

int main()
{
	std::cout << "Hello World!" << std::endl;
	//呼叫整數函式
	std::cout << "1 + 1 = " << 1 + GetOne() << std::endl;
}

/// <summary>
/// (整數函式)取得1
/// </summary>
/// <returns></returns>
int GetOne() {
	return 1;
}
```

[回首頁](https://github.com/LINDuke-Lin/Cpp-Exercise)