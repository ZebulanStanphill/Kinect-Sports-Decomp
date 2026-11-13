extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82243568(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  iVar2 = (int)param_1;
  iVar3 = (int)param_3;
  if ((*(int *)(iVar2 + 4) == 9) && (*(int *)(iVar3 + 4) == 7)) {
    *(unsigned int *)(iVar2 + 4) = 7;
    uVar1 = *(unsigned int *)(iVar3 + 0xc);
    *(unsigned int *)(iVar2 + 0xc) = uVar1;
    if (4 < uVar1) {
      uVar6 = fn_8265C9E0(*(unsigned int *)(iVar3 + 0xc));
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar6,0,*(unsigned int *)(iVar3 + 0xc));
    }
    *(unsigned int *)(iVar2 + 8) = 0;
  }
  else {
    *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar3 + 4);
  }
  uVar7 = param_2 + 2;
  if (*(int *)(iVar2 + 4) == 7) {
    iVar4 = (int)((param_4 + 2U & 0x3fffffff) << 2);
    iVar5 = (int)((uVar7 & 0x3fffffff) << 2);
    if (*(unsigned int *)(iVar2 + 0xc) < 5) {
      *(unsigned int *)(iVar5 + iVar2) = *(unsigned int *)(iVar4 + iVar3);
    }
    else {
      fn_82F68CC0(*(unsigned int *)(iVar5 + iVar2),*(unsigned int *)(iVar4 + iVar3));
    }
  }
  else if (*(int *)(iVar2 + 4) == 8) {
    fn_82897ED8((uVar7 & 0x3fffffff) * 4 + param_1,(param_4 + 2U & 0x3fffffff) * 4 + param_3);
  }
  else {
    *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + iVar2) =
         *(unsigned int *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar3);
  }
  return;
}

