#include "CentralParam.h"

namespace CentralControl
{
    void CentralParam::Init()
    {
        bool initB = false;
        byte initT = 0x00;

        B1 = B2 = B3 = initB;
        T1 = T2 = T3 = T4 = T5 = T6 = initT;

        TA1 = std::list<byte>();
        S1 = S2 = S3 = std::string();

    }

    CentralParam::CentralParam()
	{
        Init();
	}

	CentralParam::CentralParam(std::string s1)
	{
        Init();
		S1 = s1;
	}

	CentralParam::CentralParam(bool b1)
	{
        Init();
		B1 = b1;
	}

    CentralParam::CentralParam(byte t1)
    {
        Init();
        T1 = t1;
    }
    CentralParam::CentralParam(byte t1, bool b1)
    {
        Init();

        B1 = b1;
        T1 = t1;
    }

    CentralParam::CentralParam(byte t1, byte t2)
    {
        Init();

        T1 = t1;
        T2 = t2;
    }

    CentralParam::CentralParam(byte t1, byte t2, bool b1)
    {
        Init();

        T1 = t1;
        T2 = t2;
        B1 = b1;
    }

    CentralParam::CentralParam(std::list<byte> ta1)
    {
        Init();

        TA1 = ta1;
    }

    CentralParam::CentralParam(byte t1, std::list<byte> ta1)
    {
        Init();

        T1 = t1;
        TA1 = ta1;
    }

    CentralParam::CentralParam(byte t1, byte t2, byte t3)
    {
        Init();

        T1 = t1;
        T2 = t2;
        T3 = t3;
    }

    CentralParam::CentralParam(byte t1, byte t2, byte t3, byte t4, byte t5, byte t6)
    {
        Init();

        T1 = t1;
        T2 = t2;
        T3 = t3;
        T4 = t4;
        T5 = t5;
        T6 = t6;
    }

    CentralParam::CentralParam(std::string s1, std::string s2)
    {
        Init();

        S1 = s1;
        S2 = s2;
    }
}