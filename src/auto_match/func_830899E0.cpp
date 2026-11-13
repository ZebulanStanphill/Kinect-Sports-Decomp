// Havok ray cast wrapped in the "TtRayCstFSPSim" timer scope: fills the collector state at self,
// then casts count rays (origin + an array of 0x30-byte targets) through the shape's vtable.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ProfTls_830899E0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_830899E0;

typedef struct RayInput_830899E0 {
    __vector4 from;         /* 0x00 */
    __vector4 to;           /* 0x10 */
    unsigned char enable;   /* 0x20 */
} RayInput_830899E0;

typedef struct Cast_830899E0 {
    __vector4 from;         /* 0x00 */
    int count;              /* 0x10 */
    __vector4 *to;          /* 0x14 */
    int stride;             /* 0x18 */
    int unk1c;              /* 0x1c */
} Cast_830899E0;

typedef struct State_830899E0 {
    int unk0;
    RayInput_830899E0 *input;   /* 0x04 */
    void *body;                 /* 0x08 */
    void *collector;            /* 0x0c */
    char pad10[0x24];
    void *filter;               /* 0x34 */
} State_830899E0;

struct Shape_830899E0 {
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
    virtual void v0a();
    virtual void v0b();
    virtual void v0c();
    virtual void v0d();
    virtual void v0e();
    virtual void v0f();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void castRay(Cast_830899E0 *cast, State_830899E0 *state, int unk);
};

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);

extern "C" void fn_830899E0(State_830899E0 *self, Shape_830899E0 *shape, RayInput_830899E0 *input, int count, char *owner,
                 int unk1c, void *collector)
{
    ProfTls_830899E0 *t;
    void **p;
    Cast_830899E0 cast;

    t = (ProfTls_830899E0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtRayCstFSPSim";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    self->input = input;
    self->collector = collector;
    self->body = owner ? owner + 0x14 : 0;
    if (input->enable)
        self->filter = owner ? owner + 0x10 : 0;
    else
        self->filter = 0;
    cast.from = input->from;
    cast.to = &input->to;
    cast.stride = 0x30;
    cast.unk1c = unk1c;
    cast.count = count;
    shape->castRay(&cast, self, 0);

    t = (ProfTls_830899E0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
