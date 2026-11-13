typedef struct A_8305E6F8 { int v[3]; } A_8305E6F8;
typedef struct B_8305E6F8 { int v[8]; } B_8305E6F8;
typedef struct Obj_8305E6F8 {
    char pad0[0x28];
    int f28;
    int *f2c;
    char pad30[4];
    char f34[4];
} Obj_8305E6F8;

extern void fn_8305F778(int a, int b, A_8305E6F8 *out);
extern void fn_83066658(B_8305E6F8 *out, void *p, A_8305E6F8 *a);
extern void fn_83066810(B_8305E6F8 *b, Obj_8305E6F8 *o, float t, unsigned char *hit);

unsigned char fn_8305E6F8(Obj_8305E6F8 *self, float t)
{
    unsigned char hit;
    A_8305E6F8 a;
    B_8305E6F8 b;
    fn_8305F778(self->f28, *self->f2c, &a);
    fn_83066658(&b, self->f34, &a);
    fn_83066810(&b, self, t, &hit);
    return hit;
}
