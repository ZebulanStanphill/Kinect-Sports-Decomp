typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82DC1168 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82DC1168;

typedef struct Obj_82DC1168 {
    unsigned char type;     /* 0x00 */
    int f4;                 /* 0x04 */
    float f8;               /* 0x08 */
    __vector4 v10;          /* 0x10 */
    __vector4 v20;          /* 0x20 */
    __vector4 v30;          /* 0x30 */
    __vector4 v40;          /* 0x40 */
    Rotation_82DC1168 rot;  /* 0x50 */
} Obj_82DC1168;

void fn_82DC1168(Obj_82DC1168 *self, const Obj_82DC1168 *other)
{
    Rotation_82DC1168 *d;
    const Rotation_82DC1168 *s;

    self->type = other->type;
    self->f4 = other->f4;
    self->f8 = other->f8;
    self->v10 = other->v10;
    self->v20 = other->v20;
    self->v30 = other->v30;
    self->v40 = other->v40;
    d = &self->rot;
    s = &other->rot;
    d->col0 = s->col0;
    d->col1 = s->col1;
    d->col2 = s->col2;
}
