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
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696BC8();


typedef struct RC_8274E0E0 { int a; int b; int rc; } RC_8274E0E0;
typedef struct Obj_8274E0E0 { int f0; unsigned char *f4; char pad[0x10]; int f18; int f1c; } Obj_8274E0E0;
extern void fn_826959C8(unsigned char *);
extern int fn_826957D0(Obj_8274E0E0 *, int);
extern int fn_82696D38();
extern int fn_8274DC30(int, RC_8274E0E0 **);

void fn_8274E0E0(Obj_8274E0E0 *o)
{
  unsigned char *b;
  int a;
  int lVar4;
  unsigned u;
  RC_8274E0E0 *it[2];
  RC_8274E0E0 *p;

  b = o->f4;
  fn_826959C8(b);
  *b = 1;
  if (o->f1c >= 1) {
    a = o->f18;
    u = fn_826957D0(o, 0);
    fn_82696D38(it, u, a, -1, 0);
    lVar4 = fn_8274DC30(o->f18, it);
    if (lVar4 != 0) {
      fn_82696BC8(o->f4, lVar4);
      fn_826824B0(lVar4);
    }
    p = it[0];
    if (--p->rc == 0) {
      fn_826944C8(p);
    }
  }
}
