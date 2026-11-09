typedef struct Obj_82EF0E80 Obj_82EF0E80;
typedef struct { void *f0; unsigned long (*AddRef)(Obj_82EF0E80 *); } Vt_82EF0E80;
struct Obj_82EF0E80 { Vt_82EF0E80 *vt; };

extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8216309C[];
extern char lbl_8202F1FC[];
extern char lbl_8215443C[];

int fn_82EF0E80(Obj_82EF0E80 *o, const char *iid, void **out)
{
  if (memcmp(iid, lbl_8216309C, 16) == 0 || memcmp(iid, lbl_8202F1FC, 16) == 0) {
    *out = o;
  } else if (memcmp(iid, lbl_8215443C, 16) == 0) {
    *out = o != 0 ? (char *)o + 4 : 0;
  } else {
    *out = 0;
    return 0x80004002;
  }
  o->vt->AddRef(o);
  return 0;
}
