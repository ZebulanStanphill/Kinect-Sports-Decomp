typedef struct { char pad[0x77b0]; int count; } Obj_82E93200;

int fn_82E93200(const Obj_82E93200 *o)
{
    return o->count > 20;
}
