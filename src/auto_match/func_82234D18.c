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
typedef struct Str_822340A8 { int pad0, pad4; union { char buf[4]; char *ptr; } u; unsigned cap; } Str_822340A8;
extern void fn_8223C200(void *, int, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);

void fn_82234D18(void *a, void *b, void *w, Str_822340A8 *s)
{
  unsigned char *p;
  unsigned char *q;
  int n;
  unsigned char z;
  unsigned char e;
  unsigned char c;
  int bits;
  unsigned i;

  if (s->cap <= 4) p = (unsigned char *)s->u.buf; else p = (unsigned char *)s->u.ptr;
  q = p;
  n = 0;
  for (; q != p + 4; q++) {
    if (*q == '\0') n++;
  }
  z = (n == 4);
  fn_8223C200(w, z, 0);
  if (!(z & 1)) {
    i = 0;
    do {
      c = p[i];
      e = (c == '\0');
      fn_8223C200(w, e, 0);
      if (!(e & 1)) {
        if (i == 3) bits = 1; else bits = 8;
        fn_8223C478(w, bits, 0);
        fn_828E9DB8(w, c, bits);
      }
      i++;
    } while (i < 4);
  }
}
