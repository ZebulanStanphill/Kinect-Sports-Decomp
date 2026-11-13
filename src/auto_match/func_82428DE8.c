typedef struct { char pad[0x50]; float v; } Obj_82428DE8;
int fn_82428DE8(void *self, Obj_82428DE8 *o)
{
    int z = o->v == 0.0f;
    return z == 0;
}
