typedef struct Elem_827A8998 {
  unsigned int flags;
  char pad[0x12];
  unsigned short s16;
  int i18;
} Elem_827A8998;

typedef struct Vec_827A8998 {
  Elem_827A8998 **data;
  unsigned int n;
} Vec_827A8998;
static unsigned char Bad(unsigned int i, unsigned int n)
{
  if (i < n) {
    if ((int)i >= 0) {
      return 0;
    }
  }
  return 1;
}
unsigned int fn_827A8998(Vec_827A8998 *v)
{
  unsigned int n = v->n;
  unsigned int i;
  int best;
  Elem_827A8998 *e;
  int x;
  unsigned char bad;

  if (n == 0) {
    return 0;
  }
  best = 0x7fffffff;
  i = 0;
  while (1) {
    bad = Bad(i, n);
again:
    if (bad) {
      return best;
    }
    e = v->data[i];
    if ((unsigned char)(e->flags >> 31)) {
      x = e->s16;
    } else {
      x = e->i18;
    }
    if (x < best) {
      best = x;
    }
    if (i >= n) {
      bad = 1;
      goto again;
    }
    i++;
  }
}
