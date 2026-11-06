typedef struct Vec4_82E5CD58 {
    float v[4];
} Vec4_82E5CD58;

typedef struct Obj_82E5CD58 {
    const void *vtable0;
    const void *vtable1;
    int pad8[2];
    Vec4_82E5CD58 c;
    char pad20[0x28];
    Vec4_82E5CD58 a;
    Vec4_82E5CD58 b;
    __int64 q;
    short s;
    short pad72;
    int w[6];
} Obj_82E5CD58;

extern void fn_82E58050(Obj_82E5CD58 *self);
extern char lbl_82154DB8[];
extern char lbl_8215FDD0[];
extern Vec4_82E5CD58 lbl_8202E618;
extern Vec4_82E5CD58 lbl_82154B18;

Obj_82E5CD58 *fn_82E5CD58(Obj_82E5CD58 *self)
{
    fn_82E58050(self);
    self->vtable0 = lbl_82154DB8;
    self->vtable1 = lbl_8215FDD0;
    self->a = lbl_8202E618;
    self->b = lbl_8202E618;
    self->q = 0;
    self->s = 0;
    self->w[0] = 0;
    self->w[1] = 0;
    self->w[2] = 0;
    self->w[3] = 0;
    self->w[4] = 0;
    self->w[5] = 0;
    self->c = lbl_82154B18;
    return self;
}
