typedef struct Elem_82E6DE58 {
  char pad0[0xe4];
  int state;
  char pad1[0x12c - 0xe8];
  float rect[4];
  char pad2[0x18c - 0x13c];
  float value;
  char pad3[0x1d0 - 0x190];
} Elem_82E6DE58;

typedef struct Info_82E6DE58 {
  char pad0[0x22];
  unsigned short count;
} Info_82E6DE58;

void fn_82E6DE58(Info_82E6DE58 **self, Elem_82E6DE58 *dst, Elem_82E6DE58 *src)
{
  Info_82E6DE58 *info = *self;
  short i;
  for (i = 0; i < info->count; i++) {
    dst->state = src->state;
    dst->rect[0] = src->rect[0];
    dst->rect[1] = src->rect[1];
    dst->rect[2] = src->rect[2];
    dst->rect[3] = src->rect[3];
    dst->value = src->value;
    dst++;
    src++;
  }
}
