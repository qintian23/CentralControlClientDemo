#pragma once

#include <string>

namespace CentralControl
{
	const std::string Ip = "127.0.0.1";
	const int PortA = 8413;
	const int PortB = 8513;

	class CentralControlAddress
	{
	private:
		std::string _ip;
		int _portA;
		int _portB;

		std::string _linkA;
		std::string _linkB;

		void SetLinkA();
		void SetLinkB();

	public:
		CentralControlAddress();
		CentralControlAddress(std::string &ip);
		CentralControlAddress(std::string &ip, int &portA, int &portB);
		virtual ~CentralControlAddress();

		const std::string &GetIp() const;
		const int &GetPortA() const;
		const int &GetPortB() const;

		/// <summary>
		/// 获取服务端A的链接地址
		/// </summary>
		/// <returns></returns>
		const std::string &GetHostALink() const;

		/// <summary>
		/// 获取客户端B的链接地址
		/// </summary>
		/// <returns></returns>
		const std::string &GetHostBLink() const;

		void SetIp(const std::string& str);
		void SetPortA(const int& port);
		void SetPortB(const int& port);
	};
}