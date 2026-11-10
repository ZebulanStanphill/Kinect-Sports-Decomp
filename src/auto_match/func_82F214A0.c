typedef struct { char pad[0x86c]; void (*cb86c)(char *, int, int, int); void (*cb870)(char *, int, int, int); } Ctx_82F214A0;

void fn_82F214A0(Ctx_82F214A0 *c, char *base, int stride, int arg, int cnt, int a, int b)
{
  char *p = base + stride * 8;
  int w = 8;
  int k = 4;
  char *q;
  int i;
  if (a != 0) {
    w = 12;
    k = 0;
  }
  if (b != 0) {
    w -= 4;
  } else {
    c->cb86c(p, stride, arg, 4);
    p += 4;
  }
  q = base + k * stride + 3;
  if (b == 0) {
    for (i = 0; i < cnt - 1; i++) {
      c->cb86c(p, stride, arg, 8);
      c->cb870(q, stride, arg, w);
      p += 8;
      q += 8;
    }
  } else {
    for (i = 0; i < cnt - 1; i++) {
      c->cb870(q, stride, arg, w);
      q += 8;
    }
  }
  if (b == 0) {
    c->cb86c(p, stride, arg, 4);
  }
}
