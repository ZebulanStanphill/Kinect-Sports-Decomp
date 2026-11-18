typedef struct Ref_827520D8 {
    int unk0; /* 0x00 */
    int unk4; /* 0x04 */
    int refs; /* 0x08 */
} Ref_827520D8;

typedef struct Obj_827520D8 {
    char pad[0x38];
    unsigned int a;  /* 0x38 */
    unsigned char b; /* 0x3c */
    char gap[3];
    unsigned int c; /* 0x40 */
    void *obj;      /* 0x44 */
} Obj_827520D8;

typedef struct Desc_827520D8 {
    unsigned int a;   /* 0x00 */
    unsigned int b;   /* 0x04 */
    unsigned short c; /* 0x08 */
    unsigned char d;  /* 0x0a */
    signed char e;    /* 0x0b */
    unsigned char f;  /* 0x0c */
    unsigned char g;  /* 0x0d */
} Desc_827520D8;

typedef struct Target_827520D8 Target_827520D8;

typedef struct TargetVtable_827520D8 {
    char pad[0x5c];
    void *(*get)(Target_827520D8 *self); /* 0x5c */
} TargetVtable_827520D8;

struct Target_827520D8 {
    TargetVtable_827520D8 *vt; /* 0x00 */
};

extern void fn_826A76D0(Ref_827520D8 **out, Desc_827520D8 *desc, unsigned int value);
extern Target_827520D8 *fn_826F6FA8(void *obj, int index);
extern void fn_82720748(void *obj, void *env, Ref_827520D8 **ref, int unk4, int unk5);
extern void fn_826944C8(Ref_827520D8 *ref);

void fn_827520D8(Obj_827520D8 *self, unsigned int value, unsigned int a, unsigned char b, unsigned int c,
                 unsigned int flags)
{
    Ref_827520D8 *ref;
    Desc_827520D8 desc;
    Target_827520D8 *target;
    void *obj;

    self->a = a;
    self->b = b;
    self->c = c;
    desc.a = flags & 255;
    desc.b = 0;
    desc.c = 0;
    desc.d = 0;
    desc.e = -1;
    desc.f = 0;
    desc.g = 0;
    fn_826A76D0(&ref, &desc, value);
    if (self->obj) {
        target = fn_826F6FA8(self->obj, 0);
        if (target) {
            obj = target->vt->get(target);
            if (obj) {
                /* A cast to the base at +0x10 (with its null test) made before the call. */
                void *env = self ? (char *)self + 0x10 : 0;

                fn_82720748(obj, env, &ref, 0, 0);
            }
        }
    }
    {
        Ref_827520D8 *p = ref;

        if (--p->refs == 0) {
            fn_826944C8(p);
        }
    }
}
