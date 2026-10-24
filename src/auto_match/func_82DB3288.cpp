// hkpKdTreeWorldManager::castRay (vtable slot 7; keeps its fn_ name): casts a ray through the
// world's kd-tree with an hkpKdTreeCollidableRaycaster built on the stack.
// The raycaster constructor tests the output pointer once per member (two if/else statements
// on the same condition): the compiler threads them into one branch and merges the last
// store of both arms, which puts the null arm after the return.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkKdTreeCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeCastCollector() {}
};

class hkpKdTreeCollidableRaycaster : public hkKdTreeCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpKdTreeCollidableRaycaster);

    hkpKdTreeCollidableRaycaster(const void *input, char *output, const void *filter)
    {
        m_filter = filter;
        m_input = input;
        m_numHits = 0;
        if (output) m_output14 = output + 0x14; else m_output14 = HK_NULL;
        if (output) m_output10 = output + 0x10; else m_output10 = HK_NULL;
    }

    const void *m_input;     // hkpWorldRayCastInput: m_from at +0, m_to at +0x10
    void *m_output14;        // pointers into the output, or null
    void *m_output10;
    const void *m_filter;
    int m_numHits;
};

extern "C" void fn_83084210(void *result, void *tree, const void *from, const void *to,
                            hkKdTreeCastCollector *collector);

struct hkpKdTreeWorldManager {
    void *m_vtable;
    char m_pad04[0xc];
    void *m_tree;             // +0x10
};

extern "C" void fn_82DB3288(hkpKdTreeWorldManager *self, const char *input, char *output,
                            const void *filter)
{
    hkpKdTreeCollidableRaycaster raycaster(input, output, filter);
    __declspec(align(16)) char result[16];
    fn_83084210(result, self->m_tree, input, input + 0x10, &raycaster);
}
