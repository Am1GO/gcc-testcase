#include "testcase.hh"
namespace ConfigHelper
{
  Config defaultConfig;
}

Config::~Config()
{
  // prevent memleak
  if ( want_cleanup )
    delete storable;
}

Config::Config():
  want_cleanup( true )
{
  storable = new ConfigInfo;
  storable->bundle(); // segfault here
}

int main( int argc, char *argv[] )
{
  return EXIT_SUCCESS;
}
