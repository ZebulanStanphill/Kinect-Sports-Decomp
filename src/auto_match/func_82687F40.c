typedef struct { void *p; } Ref;
extern void fn_8267C4C8(void *p);
void fn_82687F40(Ref *dst, Ref *src)
{
  if (dst != 0) {
    if (src->p != 0) fn_8267C4C8(src->p);
    dst->p = src->p;
  }
}

