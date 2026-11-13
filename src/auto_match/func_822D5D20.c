typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct String_822D5D20 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} String_822D5D20;

typedef struct NameEntry_822D5D20 {
    int id;
    char name[32];
} NameEntry_822D5D20;

typedef struct SharedPtr_822D5D20 {
    void *ptr;
    void *rep;
} SharedPtr_822D5D20;

typedef struct VObj_822D5D20 {
    void **vt;
} VObj_822D5D20;

typedef struct Sub_822D5D20 {
    char pad0[0x38];
    int f38;
    char pad3c[0x48 - 0x3c];
    unsigned int f48;
    char pad4c[0x68 - 0x4c];
    VObj_822D5D20 *f68;
    char pad6c[4];
    VObj_822D5D20 *f70;
    char pad74[4];
    VObj_822D5D20 *f78;
} Sub_822D5D20;

typedef struct Owner_822D5D20 {
    char pad[0x30];
    Sub_822D5D20 s;
} Owner_822D5D20;

typedef struct Self_822D5D20 Self_822D5D20;
typedef struct SelfVt_822D5D20 {
    void *slots[20];
    Owner_822D5D20 *(*getOwner)(Self_822D5D20 *self);
} SelfVt_822D5D20;
struct Self_822D5D20 {
    SelfVt_822D5D20 *vt;
};

extern NameEntry_822D5D20 lbl_831CD888[];
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_822D7FE0(void *mem);
extern void fn_822D79D8(SharedPtr_822D5D20 *sp, void *obj);
extern void fn_828E9D90(void *obj);
extern void fn_828E9D40(void *obj);
extern void fn_822367E0(Sub_822D5D20 *s, void *obj, int *p);
extern void fn_828E2B28(Sub_822D5D20 *s, SharedPtr_822D5D20 *sp);
extern void fn_822315A0(void *rep);

static __forceinline const char *cstr(String_822D5D20 *s)
{
    return s->cap >= 0x10 ? s->u.ptr : s->u.buf;
}

static __forceinline int lookupId(String_822D5D20 *name)
{
    int i = 0;
    const char *n;
    const unsigned char *p;
    const unsigned char *q;
    unsigned char c;
    unsigned char b;
    for (n = lbl_831CD888[0].name; (int)n < (int)lbl_831CD888[12].name; n += sizeof(NameEntry_822D5D20), i++) {
        p = (const unsigned char *)cstr(name);
        q = p;
        c = *p;
        b = *n;
        if (c == b) {
            int d = (int)n - (int)p;
            do {
                q++;
                if (c == 0)
                    goto found;
                c = *q;
                b = q[d];
            } while (c == b);
        }
        if (c - b == 0) {
found:
            return lbl_831CD888[i].id;
        }
    }
    return 0xc;
}

void fn_822D5D20(Self_822D5D20 *self, int arg, String_822D5D20 *name, __vector4 v)
{
    Sub_822D5D20 *s;
    int argValue;
    int id;
    SharedPtr_822D5D20 pr;
    __vector4 vec;
    void *mem;
    void *h;
    id = lookupId(name);
    argValue = arg;
    vec = v;
    s = &self->vt->getOwner(self)->s;
    mem = fn_8265C9E0(0x28);
    if (mem != 0) {
        h = fn_822D7FE0(mem);
    } else {
        h = 0;
    }
    pr.ptr = 0;
    pr.rep = 0;
    fn_822D79D8(&pr, h);
    ((void (*)(void *, void *, void *))s->f68->vt[0x10 / 4])(s->f68, pr.ptr, &argValue);
    ((void (*)(void *, void *, void *))s->f70->vt[0x10 / 4])(s->f70, pr.ptr, &id);
    ((void (*)(void *, void *, void *))s->f78->vt[0x10 / 4])(s->f78, pr.ptr, &vec);
    if (s->f48 != 0) {
        fn_828E9D90(pr.ptr);
        fn_828E9D40(pr.ptr);
        fn_822367E0(s, pr.ptr, &s->f38);
    }
    fn_828E2B28(s, &pr);
    if (pr.rep != 0) {
        fn_822315A0(pr.rep);
    }
}
