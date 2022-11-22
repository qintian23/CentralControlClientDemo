#include "CentralControlAddress.h"
#include "cell.h"
#include <sstream>

namespace CentralControl
{
	CentralControlAddress::CentralControlAddress() : _ip(Ip), _portA(PortA), _portB(PortB)
	{
		SetLinkA();
		SetLinkB();
	}

	CentralControlAddress::CentralControlAddress(std::string &ip) : _portA(PortA), _portB(PortB)
	{
		SetIp(ip);
		SetLinkA();
		SetLinkB();
	}

	CentralControlAddress::CentralControlAddress(std::string &ip, int &portA, int &portB)
	{
		SetIp(ip);
		SetPortA(portA);
		SetPortB(portB);
		SetLinkA();
		SetLinkB();
	}

	CentralControlAddress::~CentralControlAddress(){}

	const std::string &CentralControlAddress::GetIp() const
	{
		return _ip;
	}

	const int &CentralControlAddress::GetPortA() const
	{
		return _portA;
	}

	const int &CentralControlAddress::GetPortB() const
	{
		return _portB;
	}

	const std::string &CentralControlAddress::GetHostALink() const
	{
		return _linkA;
	}

	const std::string &CentralControlAddress::GetHostBLink() const
	{
		return _linkB;
	}

	void CentralControlAddress::SetIp(const std::string& ip)
	{
		this->_ip = ip;
	}

	void CentralControlAddress::SetPortA(const int& port)
	{
		this->_portA = port;
	}

	void CentralControlAddress::SetPortB(const int& port)
	{
		this->_portB = port;
	}

	void CentralControlAddress::SetLinkA()
	{
		std::ostringstream stream;
		stream << "http://" << _ip << ":" << _portA << "/";
		_linkA = stream.str();
	}

	void CentralControlAddress::SetLinkB()
	{
		std::ostringstream stream;
		stream << "http://" << _ip << ":" << _portB << "/";
		_linkB = stream.str();
	}
}
