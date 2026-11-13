typedef struct BitSet_82AE6018 {
  unsigned int bits;
} BitSet_82AE6018;

typedef struct Allocator_82AE6018 {
  int unknown0;
  BitSet_82AE6018 used;
} Allocator_82AE6018;

extern int fn_82AE5260(BitSet_82AE6018 *set);
extern int fn_82AE5988(BitSet_82AE6018 *set, int first, int last);

int fn_82AE6018(Allocator_82AE6018 *self, int unused, int count)
{
  int start;
  int hit;
  unsigned int end;

  start = fn_82AE5260(&self->used);
  if (start == -1) {
    return -1;
  }
  for (;;) {
    end = start + count;
    if (end > 0x20) {
      return -1;
    }
    hit = fn_82AE5988(&self->used, start, end - 1);
    if (hit == -1) {
      return start;
    }
    start = hit + 1;
  }
}
