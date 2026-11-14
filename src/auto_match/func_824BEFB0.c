extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_8248A9A8();
extern int fn_824BE400();
extern int fn_824BE598();
extern int XMemSet();


void fn_824BEFB0(int *param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned char auStack_90 [48];
  unsigned char auStack_60 [64];
  
  if ((param_1[0x144] != 0) && (*(int *)(*(int *)(*param_1 + 0x14) + 0x20) != 0)) {
    uVar3 = fn_8248A9A8(param_1 + 0x44);
    iVar2 = fn_824BE400(param_1);
    if ((iVar2 != 0) && (lVar1 = (**(int (***)())(*(int *)*param_1 + 0x10))(), -1 < lVar1)) {
                    /* WARNING: Subroutine does not return */
      XMemSet(auStack_60,0,0x28);
    }
    iVar2 = fn_824BE598(uVar3,param_1,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      XMemSet(auStack_90,0,0x28);
    }
  }
  return;
}

