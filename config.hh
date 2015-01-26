#ifndef CONFIG_HH_INCLUDED
#define CONFIG_HH_INCLUDED

#include "testcase.pb.h"

class Config
{
public:
  Config();
  ~Config();

  void reset_storable();

  ConfigInfo * storable;
private:
  bool want_cleanup;
};

#endif
