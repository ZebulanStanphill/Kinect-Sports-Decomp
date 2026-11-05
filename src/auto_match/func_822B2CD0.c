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
extern void fn_822B2D28(void *);
extern void fn_8265CA20(void *);
extern char lbl_821AC97C[];

typedef struct Obj_822B2CD0 {
  void *vt;
  void *a;
  void *b;
} Obj_822B2CD0;

void fn_822B2CD0(Obj_822B2CD0 *o)
{
  o->vt = lbl_821AC97C;
  if (o->a != 0) {
    fn_8265CA20(o->a);
  }
  if (o->b != 0) {
    fn_822B2D28(o->b);
  }
}
