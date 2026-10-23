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
extern int fn_8267C498();
extern __int64 fn_8278FDC8();

typedef struct {
  int a0;
  int refs;
} Obj;

undefined8 fn_82724270(int param_1)
{
  int iVar1;
  Obj *o;
  undefined8 uVar2;

  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar1 != 0) {
    o = *(Obj **)(iVar1 + 0x14);
    if (o != 0) {
      o->refs = o->refs + 1;
      uVar2 = fn_8278FDC8((int)o + 0x14);
      fn_8267C498(o);
      return uVar2;
    }
  }
  return 0;
}
