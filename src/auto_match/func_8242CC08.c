extern int fn_82358810();
extern int fn_8242E5C0();


unsigned __int64 fn_8242CC08(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x174);
  iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4);
  if (param_2 == 0) {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar5 + 0x40) + 0x1c8) != 0) {
      if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
      }
      if (((*(int *)(*(int *)(iVar2 + 0x40) + 0xf0) == 0) &&
          (iVar2 = fn_8242E5C0(param_1), iVar2 == 0)) &&
         (iVar2 = fn_82358810(param_1,0), iVar2 != 0)) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  else {
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x40) + 0x1c0);
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar6 + 0x40) + 0x148);
    uVar7 = uVar3 + 1;
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar2 + 0x40) + 0x154);
    if ((((uVar7 & 0xffffffff) != 1) || (iVar2 = fn_8242E5C0(param_1), iVar2 != 0)) ||
       (uVar4 = 1, iVar5 != 0)) {
      uVar4 = 0;
    }
    if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
      if ((*(int *)(*(int *)(param_1 + 0x174) + 0xc4) == 0) || (uVar3 = 1, iVar5 != 0)) {
        uVar3 = 0;
      }
      uVar4 = uVar3 | uVar4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x174);
      if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
      }
      iVar6 = *(int *)(**(int **)(iVar6 + 0x40) + 0xa0);
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x150) != 0)) && (iVar5 == 0)) {
        if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
        }
        if ((*(int *)(*(int *)(iVar5 + 0x40) + 0xf8) == 0) &&
           (((uVar7 & 0xffffffff) == 1 ||
            (uVar3 == (unsigned __int64)uVar1 / (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0x5c) + 0x20c))))) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

