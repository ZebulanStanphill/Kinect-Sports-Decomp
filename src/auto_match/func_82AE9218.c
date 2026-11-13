typedef struct {
  unsigned int pad0 : 10;
  unsigned int nsrc : 3;
  unsigned int pad1 : 5;
  unsigned int op : 7;
  unsigned int pad2 : 7;
} Info;

typedef struct Ins {
  unsigned int f0;
  unsigned int *uses;
  Info info;
  char pad[0x2c - 0xc];
  struct Ins **src[3];
} Ins;

static unsigned char inRange(unsigned int k) { return k >= 0x20 && k <= 0x52; }

/* Loop conditions written as small if/return helpers: the late inlining
   keeps the loops top-tested (no rotation), as in the original. */
static int notNull(unsigned int *p) { if (p) return 1; return 0; }

static int below(unsigned int i, Ins *ins) { if (i < ins->info.nsrc) return 1; return 0; }

unsigned int fn_82AE9218(Ins *ins, unsigned int *mask, int *count)
{
  unsigned int *p;
  unsigned int v;
  unsigned int k;
  unsigned int result;
  unsigned int i;

  result = 0;
  for (p = ins->uses; notNull(p); p = (unsigned int *)p[2]) {
    v = p[4];
    if (v != 0 && (*p & 0xe000000) != 0) {
      k = ((Ins *)v)->info.op;
      if (inRange(k) && (*(unsigned int *)(v + 8) & 0x380000) == 0x100000) {
        if ((*(unsigned int *)((*(unsigned int **)(v + 0x2c))[3] + 8) & 0x3f80) == 0x3e00) {
          *mask = 1 << (**(unsigned int **)(v + 0x2c) >> 5 & 3) | *mask;
        }
        else {
          *count = *count + 1;
        }
      }
      else if (k == 0x6e) {
        result = v;
      }
    }
  }
  if (ins->info.op == 0x6e) {
    for (i = 0; below(i, ins); i++) {
      fn_82AE9218(*(Ins **)((int)ins->src[i] + 0xc), mask, count);
    }
    result = 0;
  }
  return result;
}
