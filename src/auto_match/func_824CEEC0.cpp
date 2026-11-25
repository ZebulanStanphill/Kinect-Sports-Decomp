extern "C" long _InterlockedDecrement(long volatile *addend);

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern "C" __vector4 __VMXGetReg(int n);

struct Rep_824CEEC0;

struct RepVt_824CEEC0 {
    void (*destroy)(Rep_824CEEC0 *rep);
    void (*deleteThis)(Rep_824CEEC0 *rep);
};

struct Rep_824CEEC0 {
    RepVt_824CEEC0 *vt; /* 0x0 */
    long uses;          /* 0x4 */
    long weaks;         /* 0x8 */
};

struct Ptr_824CEEC0 {
    void *px;          /* 0x0 */
    Rep_824CEEC0 *rep; /* 0x4 */
};

struct Vec3_824CEEC0 {
    float x;
    float y;
    float z;
};

struct Node_824CEEC0 {
    char pad0[0x10];
    float angle;  /* 0x10 */
    float weight; /* 0x14 */
};

struct Desc_824CEEC0 {
    char pad0[0x30];
    unsigned int name; /* 0x30 */
};

struct Actor_824CEEC0 {
    Actor_824CEEC0();
    virtual void Unused();

    char pad4[0x1c];
    Node_824CEEC0 *node; /* 0x020 */
    char pad24[0xbc];
};

struct __declspec(novtable) Body_824CEEC0 : Actor_824CEEC0 {
    Body_824CEEC0() : dirty(1)
    {
    }

    unsigned char dirty; /* 0x0e0 */
    char pade1[0xf];
};

struct Listener_824CEEC0 {
    Listener_824CEEC0() : first(0), second(0)
    {
    }

    virtual void Unused();

    int first;  /* 0x04 */
    int second; /* 0x08 */
};

struct Obj_824CEEC0 : Body_824CEEC0, Listener_824CEEC0 {
    Obj_824CEEC0(Desc_824CEEC0 *desc);
    virtual void Unused();

    void *result;        /* 0x0fc */
    int count;           /* 0x100 */
    __vector4 offset;    /* 0x110 */
    __vector4 velocity;  /* 0x120 */
    __vector4 target;    /* 0x130 */
    __vector4 extra;     /* 0x140 */
    Vec3_824CEEC0 scale; /* 0x150 */
    int flags;           /* 0x15c */
    void *impl;          /* 0x160 */
    int state;           /* 0x164 */
    char pad168[0x3898];
    int tail0; /* 0x3a00 */
    int tail1; /* 0x3a04 */
    int tail2; /* 0x3a08 */
};

extern "C" const Vec3_824CEEC0 lbl_821CA1A0;

extern "C" void *fn_8265C9E0(unsigned int size);
extern "C" void *fn_82F53CA0(void *memory);
extern "C" int fn_824CD030(Obj_824CEEC0 *self);
extern "C" Ptr_824CEEC0 *fn_82F51468(Ptr_824CEEC0 *out, Node_824CEEC0 *node);
extern "C" void fn_824D2AE8(Ptr_824CEEC0 *out, Ptr_824CEEC0 *src);
extern "C" void *fn_82F53418(void *p, unsigned int *name, int create);
extern "C" void fn_822315A0(Rep_824CEEC0 *rep);
extern "C" void fn_824CFB08(Obj_824CEEC0 *self);

static __forceinline void Decwref(Rep_824CEEC0 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vt->deleteThis(rep);
    }
}

static __forceinline void *NewImpl()
{
    void *memory = fn_8265C9E0(0xae0);

    if (memory != 0) {
        return fn_82F53CA0(memory);
    }
    return 0;
}

Obj_824CEEC0::Obj_824CEEC0(Desc_824CEEC0 *desc)
    : result(0), count(0), offset(__VMXGetReg(77)), velocity(__VMXGetReg(77)), target(__VMXGetReg(77)),
      extra(__VMXGetReg(77)), scale(lbl_821CA1A0), flags(0), impl(NewImpl()), state(0), tail0(0), tail1(0),
      tail2(0)
{
    Ptr_824CEEC0 sp;
    Ptr_824CEEC0 wp;
    void *found;

    if (fn_824CD030(this) != 0) {
        fn_824D2AE8(&sp, fn_82F51468(&wp, node));
        if (wp.rep != 0) {
            Decwref(wp.rep);
        }
        found = fn_82F53418(sp.px, &desc->name, 1);
        {
            void *p = 0;
            if (found != 0) {
                p = found;
            }
            result = p;
        }
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
    }
    node->angle = 0.87266463f;
    node->weight = 0.6f;
    fn_824CFB08(this);
}
