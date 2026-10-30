typedef struct Blk_826D69D0 { struct Blk_826D69D0 *prev; } Blk_826D69D0;
typedef struct Pool_826D69D0 { char *cur; unsigned left; Blk_826D69D0 *blocks; void *heap; } Pool_826D69D0;
extern Blk_826D69D0 *fn_8267B890(void *, int, int);
extern void *fn_826D6470(Pool_826D69D0 *, unsigned);

void *fn_826D69D0(Pool_826D69D0 *p, unsigned n)
{
  char *r;
  if (n > 0xffa)
    return fn_826D6470(p, n);
  if (n > p->left) {
    Blk_826D69D0 *b = fn_8267B890(p->heap, 0x1ff8, 0);
    if (b == 0)
      return 0;
    b->prev = p->blocks;
    p->blocks = b;
    p->cur = (char *)(b + 1);
    p->left = 0x1ff4;
  }
  r = p->cur;
  p->cur += n;
  p->left -= n;
  return r;
}
