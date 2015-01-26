#include "testcase.pb.h"
class Config
{
public:
	Config()
	{
		ConfigInfo * storable = new ConfigInfo;
		storable->bundle(); // segfault here
	}
};

namespace ConfigHelper
{
	Config defaultConfig; // causes segfault
}

int main( int argc, char *argv[] )
{
	Config config; // did not causes segfault
	return EXIT_SUCCESS;
}
