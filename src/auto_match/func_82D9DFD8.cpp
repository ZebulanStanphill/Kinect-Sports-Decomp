#include "havok/hkBase.h"
extern "C" void fn_82D9FE70(void *,void *);
class hkpConstraintData : public hkReferencedObject { public: hkUlong user; hkpConstraintData():user(0){} };
struct Atom { hkUint16 type; char pad[10]; Atom():type(1){} };
struct Params { int a,b,c,d; HK_FORCE_INLINE void init(){a=0;b=0;c=0;d=0;} HK_FORCE_INLINE void reserve(){b+=16;} };
class hkpGenericConstraintData : public hkpConstraintData { public:
 Atom atom; Params params; hkArray<int> a,b,c,d;
 hkpGenericConstraintData(); virtual ~hkpGenericConstraintData();
};
hkpGenericConstraintData::hkpGenericConstraintData(){params.init();params.reserve();fn_82D9FE70(&atom,this);}
