typedef struct Vt_82A4C390 { void *f0; unsigned long (*AddRef)(void *); } Vt_82A4C390;
typedef struct Obj_82A4C390 { Vt_82A4C390 *vt; } Obj_82A4C390;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089748[], lbl_82089D90[];
long fn_82A4C390(Obj_82A4C390 *self, const void *iid, void **out)
{
    long hr = 0;
    if (memcmp(iid, lbl_82089748, 16) == 0) {
        *out = self;
        self->vt->AddRef(self);
    } else if (memcmp(iid, lbl_82089D90, 16) == 0) {
        *out = self;
        self->vt->AddRef(self);
    } else {
        *out = 0;
        hr = 0x80004002;
    }
    return hr;
}
