// Havok: adds a reference to an object, appends it to the hkArray at +0x20, then calls
// fn_82D8BCD8 on it with 100 times the w component of its vector at +0x1a0.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" void __stvewx(__vector4, void *, int);

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Object_82DF1278 : public hkReferencedObject {
public:
    HK_FORCE_INLINE float getW() const
    {
        float w;
        __stvewx(__vspltw(m_vector, 3), &w, 0);
        return w;
    }

    char pad08[0x198];
    __vector4 m_vector;      // 0x1a0
};

class Objs_82DF1278 : public hkArrayBase<Object_82DF1278 *> {
public:
    HK_FORCE_INLINE void push(Object_82DF1278 *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(Object_82DF1278 *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Owner_82DF1278 {
    char pad[0x20];
    Objs_82DF1278 objs;
};

extern "C" void fn_82D8BCD8(Object_82DF1278 *obj, float value);

extern "C" void fn_82DF1278(Owner_82DF1278 *self, Object_82DF1278 *obj)
{
    obj->addReference();
    Object_82DF1278 *v = obj;
    self->objs.push(v);
    fn_82D8BCD8(obj, obj->getW() * 100.0f);
}
