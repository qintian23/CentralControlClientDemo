/**********************************************************\
|                                                          |
|                          hprose                          |
|                                                          |
| Official WebSite: http://www.hprose.com/                 |
|                   http://www.hprose.org/                 |
|                                                          |
\**********************************************************/

/**********************************************************\
 *                                                        *
 * hprose/http/Transport.h                                *
 *                                                        *
 * hprose http transport for cpp.                         *
 *                                                        *
 * LastModified: Nov 28, 2017                             *
 * Author: Chen fei <cf@hprose.com>                       *
 *                                                        *
\**********************************************************/

#pragma once

#include <hprose/http/Request.h>
#include <hprose/http/Response.h>

namespace hprose {
namespace http {

class Transport {
public:
    Transport()
        : keepAlive(true), compression(false) {
    }

    virtual Response sendRequest(const Request &req, time_t deadline) = 0;

    bool keepAlive;

    bool compression;
};

}
} // hprose::http
