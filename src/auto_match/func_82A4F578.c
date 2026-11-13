typedef struct Vt_82A4F578 { void *f0; unsigned long (*AddRef)(void *); } Vt_82A4F578;
typedef struct Obj_82A4F578 { Vt_82A4F578 *vt; char pad[0x1c]; void *iface20; } Obj_82A4F578;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089DA0[];
extern long fn_82A4C390(Obj_82A4F578 *self, const void *iid, void **out);

long fn_82A4F578(Obj_82A4F578 *self, const void *iid, void **out)
{
    long hr = 0;
    if (memcmp(iid, lbl_82089DA0, 16) == 0) {
        *out = self ? &self->iface20 : 0;
        self->vt->AddRef(self);
    } else {
        hr = fn_82A4C390(self, iid, out);
    }
    return hr;
}
