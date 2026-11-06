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
typedef unsigned int undefined8;
typedef unsigned int ulonglong;
typedef unsigned __int64 qword;
typedef int longlong;
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
extern unsigned fn_827B0790(int,unsigned);


undefined8 fn_827B1400(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int lVar2;
  unsigned int uVar3;
  
  uVar1 = fn_827B0790(param_1,param_2);
  lVar2 = fn_827B0790(param_3,param_4);
  if ((uVar1 - param_2) != (lVar2 - param_4)) return 0;
 {
    if ((param_2) < (uVar1)) {
      do {
        if (*(char *)(*(int *)(((uint)param_2 >> 10 & 0x3ffffc) +
                              *(int *)(*(int *)(param_1 + 0xc) + 0xc)) + ((uint)param_2 & 0xfff)) !=
            *(char *)(*(int *)(((uint)param_4 >> 10 & 0x3ffffc) +
                              *(int *)(*(int *)(param_3 + 0xc) + 0xc)) + ((uint)param_4 & 0xfff)))
        return 0;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
      } while ((param_2) < (uVar1));
    }
    uVar3 = 1;
  }
  return uVar3;
}
