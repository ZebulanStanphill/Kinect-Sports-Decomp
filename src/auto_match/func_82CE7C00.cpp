#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T, unsigned N> class InplaceArray_82CE7C00 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE InplaceArray_82CE7C00() : hkArray<T>(m_storage, 0, N)
    {
    }

    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }

    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }

    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }

    T m_storage[N];
};

struct SingletonNode_82CE7C00 {
    int reserved[2];
    SingletonNode_82CE7C00 *next; /* 0x8 */
    hkReferencedObject **value;   /* 0xc */
};

extern "C" SingletonNode_82CE7C00 *lbl_8323B468;

extern "C" void fn_82CE7C00(void)
{
    InplaceArray_82CE7C00<SingletonNode_82CE7C00 *, 128> nodes;

    for (SingletonNode_82CE7C00 *node = lbl_8323B468; node != HK_NULL; node = node->next) {
        nodes.pushBack(node);
    }
    for (int i = nodes.getSize() - 1; i >= 0; --i) {
        hkReferencedObject *object = *nodes[i]->value;

        if (object != HK_NULL) {
            object->removeReferenceLockUnchecked();
            *nodes[i]->value = HK_NULL;
        }
    }
}
