typedef struct Ctx_825F0518 {
  int pad[0xf];
  int e3c;
} Ctx_825F0518;

typedef struct Src_825F0518 {
  unsigned int data;
  unsigned int size;
  unsigned int kind;
} Src_825F0518;

typedef struct Dst_825F0518 {
  int key;
  Ctx_825F0518 *ctx;
} Dst_825F0518;

extern int fn_825F0B68(Ctx_825F0518 *ctx, unsigned int data, unsigned int size, int key);
extern void fn_825F0D40(Ctx_825F0518 *ctx, int key);

int fn_825F0518(Src_825F0518 *src, int param_2, Dst_825F0518 *dst)
{
  if (dst != 0 && src != 0 && src->kind == 0x23 && src->data != 0 && src->size != 0 &&
      src->size < 0x100000 && fn_825F0B68(dst->ctx, src->data, src->size, dst->key) != 0) {
    if (dst->ctx->e3c == dst->key) {
      fn_825F0D40(dst->ctx, dst->key);
    }
    return 1;
  }
  return 0;
}
