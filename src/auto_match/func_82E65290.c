extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82089D90[];
extern char lbl_821550BC[];
extern char lbl_821550AC[];
typedef struct Vt_82E65290 { void *f0; void (*f4)(void *); } Vt_82E65290;
typedef struct Obj_82E65290 { Vt_82E65290 *vt; } Obj_82E65290;

int fn_82E65290(Obj_82E65290 *o, const char *iid, void **out)
{
  Obj_82E65290 *p = 0;
  int hr = 0;
  if (out == 0) {
    hr = 0x80004003;
  } else {
    if (memcmp(iid, lbl_82089D90, 16) == 0 || memcmp(iid, lbl_821550BC, 16) == 0) {
      p = o;
    } else if (memcmp(iid, lbl_821550AC, 16) == 0) {
      p = o != 0 ? (Obj_82E65290 *)((char *)o + 4) : 0;
    } else {
      hr = 0x80004002;
    }
    if (p != 0) {
      p->vt->f4(p);
      *out = p;
    } else if (hr < 0) {
      *out = 0;
    }
  }
  return hr;
}
