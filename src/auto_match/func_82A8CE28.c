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


struct If_82A8CE28;
typedef struct VT_82A8CE28 {
  void *s0;
  unsigned char (*f4)(struct If_82A8CE28 *);
  void *s8;
  unsigned char (*fc)(struct If_82A8CE28 *, int);
} VT_82A8CE28;
typedef struct If_82A8CE28 { VT_82A8CE28 *vt; } If_82A8CE28;
typedef struct Obj_82A8CE28 { int f0; If_82A8CE28 *f4; int f8; } Obj_82A8CE28;

unsigned char fn_82A8CE28(Obj_82A8CE28 *o)
{
  return o->f4->vt->f4(o->f4) && o->f4->vt->fc(o->f4, o->f8);
}
