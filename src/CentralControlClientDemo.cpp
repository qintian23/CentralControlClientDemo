// CentralControlClientDemo.cpp: 定义应用程序的入口点。
//

#include "../include/CentralControlClientDemo.h"

using namespace std;
using namespace hprose;
using namespace CentralControl;

CentralControl::CentralControlAddress address = CentralControl::CentralControlAddress();
string url = address.GetHostALink();
hprose::rpc::asio::HttpClient client(url);

void hello1() {
	std::vector<std::string> args = std::vector<std::string>({ "asynchronous world 2" });
	cout << client.invoke<std::string>("hello", args) << endl;

	//CELLLog::Info("%s", client.invoke<std::string>("hello", args));
}

int main(int argc, char* argv[])
{
	CELLLog::Instance().setLogPath("CentralControlClient.txt", "w");
	//cout << "hello1 start ............" << endl;
	CELLLog::Info("hello1 start ............");

	cout << client.getUri() << endl;

	//hello1();
	//CentralControl::IMyClientB proxy;	
	//cout << url << endl;
}