typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
double fabs(double);

typedef struct Settings_831CAD88 {
    int unk0;
    float angle;                    /* 0x04 */
} Settings_831CAD88;

extern Settings_831CAD88 lbl_831CAD88;
extern const __vector4 lbl_821962E0;
extern __vector4 lbl_8329EA10;

typedef struct Target_8238A950 Target_8238A950;

typedef struct TargetVt_8238A950 {
    void *s0[6];
    void (*Enable)(Target_8238A950 *self);
    void (*Disable)(Target_8238A950 *self);
} TargetVt_8238A950;

struct Target_8238A950 {
    TargetVt_8238A950 *vt;
};

typedef struct Handle_8238A950 {
    Target_8238A950 *obj;
    void *ref;
} Handle_8238A950;

typedef struct Ref_8238A950 {
    int unk0;
    char ctx[0x14];                 /* 0x04 */
    unsigned int id;                /* 0x18 */
} Ref_8238A950;

typedef struct Self_8238A950 {
    char pad0[0x110];
    Ref_8238A950 *ref;              /* 0x110 */
} Self_8238A950;

extern void fn_822CDCF8(Self_8238A950 *self, __vector4 *position, __vector4 *orientation);
extern int fn_822CEEC8(Self_8238A950 *self);
extern void fn_822B6D20(Self_8238A950 *self, __vector4 position, __vector4 orientation);
extern Handle_8238A950 *fn_8247B210(Handle_8238A950 *out, void *ctx, unsigned int id);
extern void fn_822315A0(void *ref);

static __forceinline __vector4 QuaternionMultiply(__vector4 a, __vector4 b, __vector4 sign)
{
    __vector4 neg = __vxor(a, sign);
    __vector4 ax = neg, ay = neg, az = neg, aw = neg;
    __vector4 rx, ry, rz, rw;

    ax = __vrlimi(ax, a, 0xb, 0);
    ay = __vrlimi(ay, a, 0xd, 0);
    aw = __vrlimi(aw, a, 0x1, 0);
    az = __vrlimi(az, a, 0x7, 0);
    rx = __vmsum4fp(ax, __vpermwi(b, 228));
    ry = __vmsum4fp(ay, __vpermwi(b, 177));
    rz = __vmsum4fp(az, __vpermwi(b, 78));
    rw = __vmsum4fp(aw, b);
    return __vmrghw(__vmrghw(rx, rz), __vmrghw(ry, rw));
}

void fn_8238A950(Self_8238A950 *self)
{
    __vector4 position;
    __vector4 orientation;
    float angle;

    fn_822CDCF8(self, &position, &orientation);
    angle = fn_822CEEC8(self) != 0 ? -lbl_831CAD88.angle : lbl_831CAD88.angle;
    {
        float h;
        __vector4 sign, p, q;
        h = (float)fabs(angle) < (float)fabs(position.vector4_f32[2]) ? angle : position.vector4_f32[2];
        sign = __vspltisw(-1);
        sign = __vslw(sign, sign);
        p = __vsel(position, __vspltw(__lvlx(&h, 0), 0), lbl_8329EA10);
        q = QuaternionMultiply(lbl_821962E0, orientation, sign);
        fn_822B6D20(self, p, q);
    }
    {
        Handle_8238A950 h;
        fn_8247B210(&h, self->ref->ctx, self->ref->id);
        h.obj->vt->Enable(h.obj);
        if (h.ref != 0) {
            fn_822315A0(h.ref);
        }
    }
    {
        Handle_8238A950 h;
        fn_8247B210(&h, self->ref->ctx, self->ref->id);
        h.obj->vt->Disable(h.obj);
        if (h.ref != 0) {
            fn_822315A0(h.ref);
        }
    }
}
