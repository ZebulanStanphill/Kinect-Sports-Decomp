extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82898B18(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  iVar1 = (int)param_1;
  iVar2 = (int)param_3;
  if ((*(int *)(iVar1 + 4) == 9) && (*(int *)(iVar2 + 4) == 7)) {
    *(unsigned int *)(iVar1 + 4) = 7;
    lVar7 = param_1 + 8;
    lVar6 = 4;
    *(unsigned int *)(iVar1 + 0x18) = *(unsigned int *)(iVar2 + 0x18);
    do {
      if (4 < *(unsigned int *)(iVar1 + 0x18)) {
        uVar5 = fn_8265C9E0(*(unsigned int *)(iVar2 + 0x18));
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar5,0,*(unsigned int *)(iVar2 + 0x18));
      }
      *(unsigned int *)lVar7 = 0;
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + 4;
    } while (lVar6 != 0);
  }
  else {
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar2 + 4);
  }
  if (*(int *)(iVar1 + 4) == 7) {
    iVar3 = (int)((param_4 + 2U & 0x3fffffff) << 2);
    iVar4 = (int)((param_2 + 2U & 0x3fffffff) << 2);
    if (*(unsigned int *)(iVar1 + 0x18) < 5) {
      *(unsigned int *)(iVar4 + iVar1) = *(unsigned int *)(iVar3 + iVar2);
    }
    else {
      fn_82F68CC0(*(unsigned int *)(iVar4 + iVar1),*(unsigned int *)(iVar3 + iVar2));
    }
  }
  else if (*(int *)(iVar1 + 4) == 8) {
    fn_82897ED8((param_2 + 2U & 0x3fffffff) * 4 + param_1,
                  (param_4 + 2U & 0x3fffffff) * 4 + param_3);
  }
  else {
    *(unsigned int *)((int)((param_2 + 2U & 0xffffffff) << 2) + iVar1) =
         *(unsigned int *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar2);
  }
  return;
}

