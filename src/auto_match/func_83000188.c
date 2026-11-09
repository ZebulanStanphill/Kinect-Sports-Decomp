typedef struct Obj_83000188 Obj_83000188;

typedef struct Vtbl_83000188 {
    void *pad0[18];
    void (*f48)(Obj_83000188 *self, float f, int a, int b, int c);
} Vtbl_83000188;

struct Obj_83000188 {
    Vtbl_83000188 *vt;
    int pad04[21];
    float f58;
    float f5c;
};

int fn_83000188(Obj_83000188 *self, float v)
{
    self->f58 = v;
    self->vt->f48(self, v, 0x14, 0, 0);
    return 1;
}
