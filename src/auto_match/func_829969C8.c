extern void fn_82954BD0(void *);
extern void *memset(void *, int, unsigned);
extern int lbl_82050BD0[];

int *fn_829969C8(int *self)
{
  fn_82954BD0(self);
  self[0x8c] = 0;
  self[0] = (int)lbl_82050BD0;
  self[0x8d] = 0;
  self[0x110] = -1;
  self[0x113] = 0;
  self[0xae] = 0;
  self[0xaf] = 0;
  self[0xb1] = 0;
  self[0xb0] = 0;
  memset(self + 0xb2, 0, 0x40);
  self[0x102] = 0;
  return self;
}
