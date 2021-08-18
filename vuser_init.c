#include "web_api.h"
#include "lrw_custom_body.h"


vuser_init()
{

web_cache_cleanup();
web_cleanup_cookies();

	return 0;
}
