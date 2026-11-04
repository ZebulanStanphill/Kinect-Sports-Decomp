typedef struct { void *data; int pad; unsigned cap; } V;
extern void *fn_8267B890();
extern void *fn_8267BDA8();
extern void fn_8267BE38();
extern void *lbl_831E7E64;

void fn_827602A0(V *p, int unused, unsigned n)
{
  unsigned cap;
  if (n == 0) {
    cap = 0;
    if (p->data != 0) {
      fn_8267BE38(p->data);
      p->data = 0;
    }
  } else {
    cap = (n + 3) & ~3u;
    if (p->data != 0) {
      p->data = fn_8267BDA8(p->data, cap * 24);
    } else {
      int fl = 259;
      p->data = fn_8267B890(lbl_831E7E64, cap * 24, &fl);
    }
  }
  p->cap = cap;
}
