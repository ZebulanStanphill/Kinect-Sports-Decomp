extern int fn_82815268();
extern int fn_82820068();
extern int fn_82820158();
extern int fn_82820810();
extern int fn_82820BC0();
extern int fn_82F68CC0();
extern int (*lbl_8320A5C8)();


unsigned __int64 fn_82820CC0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  int *piVar9;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar4 = fn_82820158(iVar1);
  if (iVar4 == 0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x8000;
  }
  else {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x4000;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_82820810(iVar1);
    uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 4);
    piVar9 = (int *)(param_2 + 0x20);
    uVar2 = *(unsigned int *)(iVar1 + 0x28);
    uVar5 = ((unsigned __int64)uVar2 - (uVar6 + 0x3a & ~(uVar6 - 1))) + 0x3b;
    uVar5 = (((uVar5 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar5 == 0) & uVar5;
    lVar8 = uVar2 - uVar5;
    iVar4 = fn_82820068(param_2,(((uVar6 + uVar5) - 1 & ~(uVar6 - 1)) - (unsigned __int64)uVar2) +
                                  (unsigned __int64)*(unsigned int *)(iVar1 + 0x24) + lVar8 + 0x48,param_2,piVar9);
    if (iVar4 == 0) {
      *(int *)(*piVar9 + 0x3c) = (int)lVar8;
      iVar4 = *piVar9;
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(param_2 + 4);
      *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(param_2 + 8);
      *(unsigned int *)(param_2 + 8) = 0;
      *(unsigned int *)(param_2 + 0xc) = 0;
      *(unsigned int *)(param_2 + 0x10) = 0;
      if ((*(unsigned int *)(iVar4 + 0x10) & 2) != 0) {
        *(unsigned int *)(param_2 + 0x10) = 2;
      }
      if ((*(unsigned int *)(iVar4 + 0x10) & 0x1000) != 0) {
        *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x1000;
      }
      uVar2 = *(unsigned int *)(*piVar9 + 0x1c);
      fn_82F68CC0((unsigned __int64)uVar2,iVar1,0x3b);
      lVar7 = (unsigned __int64)uVar2 + 0x3b;
      if (*(char *)(iVar1 + 0x3a) != '\0') {
        if ((unsigned __int64)*(unsigned int *)(iVar1 + 0x28) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x24)) {
          lVar7 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x24) - (unsigned __int64)*(unsigned int *)(iVar1 + 0x28)) + lVar7
                  + 0x40;
        }
      }
      fn_82F68CC0(lVar7,iVar1 + 0x3b,lVar8);
      iVar1 = *(int *)(iVar4 + 8);
      if ((int)uVar5 < 1) {
        uVar3 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = iVar1 + (int)uVar5;
        if ((*(unsigned int *)(param_2 + 0x10) & 2) != 0) {
          (**(int (***)())(param_1 + 4))(*(unsigned int *)(iVar4 + 0x18));
          return 0;
        }
        uVar3 = (*lbl_8320A5C8)(*(unsigned int *)(param_2 + 0x18),iVar1,
                                (*(unsigned int *)(param_2 + 4) + uVar5) - 1 &
                                ~((unsigned __int64)*(unsigned int *)(param_2 + 4) - 1),lVar7 + lVar8);
      }
      uVar3 = fn_82820BC0(param_1,*piVar9,uVar3);
      return uVar3;
    }
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x2000;
  }
  uVar3 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
  return uVar3;
}

