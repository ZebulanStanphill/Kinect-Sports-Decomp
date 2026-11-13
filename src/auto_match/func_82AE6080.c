typedef struct BitSet_82AE6080 {
  unsigned int bits[8];
} BitSet_82AE6080;

typedef struct Allocator_82AE6080 {
  int unknown0;
  int unknown4;
  BitSet_82AE6080 used;
} Allocator_82AE6080;

extern int fn_82AE51F8(BitSet_82AE6080 *set);
extern int fn_82AE56A8(BitSet_82AE6080 *set, int first, int last);

int fn_82AE6080(Allocator_82AE6080 *self, int unused, int count)
{
  int start;
  int hit;
  unsigned int end;

  start = fn_82AE51F8(&self->used);
  if (start == -1) {
    return -1;
  }
  for (;;) {
    end = start + count;
    if (end > 0x100) {
      return -1;
    }
    hit = fn_82AE56A8(&self->used, start, end - 1);
    if (hit == -1) {
      return start;
    }
    start = hit + 1;
  }
}
