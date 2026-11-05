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
typedef struct IF_82E5A200 { void (**vt)(struct IF_82E5A200 *); } IF_82E5A200;
typedef struct Obj_82E5A200 { char pad[0x88]; IF_82E5A200 *f88; } Obj_82E5A200;
extern int fn_82E62670(IF_82E5A200 *, unsigned *);
extern int fn_82E628C8(IF_82E5A200 *, unsigned);

int fn_82E5A200(Obj_82E5A200 *o, IF_82E5A200 *p)
{
  unsigned flags;
  int hr;

  if (p == 0) {
    return 0x80070057;
  }
  flags = 0;
  hr = 0;
  if (o->f88 != 0) {
    hr = fn_82E62670(o->f88, &flags);
    if (hr < 0) goto done;
    flags = flags & 0x7fffffff;
    hr = fn_82E628C8(o->f88, flags);
    if (hr < 0) goto done;
  }
  if (o->f88 != 0) {
    o->f88->vt[2](o->f88);
    o->f88 = 0;
  }
  hr = fn_82E62670(p, &flags);
  if (hr >= 0) {
    flags = flags | 0x80000000;
    hr = fn_82E628C8(p, flags);
    if (hr >= 0) {
      o->f88 = p;
      p->vt[1](p);
    }
  }
done:
  return hr;
}
