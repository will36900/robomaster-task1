#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    cout << "Hello ROS2 C++ Node!" << endl;
    cout <<"Arguments passed to the program: " << argc << endl;
    cout << "Name of the program: " << argv[0] << endl;
    return 0;
}