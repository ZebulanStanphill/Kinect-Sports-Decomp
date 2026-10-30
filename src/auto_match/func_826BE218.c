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
extern void fn_826944C8(void *);


typedef struct Rc_826BE218 { int a; int b; int count; } Rc_826BE218;
typedef struct Sub_826BE218 { int x[4]; } Sub_826BE218;
typedef struct Obj_826BE218 { Rc_826BE218 *rc; int pad; Sub_826BE218 s1; Sub_826BE218 s2; } Obj_826BE218;
extern int fn_826C3768(void *, void *);
extern int fn_82695FA0(void *, void *);
Obj_826BE218 *fn_826BE218(Obj_826BE218 *d, Obj_826BE218 *s)
{
  Rc_826BE218 *r = s->rc;
  Rc_826BE218 *old;
  char *ps, *pd;
  r->count++;
  old = d->rc;
  if (--old->count == 0) fn_826944C8(old);
  d->rc = r;
  ps = (char *)s + 8;
  pd = (char *)d + 8;
  fn_826C3768(pd, ps);
  fn_82695FA0(pd + 0x10, ps + 0x10);
  return d;
}
