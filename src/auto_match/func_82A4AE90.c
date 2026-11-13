typedef struct Vt_82A4AE90 { void *f0; unsigned long (*AddRef)(void *); } Vt_82A4AE90;
typedef struct Obj_82A4AE90 { Vt_82A4AE90 *vt; int pad[3]; char inner[4]; } Obj_82A4AE90;
extern int memcmp(const void *, const void *, unsigned);
extern long fn_82A40170(void *inner, const void *iid, void **out);
extern char lbl_82089CCC[];
long fn_82A4AE90(Obj_82A4AE90 *self, const void *iid, void **out)
{
    long hr;
    *out = 0;
    if (memcmp(iid, lbl_82089CCC, 16) == 0) {
        *out = self;
        self->vt->AddRef(self);
        hr = 0;
    } else {
        hr = fn_82A40170(self->inner, iid, out);
    }
    return hr;
}
