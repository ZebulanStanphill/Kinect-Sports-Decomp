// Havok ray cast wrapped in the "TtRayCastSimpl" timer scope: fills the collector state at self,
// then casts a single ray (origin + strided array of one 16-byte target) through the shape's vtable.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ProfTls_83089608 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_83089608;

typedef struct RayInput_83089608 {
    __vector4 from;         /* 0x00 */
    __vector4 to;           /* 0x10 */
    unsigned char enable;   /* 0x20 */
} RayInput_83089608;

typedef struct Cast_83089608 {
    __vector4 from;         /* 0x00 */
    int count;              /* 0x10 */
    __vector4 *to;          /* 0x14 */
    int stride;             /* 0x18 */
    int unk1c;              /* 0x1c */
} Cast_83089608;

typedef struct State_83089608 {
    int unk0;
    RayInput_83089608 *input;   /* 0x04 */
    void *body;                 /* 0x08 */
    void *collector;            /* 0x0c */
    char pad10[0x24];
    void *filter;               /* 0x34 */
} State_83089608;

struct Shape_83089608;
typedef struct ShapeVt_83089608 {
    void *slots[23];
    void (*castRay)(struct Shape_83089608 *self, Cast_83089608 *cast, State_83089608 *state, int unk);
} ShapeVt_83089608;

typedef struct Shape_83089608 {
    ShapeVt_83089608 *vt;
} Shape_83089608;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_83089608(State_83089608 *self, Shape_83089608 *shape, RayInput_83089608 *input, char *owner,
                 void *collector)
{
    ProfTls_83089608 *t;
    void **p;
    Cast_83089608 cast;

    t = (ProfTls_83089608 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtRayCastSimpl";
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
    cast.count = 1;
    cast.stride = 0x10;
    cast.unk1c = 0;
    cast.to = &input->to;
    shape->vt->castRay(shape, &cast, self, 0);

    t = (ProfTls_83089608 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
