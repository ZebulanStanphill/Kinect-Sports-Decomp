typedef struct Vec_8305E338 {
    float v[4];
} Vec_8305E338;

typedef struct Obj_8305E338 {
    char pad0[0x34];
    Vec_8305E338 pos;
} Obj_8305E338;

extern float lbl_831BCA50;
extern void fn_8305E188(Obj_8305E338 *self, Vec_8305E338 *out);
extern float fn_82810280(Vec_8305E338 *a, Vec_8305E338 *b);

unsigned char fn_8305E338(Obj_8305E338 *self)
{
    Vec_8305E338 p;
    fn_8305E188(self, &p);
    return fn_82810280(&p, &self->pos) > lbl_831BCA50;
}
