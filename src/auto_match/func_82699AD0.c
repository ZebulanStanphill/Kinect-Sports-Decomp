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
typedef struct Item { void (**vt)(struct Item *); int pad[7]; int m20; } Item;
typedef struct { Item **items; unsigned count; int m8; int mc; } Arr;
extern void fn_82699740(Arr *, int);

void fn_82699AD0(Arr *a)
{
  unsigned n = a->count;
  unsigned i;
  a->mc = 0;
  for (i = 0; i < n; i++) {
    Item **p = &a->items[i];
    (*p)->vt[0x74 / 4](*p);
    (*p)->m20 = 0;
  }
  fn_82699740(a, 0);
}
