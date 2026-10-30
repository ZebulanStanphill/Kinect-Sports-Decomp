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
typedef struct {
  void *vt;
  char pad0[0x20 - 4];
  struct { int a; int b; unsigned char c; } sub;
  int f2c;
  int f30;
  unsigned f34;
  int f38;
  char pad2[0x7c - 0x3c];
  int f7c;
  int f80;
  int f84;
  int f88;
  int f8c;
  unsigned char f90;
  unsigned char f91;
  char pad3[2];
  int f94;
  int f98;
  int f9c;
  int fa0;
} Obj_830331B8;
extern void fn_8303D878(Obj_830331B8 *);
extern void fn_83032B08(int);
extern char lbl_8217D044[];

Obj_830331B8 *fn_830331B8(Obj_830331B8 *o, int a, int b, int *p)
{
  unsigned v;
  struct { int a; int b; unsigned char c; } *s;

  fn_8303D878(o);
  o->vt = lbl_8217D044;
  s = &o->sub;
  s->a = 0;
  s->b = 0;
  s->c = s->c & 0x3f;
  v = *p;
  o->f34 = v;
  if (v != 0) fn_83032B08(v);
  o->f7c = 0;
  o->f80 = 0;
  o->f84 = 0;
  o->f88 = 0;
  o->f8c = 0;
  o->f90 = 1;
  o->f91 = 0;
  o->f94 = 0;
  o->f98 = 0;
  o->f9c = 0;
  o->fa0 = 0;
  o->f38 = 0;
  o->f2c = 0;
  o->f30 = 0;
  return o;
}
