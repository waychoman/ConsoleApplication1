// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


int main()
{
    std::string s = "Hello World!";
    std::string r = s;
    std::reverse(r.begin(), r.end());

    for (int i = 0; i < 100; ++i)
    {

        const std::string& out = (i % 2 == 0) ? s : r;
        std::cout << out << ' ' << i << std::endl
            ;
    }

    return 0;
}
/* auto forward = std::string("Hello World!");
auto  reverse = forward;

std::reverse(reverse.begin(), reverse.end());


*/