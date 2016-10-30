//载入头文件
#include <iostream>
//http://www.cplusplus.com/reference/iostream/

//使用命名空间
using namespace std;

//主函数
int main(void) {

	int i; // 整数型变量

	while (true) { //while循环
	//http://www.cplusplus.com/forum/beginner/76222/

		//生成92到99之间的整数
		i = rand() % 8 + 92;

		//是否可以整除
		if (i%2 == 0) {//else: 条件不符合的情况
		//http://www.cplusplus.com/doc/tutorial/control/
			//cout 是 标准输出
			//http://www.cplusplus.com/reference/iostream/cout/
			cout << "P: " << i << "\n";
		} else {
			cout << "S: " << i << "\n";
		}

	}

	return 0;

}
