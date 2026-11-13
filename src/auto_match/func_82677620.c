typedef struct Obj_82677620 {
    char pad[0x11c];
    float v[6];
} Obj_82677620;

void fn_82677620(Obj_82677620 *self, const float *v)
{
    self->v[0] = v[0];
    self->v[1] = v[1];
    self->v[2] = v[2];
    self->v[3] = v[3];
    self->v[4] = v[4];
    self->v[5] = v[5];
}
