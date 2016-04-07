#ifndef _UTIL_H_
#define _UTIL_H_
#include <string>
#include <vector>

std::vector<std::string> readFastaFile(const char *path);

void writeFastaFile(const char *path, std::vector<std::string> strs);

/**
 * 解析main函数的参数，设置全局变量
 * 返回argv中不是选项的下标，即input和ouput的路径
 */
int parseOptions(int argc, char* argv[]);

/**
 * 显示帮助信息
 */
void displayUsage();

#endif
