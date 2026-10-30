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


typedef struct { char pad0[0xc]; struct Item_8279A8D8 **items; unsigned int count; } Mgr_8279A8D8;
typedef struct { char pad[8]; Mgr_8279A8D8 *mgr; } Obj_8279A8D8;
typedef struct { char pad[0x16]; unsigned short flags; } Inner_8279A8D8;
typedef struct Item_8279A8D8 { char pad[0xc]; Inner_8279A8D8 *inner; } Item_8279A8D8;
int fn_8279A8D8(Obj_8279A8D8 *param_1)
{
  Mgr_8279A8D8 *m = param_1->mgr;
  unsigned int n = m->count;
  unsigned int i = 0;
  Item_8279A8D8 *it;
  if (m->count == 0) return 0;
  do {
    if (i < m->count) it = m->items[i]; else it = 0;
    if (it->inner->flags & 0x600) return 1;
    i++;
  } while (i < n);
  return 0;
}
