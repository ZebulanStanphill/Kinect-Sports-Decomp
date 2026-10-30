typedef struct Buf_82BF6E50 { int pad0; int pad4; void *data; unsigned int f0c; unsigned int size; } Buf_82BF6E50;
extern void *(*lbl_831751D0)(unsigned int);

int fn_82BF6E50(Buf_82BF6E50 *b, unsigned int n)
{
  if (n != 0 && (b->data == 0 || b->size <= 0)) {
    b->data = lbl_831751D0(n);
    b->f0c = 0;
    if (b->data != 0) {
      b->size = n;
      return 1;
    }
    b->data = 0;
    b->size = 0;
  }
  return 0;
}
