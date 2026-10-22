typedef unsigned int uint;

typedef struct {
  uint pad0 : 10;
  uint nsrc : 3;
  uint pad1 : 5;
  uint op : 7;
  uint pad2 : 7;
} Info;

typedef struct Ins {
  uint f0;
  uint *uses;
  Info info;
  char pad[0x2c - 0xc];
  struct Ins **src[3];
} Ins;

static unsigned char inRange(uint k) { return k >= 0x20 && k <= 0x52; }

/* Loop conditions written as small if/return helpers: the late inlining
   keeps the loops top-tested (no rotation), as in the original. */
static int notNull(uint *p) { if (p) return 1; return 0; }

static int below(uint i, Ins *ins) { if (i < ins->info.nsrc) return 1; return 0; }

uint fn_82AE9218(Ins *ins, uint *mask, int *count)
{
  uint *p;
  uint v;
  uint k;
  uint result;
  uint i;

  result = 0;
  for (p = ins->uses; notNull(p); p = (uint *)p[2]) {
    v = p[4];
    if (v != 0 && (*p & 0xe000000) != 0) {
      k = ((Ins *)v)->info.op;
      if (inRange(k) && (*(uint *)(v + 8) & 0x380000) == 0x100000) {
        if ((*(uint *)((*(uint **)(v + 0x2c))[3] + 8) & 0x3f80) == 0x3e00) {
          *mask = 1 << (**(uint **)(v + 0x2c) >> 5 & 3) | *mask;
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
