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
extern unsigned int *auStack_30;
extern int fn_828D9AF0();
extern int fn_828D9E68();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern unsigned int fn_828E9FF8();


static __forceinline int bit_828D9F78(unsigned p) {
 int end=fn_828E9DA8(p); int pos=fn_828E9D90(p);
 if(end-pos<1)return 0;
 if(fn_828E9FF8(p,1))return 1;
 return 0;
}
void fn_828D9F78(int param_1,unsigned int param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  unsigned int uVar1;
  undefined1 auStack_30 [16];
  
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 >= 1) {
    iVar2 = fn_828E9FF8(param_2,1);
  }
  else {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x80) = iVar2;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (iVar2 == 1) {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 >= 7) {
      uVar4 = fn_828E9FF8(param_2,7);
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    while(bit_828D9F78(param_2)) {
      uVar1 = fn_828D9AF0(auStack_30,param_2);
      fn_828D9E68(param_1 + 0x84,uVar1);

    }
  }
  return;
}

