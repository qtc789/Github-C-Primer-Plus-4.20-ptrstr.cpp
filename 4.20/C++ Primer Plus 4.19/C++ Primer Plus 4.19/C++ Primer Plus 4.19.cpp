// C++ Primer Plus 4.19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
#pragma warning (disable:4996)
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;//ps display garbage,may cause a crash 这个ps指针只是定义了但是没有初始化，你不知道他
    //具体是指向的哪个数值
    cout << animal << "   and  ";
    cout << bird << endl;
    cout << "enter a kind of animal; ";
    cin >> animal;
    // cin >> ps;
    // Too horrible a blunder to try; ps doesn't point to allocated space
    ps = animal;
    cout << ps << "!\n";
    cout << "before using strcpy();\n";
    cout << animal << "at  " << (int*)animal << endl;
    cout << ps << "at  " << (int*)ps << endl;

    ps = new char[strlen(animal)+1 ];
    strcpy(ps, animal);
    cout << "after using strcpy();\n";
    cout << animal << "at  " << (int*)animal << endl;
    cout << ps << "at  " << (int*)ps << endl;
    delete[] ps;
    return 0;

}


