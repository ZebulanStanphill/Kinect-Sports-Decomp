// Message handler: 0x45 forwards the owner's id (fn_8252ACC0); 0x73 reports two tracked points
// (fn_82F52428 slots 2 and 3) transformed by the object's matrix, or zeros when tracking is not
// available. Then passes the message to the base handler (fn_825925D8).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_82500F88 {
    __vector4 r[4];
} Matrix_82500F88;

typedef struct Point_82500F88 {
    __vector4 position;
    char pad10[0x20];
} Point_82500F88;

typedef struct Msg_82500F88 {
    int id;               /* 0x00 */
    char pad4[0xc];
    __vector4 a;          /* 0x10 */
    __vector4 b;          /* 0x20 */
} Msg_82500F88;

typedef struct Obj_82500F88 {
    char pad0[0x4c];
    int owner;                 /* 0x4c */
    char pad50[0xa0];
    Matrix_82500F88 world;     /* 0xf0 */
    char pad130[0xa30];
    void *tracker;             /* 0xb60 */
} Obj_82500F88;

extern unsigned char fn_82F525F0(void *tracker);
extern void fn_82F52428(void *tracker, int index, Point_82500F88 *out, int a, int b);
extern void fn_8252ACC0(Obj_82500F88 *self, int owner);
extern void fn_825925D8(Obj_82500F88 *self, Msg_82500F88 *msg);

static __forceinline __vector4 Transform3(__vector4 v, Matrix_82500F88 m)
{
    __vector4 x, y, z, r;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    r = __vmaddfp(m.r[2], z, m.r[3]);
    r = __vmaddfp(y, m.r[1], r);
    r = __vmaddfp(x, m.r[0], r);
    return r;
}

void fn_82500F88(Obj_82500F88 *self, Msg_82500F88 *msg)
{
    Point_82500F88 a;
    Point_82500F88 b;
    __vector4 zero0, mask0, zero1, mask1;

    switch (msg->id) {
    case 0x45:
        fn_8252ACC0(self, self->owner);
        break;
    case 0x73:
        if (self != 0 && self->tracker != 0 && fn_82F525F0(self->tracker)) {
            fn_82F52428(self->tracker, 2, &a, 0, 0);
            fn_82F52428(self->tracker, 3, &b, 0, 0);
            zero0 = __VMXGetReg(77);
            mask0 = __VMXGetReg(67);
            mask1 = __VMXGetReg(67);
            zero1 = __VMXGetReg(77);
            msg->a = __vsel(Transform3(a.position, self->world), zero0, mask0);
            msg->b = __vsel(Transform3(b.position, self->world), zero1, mask1);
        } else {
            zero0 = __VMXGetReg(77);
            msg->a = zero0;
            msg->b = __VMXGetReg(77);
        }
        break;
    }
    fn_825925D8(self, msg);
}
