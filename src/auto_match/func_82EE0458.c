extern void *memcpy(void *, const void *, unsigned int);

typedef struct Buf_82EE0458 {
  unsigned short a;
  unsigned short b;
  unsigned int c;
  unsigned short len1;
  unsigned short pad;
  void *ptr1;
  unsigned int len2;
  void *ptr2;
} Buf_82EE0458;

int fn_82EE0458(int unused, Buf_82EE0458 *src, Buf_82EE0458 *dst)
{
  int r;
  if (src == 0 || dst == 0) {
    return 0x80070057;
  }
  r = 0;
  dst->a = src->a;
  dst->b = src->b;
  dst->c = src->c;
  if (dst->ptr1 == 0 || src->ptr1 == 0) {
    dst->ptr1 = 0;
  } else if (dst->len1 >= src->len1) {
    memcpy(dst->ptr1, src->ptr1, src->len1);
  } else {
    r = 0xc00d36b1;
  }
  dst->len1 = src->len1;
  if (dst->ptr2 == 0 || src->ptr2 == 0) {
    dst->ptr2 = 0;
  } else if (dst->len2 >= src->len2) {
    memcpy(dst->ptr2, src->ptr2, src->len2);
  } else {
    r = 0xc00d36b1;
  }
  dst->len2 = src->len2;
  return r;
}
