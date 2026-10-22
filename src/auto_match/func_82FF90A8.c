extern int fn_82FA4F18(int heap);
extern void fn_82FA5190(int heap, void *p);
extern void fn_82FA5358(int heap, void *p);
extern void fn_82FA57F0(int heap);
typedef struct Buf { char pad[0x10]; void *data; int pad14; int heap; unsigned char ownsHeap; } Buf;
void fn_82FF90A8(Buf *b) {
  if (b->data != 0) {
    if (fn_82FA4F18(b->heap) & 8) fn_82FA5358(b->heap, b->data);
    else fn_82FA5190(b->heap, b->data);
    b->data = 0;
    if (b->ownsHeap) {
      fn_82FA57F0(b->heap);
      b->heap = -1;
    }
  }
}
