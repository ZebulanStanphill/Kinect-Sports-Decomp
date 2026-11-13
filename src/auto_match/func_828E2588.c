extern unsigned int *auStack_30;
extern int fn_828D81E8();
extern int fn_828E24D8();
extern int fn_82F622E0();


void fn_828E2588(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned char auStack_30 [48];
  
  piVar3 = (int *)(param_1 + 0xc);
  fn_828D81E8(auStack_30,piVar3,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10)
                   );
  fn_828E24D8(piVar3,param_2);
  uVar2 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = 0;
    do {
      if ((unsigned __int64)(unsigned int)((*(int *)(param_1 + 0x10) - *piVar3) / 0x1c) <= (uVar2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      uVar2 = uVar2 + 1;
      *(unsigned int *)(iVar1 + *piVar3) = 0;
      iVar1 = iVar1 + 0x1c;
    } while ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  *(int *)(param_1 + 8) = (int)param_2;
  return;
}

