#include "config.hh"

namespace ConfigHelper {
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
  ConfigInfo * configInfo = new ConfigInfo;
  storable = configInfo;
  reset_storable();
}

void Config::reset_storable()
{
  storable->bundle();
}
