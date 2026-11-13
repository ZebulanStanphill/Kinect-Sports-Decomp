typedef struct Obj_82677658 {
    char pad[0xec];
    float v[6];
} Obj_82677658;

void fn_82677658(Obj_82677658 *self, const float *v)
{
    self->v[0] = v[0];
    self->v[1] = v[1];
    self->v[2] = v[2];
    self->v[3] = v[3];
    self->v[4] = v[4];
    self->v[5] = v[5];
}
