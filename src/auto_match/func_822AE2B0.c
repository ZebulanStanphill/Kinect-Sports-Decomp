extern void fn_822AA508(void *p);
extern void fn_8251FA58(void *p);
extern void fn_8265CA20(void *p);

typedef struct {
  void **begin;
  void **end;
  void **cap;
  int pad[2];
  void *b[8];
} S;

void fn_822AE2B0(S *s)
{
  void **it;
  void *p;

  for (it = s->begin; it < s->end; it++) {
    p = *it;
    if (p != 0) {
      fn_822AA508(p);
      fn_8265CA20(p);
    }
  }
  if (s->b[0] != 0) { fn_8251FA58(s->b[0]); s->b[0] = 0; }
  if (s->b[1] != 0) { fn_8251FA58(s->b[1]); s->b[1] = 0; }
  if (s->b[2] != 0) { fn_8251FA58(s->b[2]); s->b[2] = 0; }
  if (s->b[3] != 0) { fn_8251FA58(s->b[3]); s->b[3] = 0; }
  if (s->b[4] != 0) { fn_8251FA58(s->b[4]); s->b[4] = 0; }
  if (s->b[5] != 0) { fn_8251FA58(s->b[5]); s->b[5] = 0; }
  if (s->b[6] != 0) { fn_8251FA58(s->b[6]); s->b[6] = 0; }
  if (s->b[7] != 0) { fn_8251FA58(s->b[7]); s->b[7] = 0; }
  if (s->begin != 0) {
    fn_8265CA20(s->begin);
  }
  s->begin = 0;
  s->end = 0;
  s->cap = 0;
}
