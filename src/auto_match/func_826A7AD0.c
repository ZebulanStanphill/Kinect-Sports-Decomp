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
typedef struct RC_826A7AD0 { int a; int b; int rc; } RC_826A7AD0;
typedef struct Mid_826A7AD0 { char pad[8]; RC_826A7AD0 *f8; char pad2[0x254 - 0xc]; char tab[1]; } Mid_826A7AD0;
typedef struct Ctx_826A7AD0 { char pad[0x78]; Mid_826A7AD0 *f78; } Ctx_826A7AD0;
extern void fn_826944C8(RC_826A7AD0 *);
extern RC_826A7AD0 *fn_82694700(char *, unsigned char *);

RC_826A7AD0 **fn_826A7AD0(RC_826A7AD0 **out, unsigned char **in, Ctx_826A7AD0 *c)
{
  RC_826A7AD0 *p;
  RC_826A7AD0 *q;
  unsigned char b;
  int n;

  n = c->f78->f8->rc;
  p = c->f78->f8;
  *out = p;
  p->rc = n + 1;
  b = **in;
  if ((b & 1) != 0 && (b & 4) == 0) {
    q = fn_82694700(c->f78->tab, *in + 7);
    p = *out;
    q->rc = q->rc + 2;
    n = p->rc - 1;
    p->rc = n;
    if (n == 0) {
      fn_826944C8(p);
    }
    n = q->rc;
    *out = q;
    n = n - 1;
    q->rc = n;
    if (n == 0) {
      fn_826944C8(q);
    }
  }
  return out;
}
