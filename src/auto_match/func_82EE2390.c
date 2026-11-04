extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82153DDC[];
extern char lbl_8202F1FC[];
extern char lbl_82153DEC[];
typedef struct Vt_82EE2390 { void *f0; void (*f4)(void *); } Vt_82EE2390;
typedef struct Obj_82EE2390 { Vt_82EE2390 *vt; } Obj_82EE2390;
int fn_82EE2390(Obj_82EE2390 *o, const char *iid, void **out)
{
  int hr;
  if (out == 0) return 0x80070057;
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_82153DDC, 16) == 0 || memcmp(iid, lbl_8202F1FC, 16) == 0) { *out = o; o->vt->f4(o); } else if (memcmp(iid, lbl_82153DEC, 16) == 0) { *out = o != 0 ? (char *)o + 76 : 0; o->vt->f4(o); } else hr = 0x80004002;
  return hr;
}
