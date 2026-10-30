#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Objs_82D44958 : public hkArrayBase<hkReferencedObject *> {
public:
    HK_FORCE_INLINE void push(hkReferencedObject *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(hkReferencedObject *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Owner_82D44958 {
    char pad[0x30];
    Objs_82D44958 objs;
};

extern "C" void fn_82D44958(Owner_82D44958 *self, hkReferencedObject *obj)
{
    obj->addReference();
    hkReferencedObject *v = obj;
    self->objs.push(v);
}
