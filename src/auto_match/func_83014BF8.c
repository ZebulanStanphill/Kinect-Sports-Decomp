typedef struct Self_83014BF8 {
  char pad0[0x38];
  int state;
  char pad1[0x50 - 0x3c];
  int f50;
  char pad2[0x78 - 0x54];
  unsigned int f78;
} Self_83014BF8;
extern int lbl_83264304;
extern unsigned int fn_83014400(Self_83014BF8 *self, unsigned int *index, unsigned int *extra);
extern int fn_830149A0(Self_83014BF8 *self, unsigned int item, unsigned int index);
extern void fn_82FF4A38(int ctx, int a, unsigned int item, unsigned int extra);

static __forceinline int NotNull_83014BF8(unsigned int p)
{
  if (p) {
    return 1;
  }
  return 0;
}

int fn_83014BF8(Self_83014BF8 *self)
{
  unsigned int index;
  unsigned int extra;
  unsigned int item;

  if ((self->state == 0 || self->state == 2) && self->f78 == 0) {
    index = 0;
    self->state = 1;
    for (;;) {
      extra = 0;
      item = fn_83014400(self, &index, &extra);
      if (!NotNull_83014BF8(item)) {
        break;
      }
      if (fn_830149A0(self, item, index) == 1) {
        break;
      }
      fn_82FF4A38(lbl_83264304, self->f50, item, extra);
    }
  }
  return 1;
}
