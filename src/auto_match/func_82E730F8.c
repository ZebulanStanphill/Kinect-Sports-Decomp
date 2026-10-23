extern int fn_82E42C88(unsigned int, unsigned __int64 *);

typedef struct {
  unsigned int a;
  unsigned int pad1[2];
  unsigned int c;
  unsigned int pad2[0x70];
  unsigned __int64 time;
} S;

unsigned __int64 fn_82E730F8(S *p)
{
  unsigned __int64 rem;
  unsigned __int64 t;
  unsigned __int64 v;
  int hr;

  rem = 0;
  t = (unsigned int)(p->a * 10000);
  if (p->time > t) {
    rem = p->time - t;
  }
  v = 0;
  hr = fn_82E42C88(p->c, &v);
  v = hr >= 0 ? v : 0;
  if (v > rem) {
    return v;
  }
  return rem;
}
