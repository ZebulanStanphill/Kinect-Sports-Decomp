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


typedef struct Desc_82954828 { int pad; unsigned flags; } Desc_82954828;
typedef struct Item_82954828 { int pad; unsigned f4; int pad2; unsigned fc; unsigned f10; } Item_82954828;
typedef struct Obj_82954828 { char pad[0x10]; Desc_82954828 **descs; Item_82954828 **items; } Obj_82954828;
typedef struct Arg_82954828 { char pad[0x14]; int f14; int f18; } Arg_82954828;

int fn_82954828(Obj_82954828 *param_1, Arg_82954828 *param_2, unsigned *param_3)
{
  unsigned uVar4 = 0;
  Item_82954828 *it;
  unsigned v;

  if (param_2->f14 != -1) {
    it = param_1->items[param_2->f14];
    if ((param_1->descs[it->f4]->flags & 8) != 0) {
      v = it->fc & 0x7ff;
      uVar4 = v | 0xb0001000;
      v = it->f10;
      if (v >= 1) {
        if (v != 1) {
          if (v >= 3) {
            if (v == 3) uVar4 = uVar4 | 0xff0000;
          } else uVar4 = uVar4 | 0xaa0000;
        } else uVar4 = uVar4 | 0x550000;
      }
      if (param_2->f18 == 0) {
        uVar4 = uVar4 | 0xd000000;
      }
    }
  }
  if (param_3 != 0) {
    *param_3 = uVar4;
  }
  return 0;
}
