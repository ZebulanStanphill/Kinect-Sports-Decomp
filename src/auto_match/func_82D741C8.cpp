#include "havok/hkBase.h"
#include "havok/hkStatisticsCollector.h"
extern "C" void fn_82D71668(void *, void *, hkStatisticsCollector *);
extern "C" void fn_82D741C8(void *, void *a, void *b, hkStatisticsCollector *collector)
{
    collector->pushDir("hkListAgent3");
    fn_82D71668(a, b, collector);
    collector->popDir();
}
