extern double lbl_8200E890;

typedef struct Obj_82E976C0 {
    char pad0[0x7788];
    __int64 count;
    double scale;
    char pad7798[0x7858 - 0x7798];
    int a;
    int b;
    float v[4];
} Obj_82E976C0;

void fn_82E976C0(Obj_82E976C0 *self)
{
    self->count = 0; self->scale = lbl_8200E890;
    self->a = 0;
    self->b = 0;
    
    self->v[0] = 0.0f;
    self->v[1] = 0.0f;
    self->v[2] = 0.0f;
    self->v[3] = 0.0f;
}
