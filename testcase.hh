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

