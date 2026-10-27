
//成员函数放入包装器
// 因此下面两个写法效果相同：
// std::function<int(int, int)> operation = add;
// std::function<int(int, int)> operation = &add;
// 成员函数必须依附于一个对象。例如
// 使用 std::bind 绑定成员函数：
#include <functional>
#include <iostream>

class Calculator
{
public:
    int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Calculator calculator;

    auto operation = std::bind(
        &Calculator::multiply,
        &calculator,
        std::placeholders::_1,
        std::placeholders::_2
    );

    std::cout << operation(3, 5) << std::endl;

    return 0;
}