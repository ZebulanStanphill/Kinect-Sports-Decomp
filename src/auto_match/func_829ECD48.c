typedef struct { char pad0[0x14]; unsigned short count; char pad1[0x16]; unsigned short *vals; } S_829ECD48;
int fn_829ECD48(S_829ECD48 *s)
{ int n = s->count; int sum = 0; int i = 0; int r;
  if (n > 0) {
    do {
      int v = s->vals[i];
      if (v <= 0) return -1;
      if (i == n - 1 && v == 1) v = 2;
      sum = v + sum; i++;
    } while (i < n);
    r = sum > 0 ? sum : -1;
  } else r = -1;
  return r; }
