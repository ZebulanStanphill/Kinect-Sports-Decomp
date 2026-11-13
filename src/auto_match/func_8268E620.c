typedef struct { unsigned int pad[6]; unsigned int child[2]; } TNode_8268E620;
#define T(x) ((TNode_8268E620 *)(x))

unsigned int fn_8268E620(unsigned int *param_1, unsigned int nb)
{
  unsigned int t;
  unsigned int v;
  unsigned int rsize;
  unsigned int rst;
  unsigned int sizebits;
  unsigned int rt;
  unsigned int trem;

  t = *param_1; v = 0; rsize = 0xffffffff;
  if (t == 0) {
    return v;
  }
  rst = 0; sizebits = nb;
  for (;;) {
    trem = t - nb;
    if (t >= nb && trem < rsize) {
      v = t;
      rsize = trem;
      if (trem == 0) {
        return t;
      }
    }
    rt = T(t)->child[1];
    t = T(t)->child[sizebits >> 31];
    if (rt != 0 && rt != t) {
      rst = rt;
    }
    if (t == 0) break;
    sizebits <<= 1;
  }
  t = rst;
  if (t == 0) {
    return v;
  }
  do {
    trem = t - nb;
    if (t >= nb && trem < rsize) {
      rsize = trem;
      v = t;
    }
    t = T(t)->child[T(t)->child[0] == 0];
  } while (t != 0);
  return v;
}
