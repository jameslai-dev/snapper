
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE sysconfig_crlf

#include <boost/test/unit_test.hpp>

#include <snapper/AsciiFile.h>

using namespace snapper;


BOOST_AUTO_TEST_CASE(sysconfig_crlf)
{
    SysconfigFile s("sysconfig-crlf.txt");

    string value;
    BOOST_REQUIRE(s.get_value("KEY", value));
    BOOST_CHECK_EQUAL(value, "value");
}
