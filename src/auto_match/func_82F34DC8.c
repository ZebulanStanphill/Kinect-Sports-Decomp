struct O_82F34DC8;
typedef struct VT_82F34DC8 { char p0[0x40]; int (*f40)(struct O_82F34DC8 *, int, unsigned); } VT_82F34DC8;
typedef struct O_82F34DC8 { VT_82F34DC8 *vt; char p4[8]; void *f0c; char p10[0x12c]; int cnt; } O_82F34DC8;

int fn_82F34DC8(O_82F34DC8 *o, unsigned p)
{
  int hr;
  if (o->f0c == 0) {
    hr = 0xC00D36B6;
  } else if (p == 0) {
    hr = 0x80070057;
  } else {
    int n = o->cnt + 1; o->cnt = n; hr = o->vt->f40(o, n - 1, p);
    if (hr < 0) { o->cnt = o->cnt - 1; }
  }
  return hr;
}
