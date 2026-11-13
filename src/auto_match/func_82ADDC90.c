typedef unsigned __int64 U64_82ADDC90;

typedef struct Self_82ADDC90 {
  char pad0[0x2a0];
  int n;
  U64_82ADDC90 *tbl;
  U64_82ADDC90 **ptrs;
  char *bits;
} Self_82ADDC90;

static __forceinline unsigned char HasBit(char *row, unsigned int i)
{
  return (((U64_82ADDC90)1 << (i & 0x3f)) & *(U64_82ADDC90 *)(row + (i >> 3 & 0x1ffffff8))) != 0;
}

static __forceinline unsigned char Open(U64_82ADDC90 *tbl, unsigned int a, unsigned int b)
{
  int i;

  for (i = 0; i < 4; i++) {
    if (~(tbl[b * 5 + i + 1] | tbl[a * 5 + i + 1]) != 0) {
      return 1;
    }
  }
  return 0;
}

static __forceinline unsigned char Overlap(U64_82ADDC90 *p, U64_82ADDC90 *end, int off)
{
  if (p < end) {
    do {
      if ((*(U64_82ADDC90 *)(off + (int)p) & *p) != 0) {
        return 1;
      }
      p++;
    } while (p < end);
  }
  return 0;
}

int fn_82ADDC90(Self_82ADDC90 *s, unsigned int a, unsigned int b)
{
  char *rowA;
  char *rowB;
  U64_82ADDC90 *p;
  U64_82ADDC90 *q;

  rowA = s->bits + s->n * a * 8;
  rowB = s->bits + s->n * b * 8;
  if (!HasBit(rowA, b) && !HasBit(rowB, a)) {
    if (Open(s->tbl, a, b)) {
      p = s->ptrs[a];
      q = s->ptrs[b];
      if (p != 0) {
        if (Overlap(p, p + s->n, (int)rowB - (int)p)) return 1;
      }
      if (q != 0) {
        if (Overlap(q, q + s->n, (int)rowA - (int)q)) return 1;
      }
      return 0;
    }
  }
  return 1;
}
