typedef struct Item_827F7608 {
  char data[0x40];
} Item_827F7608;

typedef struct Self_827F7608 {
  int pad0[3];
  Item_827F7608 *items;     /* 0x0c */
} Self_827F7608;

extern void fn_827F98C8(Self_827F7608 *self, unsigned int index, int *out);
extern unsigned int fn_827F7218(Self_827F7608 *self, unsigned int index);
extern void fn_82800A48(Self_827F7608 *self, unsigned int index, int *out);
extern void fn_8280CB70(Item_827F7608 *dst, int value, Item_827F7608 *src);

void fn_827F7608(Self_827F7608 *self, unsigned int index)
{
  int value;
  int a;
  int b;
  Item_827F7608 *src;
  Item_827F7608 *dst;
  unsigned int other;

  fn_827F98C8(self, index, &a);
  src = &self->items[index];
  other = fn_827F7218(self, index);
  fn_827F98C8(self, other, &b);
  dst = &self->items[other];
  fn_82800A48(self, index, &value);
  fn_8280CB70(dst, value, src);
}
