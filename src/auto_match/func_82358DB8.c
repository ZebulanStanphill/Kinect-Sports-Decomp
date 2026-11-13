extern int fn_824CD030();
typedef struct Rng_82358DB8 { unsigned int *b; unsigned int *e; } Rng_82358DB8;
unsigned int fn_82358DB8(int param_1,unsigned int *param_2,unsigned int *param_3)
{
  unsigned int n = 0;
  Rng_82358DB8 **p = *(Rng_82358DB8 ***)(param_1 + 0x20);
  Rng_82358DB8 **end = *(Rng_82358DB8 ***)(param_1 + 0x24);
  unsigned int out[2];
  out[0] = 0;
  out[1] = 0;
  for (; p < end && n < 2; p++) {
    unsigned int *q = (*p)->b;
    unsigned int *r = (*p)->e;
    for (; q < r; q++) {
      unsigned int v = *q;
      if (v != 0 && fn_824CD030(v) != 0) {
        out[n++] = v;
        if (n == 2) break;
      }
    }
  }
  *param_2 = out[0];
  *param_3 = out[1];
  return n;
}
