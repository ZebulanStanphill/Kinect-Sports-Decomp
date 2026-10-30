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


typedef struct VT_8305B750 {
  void *s[5];
  void (*f14)(void *, void *);
  void (*f18)(void *, void *);
  void (*f1c)(void *, void *);
} VT_8305B750;
typedef struct Obj_8305B750 {
  VT_8305B750 *vt;
  int f4;
  void *f8;
  void *fc;
  void *f10;
} Obj_8305B750;

void fn_8305B750(Obj_8305B750 *o)
{
  if (o->f8 != 0) {
    o->vt->f14(o, o->f8);
  }
  if (o->fc != 0) {
    o->vt->f18(o, o->fc);
  }
  if (o->f10 != 0) {
    o->vt->f1c(o, o->f10);
  }
}
