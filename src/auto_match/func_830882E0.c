// Havok ray cast wrapped in the "TtRayCastFSP" timer scope: fills the collector state at self, then casts
// `count` rays (one origin, a strided array of targets) through the shape's vtable (as in func_83089608).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ProfTls_830882E0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_830882E0;

typedef struct RayInput_830882E0 {
    __vector4 from;         /* 0x00 */
    __vector4 to;           /* 0x10 */
    unsigned char enable;   /* 0x20 */
} RayInput_830882E0;

typedef struct Cast_830882E0 {
    __vector4 from;         /* 0x00 */
    int count;              /* 0x10 */
    __vector4 *to;          /* 0x14 */
    int stride;             /* 0x18 */
    int unk1c;              /* 0x1c */
} Cast_830882E0;

typedef struct State_830882E0 {
    int unk0;
    RayInput_830882E0 *input;   /* 0x04 */
    void *body;                 /* 0x08 */
    void *collector;            /* 0x0c */
    void *unk10;                /* 0x10 */
    char pad14[0x30];
    void *filter;               /* 0x44 */
} State_830882E0;

struct Shape_830882E0;
typedef struct ShapeVt_830882E0 {
    void *slots[23];
    void (*castRay)(struct Shape_830882E0 *self, Cast_830882E0 *cast, State_830882E0 *state, int unk);
} ShapeVt_830882E0;

typedef struct Shape_830882E0 {
    ShapeVt_830882E0 *vt;
} Shape_830882E0;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_830882E0(State_830882E0 *self, Shape_830882E0 *shape, RayInput_830882E0 *input, int count, char *owner,
                 int unk1c, void *collector, void *unk10)
{
    ProfTls_830882E0 *t;
    void **p;
    Cast_830882E0 cast;

    t = (ProfTls_830882E0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtRayCastFSP";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    self->input = input;
    self->body = owner ? owner + 0x14 : 0;
    self->collector = collector;
    self->unk10 = unk10;
    if (input->enable)
        self->filter = owner ? owner + 0x10 : 0;
    else
        self->filter = 0;
    cast.from = input->from;
    cast.to = &input->to;
    cast.stride = 0x30;
    cast.unk1c = unk1c;
    cast.count = count;
    shape->vt->castRay(shape, &cast, self, 0);

    t = (ProfTls_830882E0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
