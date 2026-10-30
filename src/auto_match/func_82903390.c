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
typedef struct { int pad0[2]; unsigned int count; int pad1[2]; int *items; } Mgr_82903390;
typedef struct { char pad[8]; Mgr_82903390 *mgr; } Obj_82903390;
typedef struct { char pad[0x68]; void *f68; } Item_82903390;

int fn_82903390(Obj_82903390 *param_1,unsigned int *param_2,unsigned int param_3)
{
  unsigned int i;
  for (i = 0; i < param_3; i++) {
    Mgr_82903390 *m = param_1->mgr; unsigned int idx = param_2[i]; Item_82903390 *it = idx < m->count ? (Item_82903390 *)m->items[idx] : 0;
    if (it == 0 || it->f68 == 0) return 0;
  }
  return 1;
}
