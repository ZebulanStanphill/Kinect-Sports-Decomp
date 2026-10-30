// Scalar deleting destructor of a class derived from hkpFirstPersonGun that owns an hkArray at +0x20
// (Cls_82DF16E0). The derived destructor is inlined: the array is freed, then the out-of-line
// ??1hkpFirstPersonGun@@UAA@XZ runs, then the class allocator's delete when flags & 1.
#include "havok/hkBase.h"
#include "havok/hkArray.h"

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpFirstPersonGun();
    char m_firstPersonGun[0x18];
};

class __declspec(novtable) Cls_82DF16E0 : public hkpFirstPersonGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual __forceinline ~Cls_82DF16E0() {}
    hkArray<void *> m_arr;
};

extern "C" Cls_82DF16E0 *fn_82DF16E0(Cls_82DF16E0 *self, unsigned int flags)
{
    self->Cls_82DF16E0::~Cls_82DF16E0();
    if (flags & 1)
        Cls_82DF16E0::operator delete(self);
    return self;
}
