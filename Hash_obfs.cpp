/*
    原理就是向文件末尾追加一个\0
    由此可以改变文件校验值
    主要用来应付百度云的资源封杀
    当然能加密还是加密一下比较好ww
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    string fname = argv[1];
    fname.insert(fname.find_last_of("\\")+1, "obfs_");
    ifstream f_read(argv[1], ios::binary);
    ofstream f_wri(fname, ios::binary);
    f_wri << f_read.rdbuf();
    f_wri << '\0';
    f_read.close();
    f_wri.close();
    return 0;
}
