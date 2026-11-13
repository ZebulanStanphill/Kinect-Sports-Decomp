typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82F50BD8 {
    int pad0[4];
    __vector4 v10;
    char pad20[0xcd0 - 0x20];
    __vector4 vcd0;
    char subce0[0xc];
    float fcec;
    void *child;
} Obj_82F50BD8;

extern const __vector4 lbl_821657C0[3];
extern void fn_82BA02A8(void *p);
extern void *fn_82F526B8(unsigned int size);
extern void *fn_82F4EC58(void *mem, Obj_82F50BD8 *owner);
extern void fn_82F50AB0(Obj_82F50BD8 *self);

Obj_82F50BD8 *fn_82F50BD8(Obj_82F50BD8 *self)
{
    void *mem;

    fn_82BA02A8(self->subce0);
    mem = fn_82F526B8(0x1920);
    self->child = mem ? fn_82F4EC58(mem, self) : 0;
    self->v10 = lbl_821657C0[0];
    self->fcec = 1.0f;
    fn_82F50AB0(self);
    self->vcd0 = lbl_821657C0[1];
    return self;
}
