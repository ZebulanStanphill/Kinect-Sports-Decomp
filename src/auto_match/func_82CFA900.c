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


struct Inner_82CFA900;
typedef struct VT_82CFA900 {
  void *f[10];
  void (*f28)(struct Inner_82CFA900 *);
} VT_82CFA900;
typedef struct Inner_82CFA900 {
  VT_82CFA900 *vt;
} Inner_82CFA900;
typedef struct Obj_82CFA900 {
  int pad0[2];
  Inner_82CFA900 *inner;
  int pad1[1];
  int f10;
  int f14;
  int pad2[1];
  int f1c;
  int f20;
} Obj_82CFA900;

void fn_82CFA900(Obj_82CFA900 *o)
{
  o->f1c = -1;
  o->f20 = -1;
  o->f10 = 0;
  o->f14 = 0;
  o->inner->vt->f28(o->inner);
}
