/* Havok cached ray cast wrapped in the "TtRayCstCached" timer scope: fills the collector state at self,
   then casts a single ray (origin + strided array of one 16-byte target) through the shape's vtable. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ProfTls_83088020 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_83088020;

typedef struct RayInput_83088020 {
    __vector4 from;         /* 0x00 */
    __vector4 to;           /* 0x10 */
    unsigned char enable;   /* 0x20 */
} RayInput_83088020;

typedef struct Cast_83088020 {
    __vector4 from;         /* 0x00 */
    int count;              /* 0x10 */
    __vector4 *to;          /* 0x14 */
    int stride;             /* 0x18 */
    int cache;              /* 0x1c */
} Cast_83088020;

typedef struct State_83088020 {
    int unk0;
    RayInput_83088020 *input;   /* 0x04 */
    void *body;                 /* 0x08 */
    void *collector;            /* 0x0c */
    int unk10;                  /* 0x10 */
    char pad14[0x30];
    void *filter;               /* 0x44 */
} State_83088020;

struct Shape_83088020;
typedef struct ShapeVt_83088020 {
    void *slots[23];
    void (*castRay)(struct Shape_83088020 *self, Cast_83088020 *cast, State_83088020 *state, int unk);
} ShapeVt_83088020;

typedef struct Shape_83088020 {
    ShapeVt_83088020 *vt;
} Shape_83088020;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_83088020(State_83088020 *self, Shape_83088020 *shape, RayInput_83088020 *input, char *owner,
                 int cache, void *collector)
{
    ProfTls_83088020 *t;
    void **p;
    Cast_83088020 cast;

    t = (ProfTls_83088020 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtRayCstCached";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    self->input = input;
    self->collector = collector;
    self->unk10 = 0;
    self->body = owner ? owner + 0x14 : 0;
    if (input->enable)
        self->filter = owner ? owner + 0x10 : 0;
    else
        self->filter = 0;
    cast.from = input->from;
    cast.count = 1;
    cast.stride = 0x10;
    cast.to = &input->to;
    cast.cache = cache;
    shape->vt->castRay(shape, &cast, self, 0);

    t = (ProfTls_83088020 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
