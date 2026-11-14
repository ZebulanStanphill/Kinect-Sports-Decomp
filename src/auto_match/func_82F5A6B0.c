typedef struct Vec3_82F5A6B0 { float v[3]; } Vec3_82F5A6B0;
typedef struct Obj_82F5A6B0 {
    int kind;
    int pad4;
    unsigned __int64 f8;
    char table[0x1c0];
    float weight[20];
    float offset[20];
    Vec3_82F5A6B0 scale;
} Obj_82F5A6B0;

extern void fn_824B4288(void *table, int size);

void fn_82F5A6B0(Obj_82F5A6B0 *self)
{
    int i;
    Vec3_82F5A6B0 *s;
    self->kind = 0xf;
    self->f8 = 0;
    fn_824B4288(self->table, 0x1c0);
    for (i = 0; i < 20; i++) {
        self->weight[i] = 1.0f;
        self->offset[i] = 0.0f;
    }
    s = &self->scale;
    for (i = 0; i < 3; i++)
        s->v[i] = 1.0f;
}
