#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int maxNum = 0;
    // 遍历当前目录所有文件/文件夹
    WIN32_FIND_DATA findData;
    HANDLE hFind = FindFirstFile("*", &findData);

    if (hFind != INVALID_HANDLE_VALUE)
    {
        do
        {
            string name = findData.cFileName;
            // 只处理文件夹，跳过 . 和 ..
            if ((findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                && name != "." && name != "..")
            {
                // 判断文件夹名是否全为数字
                bool isDigitFolder = true;
                for (char ch : name)
                {
                    if (!isdigit(ch))
                    {
                        isDigitFolder = false;
                        break;
                    }
                }
                if (isDigitFolder)
                {
                    int num = stoi(name);
                    if (num > maxNum)
                        maxNum = num;
                }
            }

        } while (FindNextFile(hFind, &findData));
        FindClose(hFind);
    }

    int nextNum = maxNum + 1;
    string folderName = to_string(nextNum);

    // 创建文件夹
    CreateDirectory(folderName.c_str(), nullptr);

    // 文件完整路径: "11/test11.cpp"
    string filePath = folderName + "\\test" + to_string(nextNum) + ".cpp";

    // C++基础模板
    string templateCode = R"(#include <iostream>
using namespace std;

int main()
{
    
    return 0;
})";

    ofstream out(filePath);
    out << templateCode;
    out.close();

    cout << "✅ 创建文件夹：" << folderName << endl;
    cout << "✅ 创建文件：" << filePath << endl;
    system("pause");
    return 0;
}