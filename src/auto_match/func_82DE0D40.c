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
typedef struct { void *data; int size; int cap; } Arr_82DE0D40;
typedef struct { int *vt; } Alloc_82DE0D40;
typedef struct { char pad[0x10]; Alloc_82DE0D40 *heap; } Router_82DE0D40;
extern Router_82DE0D40 *fn_82CE5410();


void fn_82DE0D40(char *param_1)
{
  Alloc_82DE0D40 *h;
  Arr_82DE0D40 *a = (Arr_82DE0D40 *)(param_1 + 0x34);
  h = fn_82CE5410()->heap;
  a->size = 0;
  if ((a->cap & (int)0x80000000) == 0) {
    (*(void (*)(Alloc_82DE0D40 *, void *, int, int))(*(int *)((char *)h->vt + 0x10)))(h, a->data, a->cap & 0x3fffffff, 4);
  }
  a->data = 0;
  a->cap = (int)0x80000000;
}
