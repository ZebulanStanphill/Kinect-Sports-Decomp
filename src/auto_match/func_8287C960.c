typedef struct WStr_8287C960 { union { unsigned short buf[8]; unsigned short *ptr; } u; unsigned size; unsigned res; } WStr_8287C960;
typedef struct Str_8287C960 { union { char buf[16]; char *ptr; } u; unsigned size; unsigned res; } Str_8287C960;
extern char *fn_8265CA60(unsigned);
extern void fn_8265CAA0(void *);
extern int fn_82F64020(char *, unsigned, const char *, ...);
extern void fn_82230360(Str_8287C960 *, const char *, unsigned);
Str_8287C960 *fn_8287C960(Str_8287C960 *dst, WStr_8287C960 *src)
{
  unsigned n = src->size;
  char *buf = fn_8265CA60(n + 1);
  const unsigned short *p = src->res >= 8 ? src->u.ptr : src->u.buf;
  const char *e;
  unsigned len;
  fn_82F64020(buf, n + 1, "%S", p);
  dst->size = 0;
  dst->res = 15;
  dst->u.buf[0] = 0;
  len = strlen(buf);
  fn_82230360(dst, buf, len);
  fn_8265CAA0(buf);
  return dst;
}
