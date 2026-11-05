extern int fn_829DCD90(void *, void *, unsigned int);
extern void *fn_82A28568(int, int, unsigned int);
extern char *lbl_832179FC;

typedef struct Buf_829E03F0 {
  int pad0;
  int f04;
  void *f08;
  unsigned int f0c;
  void *f10;
} Buf_829E03F0;

typedef struct Src_829E03F0 {
  char pad[0x9c98];
  unsigned int count;
} Src_829E03F0;

int fn_829E03F0(Buf_829E03F0 *b, Src_829E03F0 *s)
{
  unsigned int size;

  if (b->f10 != 0 || b->f08 != 0) {
    return 0x8000000a;
  }
  if (s->count == 0) {
    size = 0;
  } else {
    size = s->count * 0x7d4 + 8;
  }
  b->f0c = size;
  if (size == 0) {
    return 0x800700e8;
  }
  b->f10 = fn_82A28568(*(int *)(lbl_832179FC + 0x8f4cc), 0, size);
  if (b->f10 == 0) {
    return 0x8007000e;
  }
  b->f08 = fn_82A28568(*(int *)(lbl_832179FC + 0x8f4cc), 0, 0x400);
  if (b->f08 == 0) {
    return 0x8007000e;
  }
  b->f04 = 0;
  return fn_829DCD90(s, b->f10, b->f0c);
}
