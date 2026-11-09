typedef void *(*Alloc_828145E8)(void *ctx, unsigned int size, unsigned int align, int flags);
typedef struct Heap_828145E8 { void *fn0; void *fn4; void *fn8; Alloc_828145E8 alloc; } Heap_828145E8;

extern void *memset(void *dst, int value, unsigned int size);
extern Heap_828145E8 lbl_8320A4E8;

void *fn_828145E8(void *ctx, unsigned int size)
{
  void *p = lbl_8320A4E8.alloc(ctx, size, 4, 0);
  if (p != 0) {
    memset(p, 0, size);
  }
  return p;
}
