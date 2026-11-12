/* Rotates the reference axis (reserved register 71, w cleared) by the object's orientation and returns
   the resulting heading angle; also reports a value read from the state's source. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

extern const __vector4 lbl_82196750;

typedef struct Flags_823DF998 {
    char pad0[0x1f];
    unsigned char active[4];        /* 0x1f */
} Flags_823DF998;

typedef struct Item_823DF998 {
    char pad0[0x30];
    Flags_823DF998 *flags;          /* 0x30 */
} Item_823DF998;

typedef struct Source_823DF998 {
    char pad0[0x1c];
    float value;                    /* 0x1c */
} Source_823DF998;

typedef struct State_823DF998 {
    Source_823DF998 *src;           /* 0x00 */
    char pad4[0xd0];
    float qx;                       /* 0xd4 */
    float qy;                       /* 0xd8 */
    float qz;                       /* 0xdc */
    float qw;                       /* 0xe0 */
    char padE4[0x1c];
} State_823DF998;

extern Item_823DF998 *fn_8251F720(void *, int);
extern void fn_827FA000(State_823DF998 *self, Item_823DF998 *src);
extern float fn_8255A070(__vector4 dir);
extern void fn_8251FA58(Item_823DF998 *item);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

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

void fn_823DF998(void *owner, float *heading, float *value)
{
    Item_823DF998 *item;
    State_823DF998 state;
    __vector4 q;
    Flags_823DF998 *f;

    item = fn_8251F720(owner, 0);
    fn_827FA000(&state, item);
    f = item->flags;
    if (f != 0 && (f->active[0] != 0 || f->active[1] != 0 || f->active[2] != 0 || f->active[3] != 0)) {
        q = VectorSet(state.qx, state.qy, state.qz, state.qw);
    } else {
        q = lbl_82196750;
    }
    {
        __vector4 sign = __vspltisw(-1);
        __vector4 axis = __vrlimi(__vspltisw(0), __VMXGetReg(71), 0xe, 0);
        __vector4 conj, r;

        sign = __vslw(sign, sign);
        conj = __vrlimi(__vxor(q, sign), q, 1, 0);
        r = QuaternionMultiply(conj, axis, sign);
        r = QuaternionMultiply(r, q, sign);
        *heading = fn_8255A070(r);
    }
    *value = state.src->value;
    fn_8251FA58(item);
}
