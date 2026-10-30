typedef struct Obj_82C04800 Obj_82C04800;
typedef struct {
    void *f[29];
    __int64 (*getTime)(Obj_82C04800 *self);
} Vt_82C04800;
struct Obj_82C04800 {
    Vt_82C04800 *vt;
    char pad[0x120 - 4];
    __int64 x120;
    __int64 x128;
    __int64 x130;
};

int fn_82C04800(Obj_82C04800 *o)
{
    o->x120 = o->x130;
    o->x128 = o->vt->getTime(o);
    return 0;
}
