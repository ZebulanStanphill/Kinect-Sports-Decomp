typedef struct WStr_82865088 {
  union { unsigned short buf[8]; unsigned short *ptr; } u;
  unsigned size;
  unsigned res;
} WStr_82865088;
extern void fn_82864F80(WStr_82865088 *out, void *src);
extern void fn_82297DB0(WStr_82865088 *s, int a, int b);
extern int fn_82FE8948(unsigned short *p);

int fn_82865088(void *p)
{
  WStr_82865088 s;
  int r;
  unsigned short *cp;
  if (*(unsigned *)((char *)p + 0x10) == 0)
    return 0;
  fn_82864F80(&s, p);
  cp = s.u.ptr;
  if (s.res < 8) cp = s.u.buf;
  r = fn_82FE8948(cp);
  fn_82297DB0(&s, 1, 0);
  return r;
}
