typedef struct Leaf_8285B568 { char pad[0x44]; unsigned int size; } Leaf_8285B568;
typedef struct Mid_8285B568 { char pad[0x44]; Leaf_8285B568 *leaf; } Mid_8285B568;
typedef struct Part_8285B568 { char pad[0x40]; Mid_8285B568 *mid; } Part_8285B568;
typedef struct Buf_8285B568 { char *str; char text[1]; } Buf_8285B568;
typedef struct Item_8285B568 { char pad[8]; int offset; } Item_8285B568;
typedef struct Self_8285B568 {
  char pad0[0x34];
  Part_8285B568 *parts[2];
  char pad1[0x44 - 0x3c];
  char *base;
} Self_8285B568;

void fn_8285B568(Self_8285B568 *self, Item_8285B568 *item)
{
  Buf_8285B568 *buf = (Buf_8285B568 *)(self->base + item->offset);
  char *text = buf->text;
  unsigned int total = 0;
  unsigned int i;
  int j;
  Part_8285B568 *parts[2];

  parts[0] = self->parts[0];
  parts[1] = self->parts[1];
  for (j = 0; j < 2; j++) {
    if (parts[j]->mid != 0 && parts[j]->mid->leaf != 0) {
      total += parts[j]->mid->leaf->size;
    }
  }
  buf->str = text;
  *text = 0;
  for (i = 0; i < total; i++) {
    buf->str[i + 1] = 0;
  }
}
