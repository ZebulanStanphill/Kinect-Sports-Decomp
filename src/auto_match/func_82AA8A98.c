typedef struct Buf_82AA8A98 { unsigned char *data; int size; int pos; } Buf_82AA8A98;
typedef struct Obj_82AA8A98 { char pad[0x24]; int len; char pad2[0xc0]; Buf_82AA8A98 *buf; } Obj_82AA8A98;
extern void *memcpy(void *, const void *, unsigned);

int fn_82AA8A98(Obj_82AA8A98 *o, void *dst)
{
  Buf_82AA8A98 *b = o->buf;
  int size = b->size;
  unsigned char c;

  if (size < 0x28) {
    return -0xb;
  }
  b->pos = 0x28;
  if (size < 0x29) {
    return -0xc;
  }
  c = b->data[0x28];
  b->pos = 0x29;
  if (c != 0xff) {
    return -0x10;
  }
  if (size < o->len + 0x28) {
    return -0xc;
  }
  memcpy(dst, b->data + 0x29, o->len - 1);
  b->pos = b->pos + o->len - 1;
  return 0;
}
