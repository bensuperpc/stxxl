/***************************************************************************
 *  include/stxxl/bits/common/log.h
 *
 *  Part of the STXXL. See http://stxxl.org
 *
 *  Copyright (C) 2004-2005 Roman Dementiev <dementiev@ira.uka.de>
 *  Copyright (C) 2009 Andreas Beckmann <beckmann@cs.uni-frankfurt.de>
 *
 *  Distributed under the Boost Software License, Version 1.0.
 *  (See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt)
 **************************************************************************/

#ifndef STXXL_COMMON_LOG_HEADER
#define STXXL_COMMON_LOG_HEADER

#include <foxxll/singleton.hpp>

#include <fstream>

namespace stxxl {

class logger : public foxxll::singleton<logger>
{
    friend class singleton<logger>;

    std::ofstream log_stream_;
    std::ofstream errlog_stream_;
    std::ofstream* waitlog_stream_;

    logger();
    ~logger();

public:
    inline std::ofstream & log_stream()
    {
        return log_stream_;
    }

    inline std::ofstream & errlog_stream()
    {
        return errlog_stream_;
    }

    inline std::ofstream * waitlog_stream()
    {
        return waitlog_stream_;
    }
};

} // namespace stxxl

#endif // !STXXL_COMMON_LOG_HEADER
