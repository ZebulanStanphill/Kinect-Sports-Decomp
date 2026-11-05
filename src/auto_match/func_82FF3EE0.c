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
extern void fn_830016B0(void *);
extern char lbl_8217BB98[];
extern char lbl_8217C940[];
typedef struct Sub { int f7c; unsigned short f80, f82, f84; } Sub;
typedef struct Obj { void *vt; char pad4[0x1c-4]; void *vt1c; char pad20[0x7c-0x20]; Sub sub; } Obj;
Obj *fn_82FF3EE0(Obj *o)
{
  Sub *s;
  fn_830016B0(o);
  o->vt = lbl_8217BB98;
  o->vt1c = lbl_8217C940;
  s = &o->sub;
  s->f80 = 0;
  s->f82 = 0;
  s->f84 = 1;
  s->f7c = 0;
  return o;
}
