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
struct Sub;
typedef struct SVT { char pad[0x30]; int (*f30)(struct Sub *); } SVT;
typedef struct Sub { SVT *vt; } Sub;
typedef struct It { char pad[0x3c]; Sub *sub; } It;
typedef struct L { char pad[8]; It **items; int count; } L;

int fn_82DFF630(L *l)
{
  int sum = 0;
  int i = 0;
  if (0 < l->count) {
    do {
      It *it = l->items[i];
      sum = it->sub->vt->f30(it->sub) + sum;
      i++;
    } while (i < l->count);
  }
  return sum;
}
