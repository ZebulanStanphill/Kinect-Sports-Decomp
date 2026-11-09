typedef struct Iface_826934C8 Iface_826934C8;
typedef struct Iface_826934C8Vtbl {
    void *slot[8];
    int (*Method20)(Iface_826934C8 *self);
} Iface_826934C8Vtbl;
struct Iface_826934C8 {
    Iface_826934C8Vtbl *vt;
};

typedef struct Obj_826934C8 {
    int pad[2];
    int inner;
} Obj_826934C8;

int fn_826934C8(Obj_826934C8 *self)
{
    int inner = self->inner;
    if (inner != 0) {
        return ((Iface_826934C8 *)inner)->vt->Method20((Iface_826934C8 *)inner);
    }
    return 0x1001;
}
