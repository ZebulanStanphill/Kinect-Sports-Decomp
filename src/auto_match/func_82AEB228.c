extern void fn_82AD20C0(unsigned int, unsigned int *, void *);
extern void fn_82B8AE98(void *, void *);

typedef struct Node_82AEB228 {
  unsigned int f0;
  unsigned int f4;
  struct { unsigned int pad : 26; unsigned int bit : 1; unsigned int rest : 5; } f8;
} Node_82AEB228;

static __forceinline int notNull_82AEB228(unsigned int *p)
{
  if (p) return 1;
  return 0;
}

void fn_82AEB228(void *h, unsigned int *head)
{
  unsigned int t;
  while ((t = head[1] & 1) == 0) {
    Node_82AEB228 *n;
    if (t != 0) {
      n = 0;
    } else {
      n = (Node_82AEB228 *)((head[0] & 0xfffffffe) - 0x28);
    }
    if ((unsigned char)n->f8.bit != 0) {
      unsigned int **pp = (unsigned int **)&n->f4;
      unsigned int *q;
      while (q = *pp, notNull_82AEB228(q)) {
        if (q[4] != 0 && (q[0] & 0xe000000) != 0) {
          fn_82AD20C0(q[4], q, h);
        }
        if (*pp == q) {
          pp = (unsigned int **)(q + 2);
        }
      }
    }
    fn_82B8AE98(h, n);
  }
}
