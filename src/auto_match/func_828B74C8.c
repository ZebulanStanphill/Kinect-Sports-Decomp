#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_828B7258();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;


void fn_828B74C8(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int uStack_3c;
  unsigned __int64 uVar3;
  
  param_2 = param_2 - (int)param_1;
  uVar1 = param_2 >> 3;
  uVar4 = (__int64)(param_2 >> 4) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (__int64)uVar4) {
    uVar3 = (uVar4 & 0x1fffffff) * 8 + param_1;
    do {
      uVar2 = uVar3 - 8;
      uStack_3c = 0;
      uVar4 = uVar4 - 1;
      if ((ZEXT48(&stack0x00000000) - 0x40 & 0xffffffff) != (uVar2 & 0xffffffff)) {
        uStack_3c = *(int *)((int)uVar3 + -4);
        *(unsigned int *)((int)uVar3 + -4) = 0;
        *(unsigned int *)uVar2 = 0;
      }
      fn_828B7258(param_1,uVar4,uVar1,ZEXT48(&stack0x00000000) - 0x40,param_3);
      if (uStack_3c != 0) {
        fn_822315A0();
      }
      uVar3 = uVar2;
    } while (0 < (int)uVar4);
  }
  return;
}

