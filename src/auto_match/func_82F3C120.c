typedef struct Obj_82F3C120 Obj_82F3C120;
typedef struct { void *f0; unsigned long (*AddRef)(Obj_82F3C120 *); } Vt_82F3C120;
struct Obj_82F3C120 { Vt_82F3C120 *vt; int pad[0x14]; void *f54; };

extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82154C18[];
extern char lbl_82154C58[];
extern char lbl_8214C740[];
extern char lbl_82154C48[];
extern char lbl_8202F1FC[];

int fn_82F3C120(Obj_82F3C120 *o, const char *iid, void **out)
{
  if (memcmp(iid, lbl_82154C18, 16) == 0) {
    *out = o->f54;
  } else if (memcmp(iid, lbl_82154C58, 16) == 0) {
    *out = o;
  } else if (memcmp(iid, lbl_8214C740, 16) == 0) {
    *out = o != 0 ? (char *)o + 4 : 0;
  } else if (memcmp(iid, lbl_82154C48, 16) == 0) {
    *out = o;
  } else if (memcmp(iid, lbl_8202F1FC, 16) == 0) {
    *out = o;
  } else {
    *out = 0;
    return 0x80004002;
  }
  o->vt->AddRef(o);
  return 0;
}
