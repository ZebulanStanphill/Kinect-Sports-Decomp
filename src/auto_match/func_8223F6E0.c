typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct { int a; int b; } P8_8223F6E0;
extern P8_8223F6E0 *fn_8223F670(P8_8223F6E0 *, void *, P8_8223F6E0, const char *, unsigned);
extern P8_8223F6E0 *fn_8223F7A8(P8_8223F6E0 *, void *, P8_8223F6E0, char, unsigned);
extern char *memchr(const char *, int, unsigned);
P8_8223F6E0 *fn_8223F6E0(P8_8223F6E0 *out, void *os, P8_8223F6E0 state, const char *p, unsigned len, char sep)
{
  P8_8223F6E0 t1;
  P8_8223F6E0 t2;
  P8_8223F6E0 *r;
  int a, b;
  for (;;) {
    char *q = memchr(p, 0, len);
    unsigned n;
    if (q != 0) n = q - p; else n = len;
    r = fn_8223F670(&t1, os, state, p, n);
    state = *r;
    len -= n;
    p += n;
    if (len == 0) break;
    if (sep != 0) {
      r = fn_8223F7A8(&t2, os, state, sep, 1);
      state = *r;
    }
    p++;
    len--;
  }
  a = r->a; b = r->b; out->b = b; out->a = a;
  return out;
}
