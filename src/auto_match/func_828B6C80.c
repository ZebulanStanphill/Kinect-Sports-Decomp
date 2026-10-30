typedef struct { void *ptr; void *rep; } SP_828B6C80;
extern void fn_822315A0(void *);
static void swp(void **a, void **b) { void *t = *a; *a = *b; *b = t; }

SP_828B6C80 *fn_828B6C80(SP_828B6C80 *first, SP_828B6C80 *last, SP_828B6C80 *dest)
{
  while (first != last) {
    SP_828B6C80 tmp;
    void *old;
    --last;
    --dest;
    tmp.ptr = 0;
    tmp.rep = 0;
    if (&tmp != last) {
      swp(&tmp.rep, &last->rep);
      swp(&tmp.ptr, &last->ptr);
    }
    old = dest->rep;
    dest->rep = tmp.rep;
    dest->ptr = tmp.ptr;
    if (old != 0)
      fn_822315A0(old);
  }
  return dest;
}
