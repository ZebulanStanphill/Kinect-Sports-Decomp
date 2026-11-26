#include "havok/hkBase.h"
#include "havok/hkStatisticsCollector.h"
extern "C" void fn_82D71668(void *, void *, hkStatisticsCollector *);
extern "C" void fn_82D53540(void *, void *a, void *b, hkStatisticsCollector *collector)
{
    collector->pushDir("hkBvTreeAgent3");
    fn_82D71668(a, b, collector);
    collector->popDir();
}
