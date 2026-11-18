// Havok ray cast group in the "TtRayCastGroup" timer scope: the AABB of all rays is handed to the
// shape to build a cache on the thread stack, then every ray is cast through fn_83088020 with that
// cache, each into its own collector (collectors are `collectorStride` bytes apart).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4
{
  public:
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vminfp(a.q, b.q);
    }

    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmaxfp(a.q, b.q);
    }

    __vector4 q;
};

class hkAabb
{
  public:
    hkVector4 m_min;
    hkVector4 m_max;
};

typedef struct ProfTls_83088150 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_83088150;

struct RayInput_83088150 {
    hkVector4 m_from; // 0x00
    hkVector4 m_to;   // 0x10
    char pad20[0x10];
};

struct Shape_83088150 {
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
extern "C" void fn_83088020(void *self, Shape_83088150 *shape, const RayInput_83088150 *input, char *owner,
                            char *cache, char *collector);

extern "C" void fn_83088150(void *self, Shape_83088150 *shape, const RayInput_83088150 *inputs, int count,
                            char *owner, char *collectors, int collectorStride)
{
    ProfTls_83088150 *t;
    void **p;
    hkAabb aabb;
    int size;
    char **stack;
    char *cache;
    int i;
    const RayInput_83088150 *input;

    t = (ProfTls_83088150 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtRayCastGroup";
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
        const RayInput_83088150 *in = inputs;
        char *collector = collectors;
        for (i = count - 1; i >= 0; i--) {
            fn_83088020(self, shape, in, owner, cache, collector);
            in++;
            collector += collectorStride;
        }
    }

    *fn_82CE5410() = cache;

    t = (ProfTls_83088150 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
