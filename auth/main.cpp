#include <Windows.h>
#include <iostream>
#include <string.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

std::string url = "http://127.0.0.1:3000";

int main() 
{
	std::cout << "client started" << std::endl;
	IStream* stream;
	auto result = URLOpenBlockingStreamA(0, url.c_str(), &stream, 0, 0);
	return 0;
}