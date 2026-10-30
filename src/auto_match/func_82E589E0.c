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
extern int fn_82A28568();
extern int fn_82A2A360();
typedef struct E589 { int a; struct E589 *next; int c; } E589;
typedef struct Blk589 { struct Blk589 *next; E589 elems[1]; } Blk589;
typedef struct Pool589 { E589 *free; Blk589 *blocks; unsigned int count; } Pool589;

int fn_82E589E0(Pool589 *param_1, E589 **param_2)
{
  if (param_1->free == 0) {
    unsigned int n = param_1->count;
    unsigned int i;
    Blk589 *blk;
    E589 *e;
    blk = (Blk589 *)fn_82A28568(fn_82A2A360(), 0, (n - 1) * 0xc + 0x10);
    if (blk == 0) {
      return 0x8007000e;
    }
    for (i = 0; i < param_1->count; i++) {
      e = &blk->elems[i];
      e->next = param_1->free;
      param_1->free = e;
    }
    blk->next = param_1->blocks;
    param_1->blocks = blk;
  }
  *param_2 = param_1->free;
  param_1->free = param_1->free->next;
  return 0;
}
