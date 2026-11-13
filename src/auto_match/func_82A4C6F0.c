typedef struct Vt_82A4C6F0 { void *f0; unsigned long (*AddRef)(void *); } Vt_82A4C6F0;
typedef struct Obj_82A4C6F0 { Vt_82A4C6F0 *vt; char pad[0x1c]; void *iface20; void *iface24; } Obj_82A4C6F0;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089DA0[], lbl_82089DB0[];
extern long fn_82A4C390(Obj_82A4C6F0 *self, const void *iid, void **out);
long fn_82A4C6F0(Obj_82A4C6F0 *self, const void *iid, void **out)
{
    long hr = 0;
    if (memcmp(iid, lbl_82089DB0, 16) == 0) {
        *out = self ? &self->iface20 : 0;
        self->vt->AddRef(self);
    } else if (memcmp(iid, lbl_82089DA0, 16) == 0) {
        *out = self ? &self->iface24 : 0;
        self->vt->AddRef(self);
    } else {
        hr = fn_82A4C390(self, iid, out);
    }
    return hr;
}
