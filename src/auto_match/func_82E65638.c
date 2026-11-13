// Kinect Sports retail 4D5308C9, function 0x82E65638 (200 bytes).
// QueryInterface for two IIDs (inlined memcmp, /O1 /Oi): AddRef and return self when it is set,
// else clear *out and return E_NOINTERFACE.

typedef struct Vt_82E65638 { void *f0; unsigned long (*AddRef)(void *); } Vt_82E65638;
typedef struct Obj_82E65638 { Vt_82E65638 *vt; } Obj_82E65638;
extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089D90[], lbl_82154D30[];

int fn_82E65638(Obj_82E65638 *self, const void *iid, void **out) {
 int hr = 0;
 if (memcmp(iid, lbl_82089D90, 16) == 0 || memcmp(iid, lbl_82154D30, 16) == 0) { if (self != 0) { self->vt->AddRef(self); *out = self; } }
 else { *out = 0; hr = 0x80004002; }
 return hr; }
