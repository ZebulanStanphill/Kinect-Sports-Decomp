extern int memcmp(const void *, const void *, unsigned);
extern char lbl_821546AC[];
extern char lbl_8202F1FC[];
extern char lbl_821545AC[];
typedef struct Vt_82E41718 { void *f0; void (*f4)(void *); } Vt_82E41718;
typedef struct Obj_82E41718 { Vt_82E41718 *vt; } Obj_82E41718;
int fn_82E41718(Obj_82E41718 *o, const char *iid, void **out)
{
  int hr;
  if (out == 0) return 0x80070057;
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_821546AC, 16) == 0 || memcmp(iid, lbl_8202F1FC, 16) == 0) { *out = o; o->vt->f4(o); } else if (memcmp(iid, lbl_821545AC, 16) == 0) { *out = o != 0 ? (char *)o + 4 : 0; o->vt->f4(o); } else hr = 0x80004002;
  return hr;
}
