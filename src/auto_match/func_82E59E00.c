extern void *fn_82E50BE8(unsigned int, int, int, int, int);
struct Com_82E59E00;
typedef struct ComVt_82E59E00 {
  int (*Query)(struct Com_82E59E00 *, void *, void *);
  void *pad;
  void (*Release)(struct Com_82E59E00 *);
} ComVt_82E59E00;
typedef struct Com_82E59E00 {
  ComVt_82E59E00 *vt;
} Com_82E59E00;
extern Com_82E59E00 *fn_82EE7DF8(void *);
extern char lbl_82154C08[];

int fn_82E59E00(void **out)
{
  Com_82E59E00 *o;
  void *mem;
  int hr;
  if (out == 0) {
    return (int)0x80070057;
  }
  *out = 0;
  mem = fn_82E50BE8(0x118, 0, 0, 0, 0);
  o = mem ? fn_82EE7DF8(mem) : 0;
  if (o == 0) {
    return (int)0x8007000e;
  }
  hr = o->vt->Query(o, lbl_82154C08, out);
  o->vt->Release(o);
  return hr;
}
