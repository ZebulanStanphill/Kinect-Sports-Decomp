typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;



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
extern "C" int fn_826944C8(...);
extern "C" int fn_826957D0(...);
extern "C" int fn_82696330(...);
extern "C" int fn_82696D38(...);
extern "C" int fn_8269A1F0(...);
struct Iface_826A1A78 {virtual void vf00();virtual void vf04();virtual void vf08();virtual void vf0c(unsigned,void*,unsigned,void*);};
extern "C" void fn_826A1A78(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int lVar3;
  int lVar4;
  undefined1 auStack_50;
  int aiStack_4c;int *ref;
  undefined1 auStack_40 [16];

  lVar4 = 0;
  auStack_40[0] = 0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    do {
      fn_8269A1F0(auStack_40,lVar4);
      auStack_50 = 0;
      fn_82696D38(&aiStack_4c,auStack_40,*(undefined4 *)(param_2 + 0x18),0xffffffff,0);
      ((Iface_826A1A78 *)(param_1+16))->vf0c(*(unsigned*)(param_2+24),&aiStack_4c,fn_826957D0(param_2,lVar4),&auStack_50);
      ref=(int*)aiStack_4c;lVar3=ref[2]-1;ref[2]=lVar3;
      if (lVar3 == 0) {
        fn_826944C8(ref);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(param_2 + 0x1c));
  }
  fn_82696330(auStack_40);
  return;
}
