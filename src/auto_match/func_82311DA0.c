typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82196750;

typedef struct Sub_82311DA0 Sub_82311DA0;
typedef struct SubVt_82311DA0 {
    void (*f0)(Sub_82311DA0 *);
    void (*reset)(Sub_82311DA0 *);
} SubVt_82311DA0;
struct Sub_82311DA0 {
    SubVt_82311DA0 *vt;
};

typedef struct Owner_82311DA0 {
    char pad[0x240];
    int f240;
} Owner_82311DA0;

typedef struct Obj_82311DA0 {
    char pad0[0xc];
    Owner_82311DA0 *owner;
    char pad10[0x10];
    Sub_82311DA0 sub;
    char pad24[0xe0];
    int i104[5];
    float f118[3];
    char pad124[0xc];
    __vector4 v130;
    __vector4 v140;
    char pad150[0x20];
    int f170;
} Obj_82311DA0;

void fn_82311DA0(Obj_82311DA0 *self)
{
    self->sub.vt->reset(&self->sub);
    self->i104[0] = 0;
    self->i104[1] = 0;
    self->i104[2] = 0;
    self->i104[3] = 0;
    self->i104[4] = 0;
    self->f118[0] = 0.0f;
    self->f118[1] = 0.0f;
    self->f118[2] = 0.0f;
    self->v140 = lbl_82196750;
    self->v130 = lbl_82196750;
    self->f170 = 0;
    self->owner->f240 = 0;
}
