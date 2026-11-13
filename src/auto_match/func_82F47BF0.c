typedef struct Obj_82F47BF0 Obj_82F47BF0;
typedef struct { void *f0; unsigned long (*AddRef)(Obj_82F47BF0 *); } Vt_82F47BF0;
struct Obj_82F47BF0 { Vt_82F47BF0 *vt; void *iface4; };

extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82154CA8[];
extern char lbl_8214C740[];
extern char lbl_8202F1FC[];

int fn_82F47BF0(Obj_82F47BF0 *o, const char *iid, void **out)
{
  if (memcmp(iid, lbl_82154CA8, 16) == 0) {
    *out = o;
  } else if (memcmp(iid, lbl_8214C740, 16) == 0) {
    *out = o ? &o->iface4 : 0;
  } else if (memcmp(iid, lbl_8202F1FC, 16) == 0) {
    *out = o;
  } else {
    *out = 0;
    return 0x80004002;
  }
  o->vt->AddRef(o);
  return 0;
}
