typedef struct Iface_82E43B78 Iface_82E43B78;
typedef struct {
    void *f[12];
    int (*getValue)(Iface_82E43B78 *self, unsigned __int64 *out);
} Vt_82E43B78;
struct Iface_82E43B78 { Vt_82E43B78 *vt; };

typedef struct {
    char pad[0x80];
    Iface_82E43B78 *obj;
} Self_82E43B78;

int fn_82E43B78(Self_82E43B78 *self)
{
    int result = 0;
    if (self->obj != 0) {
        unsigned __int64 v = 0;
        if (self->obj->vt->getValue(self->obj, &v) >= 0 && v > 0) {
            result = 1;
        }
    }
    return result;
}
