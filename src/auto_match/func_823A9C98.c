typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sp_823A9C98 {
    void *px;
    void *rep;
} Sp_823A9C98;

typedef struct Obj_823A9C98 {
    int f0;
    int f4;
    int f8;
    __vector4 v10;
    int f20;
    float f24[6];
    int f3c;
    int f40;
    Sp_823A9C98 sp;
} Obj_823A9C98;

extern Sp_823A9C98 *fn_82365BD8(Sp_823A9C98 *d, Sp_823A9C98 *s);

Obj_823A9C98 *fn_823A9C98(Obj_823A9C98 *d, Obj_823A9C98 *s)
{
    d->f0 = s->f0;
    d->f4 = s->f4;
    d->f8 = s->f8;
    d->v10 = s->v10;
    d->f20 = s->f20;
    d->f24[0] = s->f24[0];
    d->f24[1] = s->f24[1];
    d->f24[2] = s->f24[2];
    d->f24[3] = s->f24[3];
    d->f24[4] = s->f24[4];
    d->f24[5] = s->f24[5];
    d->f3c = s->f3c;
    d->f40 = s->f40;
    fn_82365BD8(&d->sp, &s->sp);
    return d;
}
