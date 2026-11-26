#include "havok/hkBase.h"
#include "havok/hkVector4.h"
struct hkAabb { hkVector4 lo,hi; };
class hkpMoppModifier {public: virtual ~hkpMoppModifier(){};};
class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public: HK_FORCE_INLINE hkpRemoveTerminalsMoppModifier():count(0) {}
 hkArray<unsigned int> keys; unsigned int count;
};
extern "C" {
extern float lbl_82014898, lbl_82014894;
void fn_82DCDF98(void*, const hkAabb*, hkpMoppModifier*);
}
class hkpRemoveTerminalsMoppModifier2 : public hkpRemoveTerminalsMoppModifier {
public:
 HK_FORCE_INLINE hkpRemoveTerminalsMoppModifier2(void *code, unsigned int *a,const hkAabb &box) {

   array=a; fn_82DCDF98(code,&box,this); array=0;
 }
 unsigned int *array;
};
extern "C" hkpRemoveTerminalsMoppModifier2 *fn_82D4D618(hkpRemoveTerminalsMoppModifier2 *self,void *code,unsigned int *a) { hkAabb box; box.hi.setAll(lbl_82014898);box.lo.setAll(lbl_82014894); self->hkpRemoveTerminalsMoppModifier2::hkpRemoveTerminalsMoppModifier2(code,a,box);return self; }
