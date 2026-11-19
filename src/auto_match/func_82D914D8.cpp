#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);
extern "C" void fn_82DAF6D0(void *, void *);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}

class Output_82D914D8 : public hkArrayBase<void *>
{
  public:
    HK_FORCE_INLINE void push(void *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity())
            fn_82CE63B0(&alloc, this, sizeof(void *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Item_82D914D8;
struct Inner_82D914D8;

struct Entity_82D914D8 {
    char pad[0xcc];
    Inner_82D914D8 *inner; /* 0xcc */
    char pad2[0x18];
    unsigned char type; /* 0xe8 */
    char pad3[0x11f];
    Item_82D914D8 **items; /* 0x208 */
    unsigned short count;  /* 0x20c */
};

struct Item_82D914D8 : public hkReferencedObject {
    virtual void slot0c();
    virtual void getEntities(hkArray<Entity_82D914D8 *> &entities); /* 0x10 */
};

struct Inner_82D914D8 {
    char pad[0x22];
    unsigned short slot; /* 0x22 */
    char pad2;
    unsigned char flags; /* 0x25 */
};

struct Owner_82D914D8 {
    char pad[0x40];
    Output_82D914D8 list; /* 0x40 */
};

extern "C" void fn_82D914D8(Owner_82D914D8 *self, Entity_82D914D8 *src, Output_82D914D8 *out)
{
    Inner_82D914D8 *inner = src->inner;
    hkInplaceArray<Entity_82D914D8 *, 16> entities;

    for (int i = 0; i < src->count; i++) {
        Item_82D914D8 *item = src->items[i];
        item->getEntities(entities);
        hkBool all = true;
        for (int j = 0; j < entities.getSize(); j++) {
            Entity_82D914D8 *entity = entities[j];
            if (entity->type != 5 && entity != src) {
                all = false;
                break;
            }
        }
        if (all) {
            out->push(item);
            item->addReference();
            fn_82DAF6D0(inner, item);
            inner->flags = (inner->flags & 0xf3) | 4;
            if (inner->slot == 0xffff) {
                inner->slot = (unsigned short)self->list.m_size;
                self->list.push(inner);
            }
        }
    }
}
