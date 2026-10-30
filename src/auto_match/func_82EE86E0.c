struct Itf_82EE86E0;
typedef struct { void *f0; void *f4; void (*Release)(struct Itf_82EE86E0 *); void *fc; void *f10; int (*Op)(struct Itf_82EE86E0 *, struct Itf_82EE86E0 *); } Vt_82EE86E0;
typedef struct Itf_82EE86E0 { Vt_82EE86E0 *vt; char pad[0x3c]; void *f40; } Itf_82EE86E0;
typedef struct { char pad0[8]; char sub8[0x54]; char cs[0x3c]; int count; int pad1; Itf_82EE86E0 *itf; } Obj_82EE86E0;
extern void fn_82A1E650(void *a, int b);
extern void fn_82E50CB8(void *p);
extern void fn_82E50F10(void *p);
extern int fn_82E66280(void *self, void *a, int b, Itf_82EE86E0 **out);

int fn_82EE86E0(Obj_82EE86E0 *o)
{
  int i = 0;
  Itf_82EE86E0 *out = 0;
  int hr = fn_82E66280(o, o->sub8, 0, &out);
  if (hr >= 0) {
    void *cs = o->cs;
    int n;
    fn_82E50CB8(cs);
    n = o->count;
    if (0 < n) {
      do {
        hr = o->itf->vt->Op(o->itf, out);
        if (hr < 0) {
          fn_82E50F10(cs);
          goto done;
        }
        i++;
      } while (i < n);
    }
    fn_82E50F10(cs);
    fn_82A1E650(o->itf->f40, 0x28);
  }
done:
  if (out != 0) out->vt->Release(out);
  return hr;
}
