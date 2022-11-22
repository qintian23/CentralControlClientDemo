#ifndef _CENTRALPARAM_H_
#define _CENTRALPARAM_H_

#include <string>
#include <list>

#include "CELL.h"

namespace CentralControl
{
    /// <summary>
    /// 中控传递参数类
    /// </summary>
    class CentralParam
    {
    private:
        void Init();

    public:
        bool B1;
        bool B2;
        bool B3;

        byte T1;
        byte T2;
        byte T3;
        byte T4;
        byte T5;
        byte T6;

        std::list<byte> TA1;

        std::string S1;
        std::string S2;
        std::string S3;

        CentralParam();

        CentralParam(std::string s1);

        CentralParam(bool b1);

        CentralParam(byte t1);

        CentralParam(byte t1, bool b1);

        CentralParam(byte t1, byte t2);

        CentralParam(byte t1, byte t2, bool b1);

        CentralParam(std::list<byte> ta1);

        CentralParam(byte t1, std::list<byte> ta1);

        CentralParam(byte t1, byte t2, byte t3);

        CentralParam(byte t1, byte t2, byte t3, byte t4, byte t5, byte t6);

        CentralParam(std::string s1, std::string s2);
    };
}


#endif // !_CENTRALPARAM_H_
