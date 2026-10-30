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
typedef struct { int v[5]; } Item_82D35128;
typedef struct { unsigned short *data; int size; } Vec_82D35128;
typedef struct { Item_82D35128 *items; unsigned int cap; int pad; Vec_82D35128 free; } Pool_82D35128;
extern void fn_82D34E10(Pool_82D35128 *, unsigned int, __int64, __int64);
static unsigned short back(Vec_82D35128 *v) { return v->data[v->size - 1]; }
static void pop_back(Vec_82D35128 *v) { v->size--; }
unsigned short fn_82D35128(Pool_82D35128 *param_1,__int64 param_2,__int64 param_3,Item_82D35128 *param_4)
{
  unsigned short idx;
  if (param_1->free.size == 0) {
    fn_82D34E10(param_1,(param_1->cap + 0x80) & 0xffff,param_2,param_3);
  }
  idx = back(&param_1->free);
  pop_back(&param_1->free);
  param_1->items[idx] = *param_4;
  return idx;
}
