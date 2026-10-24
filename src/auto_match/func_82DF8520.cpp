#include "havok/hkBase.h"
class hkEntitySelectorAll {public:virtual hkBool isEntityOk(const void*) const;};
extern "C" void fn_82DF87A0(void*,void*,void*,const hkEntitySelectorAll*);
extern "C" void fn_82DF8520(void *a,void *b,void *c){hkEntitySelectorAll selector;fn_82DF87A0(a,b,c,&selector);}
