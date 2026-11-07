typedef struct Buffer_82BF72C8 {
  int unk0;
  int unk4;
  void *data;
  unsigned int count;
  int locked;
} Buffer_82BF72C8;

extern void fn_8265CA20(void *p);
extern void *(*lbl_831751D0)(unsigned int size);
extern void *memset(void *dst, int c, unsigned int n);

int fn_82BF72C8(Buffer_82BF72C8 *buf, unsigned int count, int alloc)
{
  if (buf != 0 && buf->locked == 0 && count != 0) {
    if (buf->data != 0) {
      fn_8265CA20(buf->data);
      buf->data = 0;
    }
    if (alloc != 0) {
      unsigned int size = count * 4;
      if (size < count) {
        return 0;
      }
      buf->data = lbl_831751D0(size);
      if (buf->data == 0) {
        return 0;
      }
      memset(buf->data, 0, size);
    }
    buf->count = count;
    return 1;
  }
  return 0;
}
