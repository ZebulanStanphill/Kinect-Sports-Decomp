typedef struct Obj_830001C8 Obj_830001C8;

typedef struct Vtbl_830001C8 {
    void *pad0[18];
    void (*f48)(Obj_830001C8 *self, float f, int a, int b, int c);
} Vtbl_830001C8;

struct Obj_830001C8 {
    Vtbl_830001C8 *vt;
    int pad04[21];
    float f58;
    float f5c;
};

int fn_830001C8(Obj_830001C8 *self, float v)
{
    self->f5c = v;
    self->vt->f48(self, v, 0x15, 0, 0);
    return 1;
}
