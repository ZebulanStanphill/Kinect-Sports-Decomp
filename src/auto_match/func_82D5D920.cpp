#include "havok/hkBase.h"
class hkStatisticsCollector {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void pushDir(const char *name);
    virtual void popDir();
};
extern "C" void fn_82D71668(void *, void *, hkStatisticsCollector *);
extern "C" void fn_82D5D920(void *, void *a, void *b, hkStatisticsCollector *collector)
{
    collector->pushDir("hkpCollectionCollectionAgent3");
    fn_82D71668(a, b, collector);
    collector->popDir();
}
