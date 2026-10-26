extern void *memcpy(void *, const void *, unsigned int);
extern void *fn_8267B890(void *, int, int);

typedef struct { unsigned short *data; int len; int cap; } Str;
typedef struct { char pad[0x1c]; void *heap; } Ctx;

Str *fn_8278FB30(Str *dst, const Str *src, Ctx *ctx)
{
  dst->data = (unsigned short *)fn_8267B890(ctx->heap, src->len * 2, 0);
  dst->cap = dst->len = src->len;
  memcpy(dst->data, src->data, src->len * 2);
  return dst;
}
