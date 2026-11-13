typedef struct Vt_82E65100 { void *f0; unsigned long (*AddRef)(void *); } Vt_82E65100;
typedef struct Obj_82E65100 { Vt_82E65100 *vt; } Obj_82E65100;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089D90[], lbl_821550BC[];

int fn_82E65100(Obj_82E65100 *self, const void *iid, void **out) {
 int hr = 0;
 if (out == 0) { hr = 0x80004003; }
 else if (memcmp(iid, lbl_82089D90, 16) == 0 || memcmp(iid, lbl_821550BC, 16) == 0) { if (self != 0) { self->vt->AddRef(self); *out = self; } }
 else { *out = 0; hr = 0x80004002; }
 return hr; }
