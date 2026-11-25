#include "havok/hkVector4.h"

class hkAabb
{
  public:
    hkVector4 m_min;
    hkVector4 m_max;
};

typedef struct ProfTls_83089850 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_83089850;

struct RayInput_83089850 {
    hkVector4 m_from; // 0x00
    hkVector4 m_to;   // 0x10
    char pad20[0x10];
};

struct RayOutput_83089850 {
    char data[0x60];
};

struct Shape_83089850 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual int getAabbCacheSize();
    virtual void v25();
    virtual void calcAabbCache(const hkAabb &aabb, char *cache);
};

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);
extern "C" char **fn_82CE5410(void);
extern "C" void fn_83089730(void *self, Shape_83089850 *shape, const RayInput_83089850 *input, char *owner,
                            const char *cache, RayOutput_83089850 *output);

extern "C" void fn_83089850(void *self, Shape_83089850 *shape, const RayInput_83089850 *inputs, int count,
                            char *owner, RayOutput_83089850 *outputs)
{
    ProfTls_83089850 *t;
    void **p;
    hkAabb aabb;
    int size;
    char **stack;
    char *cache;
    int i;
    const RayInput_83089850 *input;

    t = (ProfTls_83089850 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtRayCstGrpSim";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    aabb.m_min.setMin4(inputs[0].m_from, inputs[0].m_to);
    aabb.m_max.setMax4(inputs[0].m_from, inputs[0].m_to);
    input = inputs + 1;
    for (i = count - 2; i >= 0; i--) {
        aabb.m_min.setMin4(aabb.m_min, input->m_to);
        aabb.m_max.setMax4(aabb.m_max, input->m_to);
        aabb.m_min.setMin4(aabb.m_min, input->m_from);
        aabb.m_max.setMax4(aabb.m_max, input->m_from);
        input++;
    }

    size = shape->getAabbCacheSize();
    stack = fn_82CE5410();
    cache = *stack;
    *stack = cache + ((size + 0x7f) & ~0x7f);
    shape->calcAabbCache(aabb, cache);

    {
        const RayInput_83089850 *in = inputs;
        RayOutput_83089850 *out = outputs;
        for (i = count - 1; i >= 0; i--) {
            fn_83089730(self, shape, in, owner, cache, out);
            in++;
            out++;
        }
    }

    *fn_82CE5410() = cache;

    t = (ProfTls_83089850 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
