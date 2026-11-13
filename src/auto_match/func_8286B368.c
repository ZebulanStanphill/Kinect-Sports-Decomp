typedef struct Str_8286B368 {
  union { char buf[16]; char *ptr; } u;
  unsigned int size;
  unsigned int cap;
} Str_8286B368;

extern int fn_8260D428(Str_8286B368 *, unsigned int, unsigned int, const char *, unsigned int);
extern void fn_822DD818(Str_8286B368 *, Str_8286B368 *);

static __forceinline int Cmp_8286B368(Str_8286B368 *hi, Str_8286B368 *lo)
{
  unsigned int len = lo->size;
  const char *p;
  if (lo->cap >= 0x10) {
    p = lo->u.ptr;
  } else {
    p = lo->u.buf;
  }
  return fn_8260D428(hi, 0, hi->size, p, len);
}

static __forceinline void Order_8286B368(Str_8286B368 *hi, Str_8286B368 *lo)
{
  if (Cmp_8286B368(hi, lo) < 0) {
    fn_822DD818(hi, lo);
  }
}

void fn_8286B368(Str_8286B368 *a, Str_8286B368 *b, Str_8286B368 *c)
{
  Order_8286B368(b, a);
  Order_8286B368(c, b);
  Order_8286B368(b, a);
}
