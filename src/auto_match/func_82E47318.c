typedef struct Vt_82E47318 { void *f0; unsigned long (*AddRef)(void *); } Vt_82E47318;
typedef struct Obj_82E47318 { Vt_82E47318 *vt; } Obj_82E47318;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8202F1FC[], lbl_82153188[];

int fn_82E47318(Obj_82E47318 *self, const void *iid, void **out) {
 int hr = 0;
 if (out == 0) { hr = 0x80004003; }
 else if (memcmp(iid, lbl_8202F1FC, 16) == 0 || memcmp(iid, lbl_82153188, 16) == 0) { if (self != 0) { self->vt->AddRef(self); *out = self; } }
 else { *out = 0; hr = 0x80004002; }
 return hr; }
