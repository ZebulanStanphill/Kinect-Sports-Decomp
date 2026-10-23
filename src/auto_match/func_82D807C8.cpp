#include "havok/hkBase.h"
class Collector {
public:
 virtual void v0(); virtual void v1(); virtual void v2();
 virtual void v3(); virtual void v4(); virtual void v5();
 virtual void begin(const char *); virtual void end();
};
extern "C" void fn_82D807C8(void *, Collector *c) {
 c->begin("hkpContactMgrFactory"); c->end();
}
