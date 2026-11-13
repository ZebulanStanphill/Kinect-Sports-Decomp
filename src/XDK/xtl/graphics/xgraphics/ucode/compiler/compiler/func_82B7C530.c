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
extern void fn_82BA70A8(unsigned int);

typedef struct {
  char pad0[0x550];
  unsigned int f550;
  char pad554[0x59c - 0x554];
  void (*free)(unsigned int, unsigned int);
  char pad5a0[4];
  unsigned int heap;
  unsigned int slots[3];
} Obj_82B7C530;

void fn_82B7C530(Obj_82B7C530 *o, unsigned char param_2)
{
  int n;
  unsigned int *p;

  if (param_2 != 0) {
    o->free(o->heap, o->f550);
  }
  p = o->slots;
  n = 3;
  do {
    if (*p != 0) {
      fn_82BA70A8(*p);
      o->free(o->heap, *p);
      *p = 0;
    }
    n = n - 1;
    p = p + 1;
  } while (n != 0);
}
