extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8215465C[];
extern char lbl_82153178[];
extern char lbl_8202F1FC[];
extern char lbl_821545BC[];
typedef struct Vt_82E2D3B0 { void *f0; void (*f4)(void *); } Vt_82E2D3B0;
typedef struct Obj_82E2D3B0 { Vt_82E2D3B0 *vt; } Obj_82E2D3B0;
int fn_82E2D3B0(Obj_82E2D3B0 *o, const char *iid, Obj_82E2D3B0 **out)
{
  int hr;
  if (out == 0) return 0x80070057;
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_8215465C, 16) == 0 || memcmp(iid, lbl_82153178, 16) == 0 || memcmp(iid, lbl_8202F1FC, 16) == 0) {
    *out = o;
  } else if (memcmp(iid, lbl_821545BC, 16) == 0) {
    *out = o != 0 ? (Obj_82E2D3B0 *)((char *)o + 0x4c) : 0;
  } else {
    hr = 0x80004002;
  }
  if (hr == 0) (*out)->vt->f4(*out);
  return hr;
}
