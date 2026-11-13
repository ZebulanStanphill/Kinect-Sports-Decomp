typedef struct Str_822340A8 { int pad0, pad4; union { char buf[4]; char *ptr; } u; unsigned cap; } Str_822340A8;
extern void fn_8223C200(void *, int, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);

void fn_82245940(void *a, void *b, void *w, Str_822340A8 *s)
{
  unsigned char *p;
  unsigned char c;
  unsigned char z;

  if (s->cap <= 4) p = (unsigned char *)s->u.buf; else p = (unsigned char *)s->u.ptr;
  c = *p;
  z = (c == '\0');
  fn_8223C200(w, z, 0);
  if (!(z & 1)) {
    fn_8223C478(w, 1, 0);
    fn_828E9DB8(w, c, 1);
  }
}
