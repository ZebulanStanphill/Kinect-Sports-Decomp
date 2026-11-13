// Havok ray cast through the aabb cache in the "TtRayCstCchSim" timer scope: the fn_83089608
// shape plus a cache argument stored in the cast input. The cast goes through a virtual call
// of the broadphase (slot 23); as a C vtable struct the argument stores schedule differently.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ProfTls_83089730 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_83089730;

typedef struct RayInput_83089730 {
    __vector4 from;         /* 0x00 */
    __vector4 to;           /* 0x10 */
    unsigned char enable;   /* 0x20 */
} RayInput_83089730;

typedef struct Cast_83089730 {
    __vector4 from;         /* 0x00 */
    int count;              /* 0x10 */
    __vector4 *to;          /* 0x14 */
    int stride;             /* 0x18 */
    const void *cache;      /* 0x1c */
} Cast_83089730;

typedef struct State_83089730 {
    int unk0;
    RayInput_83089730 *input;   /* 0x04 */
    void *body;                 /* 0x08 */
    void *collector;            /* 0x0c */
    char pad10[0x24];
    void *filter;               /* 0x34 */
} State_83089730;

struct Shape_83089730 {
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
    virtual void castRay(Cast_83089730 *cast, State_83089730 *state, int unk);
};

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);

extern "C" void fn_83089730(State_83089730 *self, Shape_83089730 *shape, RayInput_83089730 *input, char *owner,
                 const void *cache, void *collector)
{
    ProfTls_83089730 *t;
    void **p;
    Cast_83089730 cast;

    t = (ProfTls_83089730 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtRayCstCchSim";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    self->input = input;
    self->collector = collector;
    self->body = owner ? owner + 0x14 : 0;
    if (input->enable && owner)
        self->filter = owner + 0x10;
    else
        self->filter = 0;
    cast.from = input->from;
    cast.count = 1;
    cast.stride = 0x10;
    cast.to = &input->to;
    cast.cache = cache;
    shape->castRay(&cast, self, 0);

    t = (ProfTls_83089730 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
