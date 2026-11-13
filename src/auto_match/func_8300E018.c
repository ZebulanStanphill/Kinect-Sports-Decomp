extern int fn_82FEFD50();
extern int fn_8300D348();
extern int fn_8300DB40();
extern int fn_83036A08();
extern int fn_83036ED0();


void fn_8300E018(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int *piVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(unsigned int *)(*(int *)(iVar1 + 0xfc) + 8);
  }
  piVar4 = (int *)fn_82FEFD50(uVar5);
  if ((piVar4 != (int *)0x0) &&
     (uVar2 = fn_8300DB40(param_1,*(unsigned int *)(*piVar4 + 0xc)), (uVar2 & 0xffffffff) != 0))
  {
    uVar3 = fn_8300D348(param_1,uVar5);
    if (*(char *)(param_2 + 0x3a4) == '\0') {
      if (*(int *)(param_2 + 0x3a0) != 0) {
        fn_83036A08(uVar2,param_2,uVar3);
      }
    }
    else {
      fn_83036ED0(uVar2,param_2);
    }
  }
  return;
}

