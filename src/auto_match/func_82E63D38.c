extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8215502C[];
extern char lbl_82089D90[];
extern char lbl_8215504C[];
extern char lbl_8215503C[];
typedef struct Vt_82E63D38 { void *f0; void (*f4)(void *); } Vt_82E63D38;
typedef struct Obj_82E63D38 { Vt_82E63D38 *vt; } Obj_82E63D38;
int fn_82E63D38(Obj_82E63D38 *o, const char *iid, void **out)
{
  int hr;
  if (out == 0) return 0x80070057;
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_8215502C, 16) == 0 || memcmp(iid, lbl_82089D90, 16) == 0 ||
      memcmp(iid, lbl_8215504C, 16) == 0) {
    *out = o;
    o->vt->f4(o);
  } else if (memcmp(iid, lbl_8215503C, 16) == 0) {
    *out = o != 0 ? (char *)o + 4 : 0;
    o->vt->f4(o);
  } else {
    hr = 0x80004002;
  }
  return hr;
}
