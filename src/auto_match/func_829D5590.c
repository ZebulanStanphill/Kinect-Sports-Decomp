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


typedef struct { int a, b; } Pair_829D5590;
typedef struct { int tag; int count; Pair_829D5590 items[2]; } Msg_829D5590;
extern Pair_829D5590 lbl_8205788C[];

Msg_829D5590 *fn_829D5590(Msg_829D5590 *p)
{
  int i;
  p->count = 2;
  for (i = 0; i < 2; i++) {
    p->items[i].a = lbl_8205788C[i].a;
    p->items[i].b = lbl_8205788C[i].b;
  }
  p->tag = 0x34;
  return (Msg_829D5590 *)((int *)p + (p->count + 1) * 2);
}
