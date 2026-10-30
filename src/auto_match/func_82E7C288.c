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


struct Obj_82E7C288;
typedef struct { char pad[8]; void (*f8)(struct Obj_82E7C288 *); } Vt_82E7C288;
typedef struct Obj_82E7C288 { Vt_82E7C288 *vt; } Obj_82E7C288;
typedef struct { Obj_82E7C288 *a; Obj_82E7C288 *b; } Pair_82E7C288;

void fn_82E7C288(Pair_82E7C288 *p)
{
  if (p->a != 0) {
    p->a->vt->f8(p->a);
    p->a = 0;
  }
  if (p->b != 0) {
    p->b->vt->f8(p->b);
    p->b = 0;
  }
}
