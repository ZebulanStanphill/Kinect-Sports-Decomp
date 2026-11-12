// Constructor: zeroes the shared pointer and handle, loads two float3 tuning values from
// lbl_831D2BF0, makes a shared copy of the description returned by fn_8251F720 (make_shared:
// reference-count block with vtable lbl_821AE598 and the 12-byte object at +0xc), then fills a
// request block from it and registers it (fn_82529A38), keeping the returned handle.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);
}

struct Float3_823A10B0 {
    float x, y, z;
};

struct Tuning_823A10B0 {
    float pad0[2];
    Float3_823A10B0 a;   /* 0x08 */
    Float3_823A10B0 b;   /* 0x14 */
};

struct Desc_823A10B0 {
    int a;
    int b;
    int c;
};

struct RefObj_823A10B0 {
    void **vtbl;
    int uses;
    int weaks;
    Desc_823A10B0 storage;
};

struct Owner_823A10B0 {
    Desc_823A10B0 *ptr;
    RefObj_823A10B0 *rep;
    int handle;
    int pad;
    __vector4 a;   /* 0x10 */
    __vector4 b;   /* 0x20 */
};

struct Request_823A10B0 {
    char pad0[0x4b];
    char name[0x39];          /* 0x4b */
    int owner;                /* 0x84 */
    char pad88[0x4c];
    int a;                    /* 0xd4 */
    char padd8[0xc];
    int b;                    /* 0xe4 */
    char pade8[0x414];
    int last;                 /* 0x4fc */
    char pad500[0xc0];
};

extern "C" {
extern Tuning_823A10B0 lbl_831D2BF0;
extern void *lbl_821AE598[];
void *fn_8265C9E0(unsigned int size);
void fn_822315A0(void *rep);
Desc_823A10B0 *fn_8251F720(void *source, int flags);
void fn_8251FA58(Desc_823A10B0 *desc);
void fn_82529508(Request_823A10B0 *request);
void *fn_82587AC0(char *name);
int fn_82529A38(void *target, Request_823A10B0 *request, int flags);
}

inline void *operator new(unsigned int, void *p) { return p; }

static __forceinline __vector4 LoadFloat3(const Float3_823A10B0 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadVector3(const Float3_823A10B0 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

extern "C" Owner_823A10B0 *fn_823A10B0(Owner_823A10B0 *self, int owner, void *source)
{
    Desc_823A10B0 *desc;
    RefObj_823A10B0 *mem;
    RefObj_823A10B0 *rx;
    RefObj_823A10B0 *old;
    Desc_823A10B0 *d;
    void *target;
    Request_823A10B0 request;

    self->ptr = 0;
    self->rep = 0;
    self->handle = 0;
    self->a = LoadVector3(&lbl_831D2BF0.a);
    self->b = LoadVector3(&lbl_831D2BF0.b);
    desc = fn_8251F720(source, 0);
    mem = (RefObj_823A10B0 *)fn_8265C9E0(sizeof(RefObj_823A10B0));
    if (mem != 0) {
        mem->uses = 1;
        mem->vtbl = lbl_821AE598;
        mem->weaks = 1;
        ::new ((void *)&mem->storage) Desc_823A10B0(*desc);
        rx = mem;
    } else {
        rx = 0;
    }
    old = self->rep;
    self->rep = rx;
    self->ptr = &rx->storage;
    if (old != 0)
        fn_822315A0(old);
    fn_8251FA58(desc);
    d = self->ptr;
    fn_82529508(&request);
    request.owner = owner;
    request.a = d->a;
    request.last = 0;
    request.b = d->b;
    target = fn_82587AC0(request.name);
    self->handle = fn_82529A38(target, &request, 0);
    return self;
}
