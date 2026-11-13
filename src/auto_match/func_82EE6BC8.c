typedef struct Obj_82EE6BC8 Obj_82EE6BC8;
typedef struct { void *f0; unsigned long (*AddRef)(Obj_82EE6BC8 *); } Vt_82EE6BC8;
struct Obj_82EE6BC8 { Vt_82EE6BC8 *vt; char pad[0x10c]; Obj_82EE6BC8 *inner; };

extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82154C18[];
extern char lbl_82154C08[];
extern char lbl_8202F1FC[];

int fn_82EE6BC8(Obj_82EE6BC8 *o, const char *iid, void **out)
{
  if (memcmp(iid, lbl_82154C18, 16) == 0) {
    *out = o->inner;
  } else if (memcmp(iid, lbl_82154C08, 16) == 0) {
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
