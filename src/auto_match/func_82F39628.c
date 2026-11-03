extern void fn_82E57620(void *, void *);
extern void fn_82E576A8(void *, void *);
extern int fn_82E57820(void *, void *, unsigned);
extern int fn_82E59EC8(void *, void *);
extern void *fn_82E50BE8(unsigned, int, int, int, int);

struct O_82F39628;
typedef struct VT_82F39628 { char pad[0x2c]; unsigned __int64 (*f2c)(struct O_82F39628 *); } VT_82F39628;
typedef struct O_82F39628 {
  VT_82F39628 *vt; int f4; int f8; void *fc; char f10[0x10]; char f20[8]; char f28[8]; char pad30[0x10];
  unsigned f40; char pad44[4]; char f48[4]; void *f4c; unsigned f50;
} O_82F39628;

int fn_82F39628(O_82F39628 *o, unsigned *out)
{
  int hr;
  unsigned cap;
  void *buf;
  unsigned *q;
  void *tmp;
  if (o->fc == 0) return -0x3ff2c94a;
  cap = o->f40;
  if (out == 0) return -0x7ff8ffa9;
  *out = 0;
  if (cap < 0x20) {
    *out = 0x20;
    hr = -0x3ff2c94f;
    goto end;
  }
  tmp = o->f28;
  fn_82E57620(o->f10, tmp);
  fn_82E576A8(o->f20, tmp);
  hr = fn_82E59EC8(o->f48, tmp);
  if (hr >= 0) {
    q = &o->f50;
    hr = fn_82E59EC8(q, tmp);
    if (hr >= 0 && *q != 0) {
      buf = fn_82E50BE8(*q, 0, 0, 0, 0);
      o->f4c = buf;
      if (buf == 0) {
        hr = -0x7ff8fff2;
        goto done;
      }
      hr = fn_82E57820(buf, tmp, *q);
    }
  }
  if (hr == -0x3ff2c94f) goto end;
done:
  *out = cap - o->f40;
  if (hr >= 0 && o->vt->f2c(o) != *out) hr = -0x3ff2c566;
end:
  return hr;
}
