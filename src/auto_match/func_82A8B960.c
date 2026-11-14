typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

typedef struct Obj_82A8B960 {
    struct Vtable_82A8B960 *vt;
    char pad[0x20];
} Obj_82A8B960;

typedef struct Vtable_82A8B960 {
    void *a, *b;
    int (*check)(Obj_82A8B960 *, unsigned int, unsigned int, __vector4 *, __vector4 *);
} Vtable_82A8B960;

extern __vector4 lbl_820D2760;
extern void fn_82A91338(void *, unsigned int, unsigned int, __vector4 *, __vector4 *);

int fn_82A8B960(Obj_82A8B960 *self, unsigned int a, unsigned int b, __vector4 *out1, __vector4 *out2)
{
    int result;
    if (!out1 || !out2)
        return 0x80070057;
    result = self->vt->check(self, a, b, out1, out2);
    if (result >= 0)
        fn_82A91338((char *)self + 0x24, a, b, out1, out2);
    else {
        __vector4 empty = lbl_820D2760;
        *out2 = empty;
        *out1 = empty;
    }
    return result;
}
