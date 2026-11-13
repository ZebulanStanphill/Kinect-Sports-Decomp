extern int fn_8295D318();
extern int fn_8295F950();


unsigned __int64 fn_8295FF50(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x104);
  if (*(int *)(param_1 + 0x8c) ==
      *(int *)(*(int *)(**(int **)(iVar8 + 0x10) * 4 + *(int *)(param_1 + 0x14)) + 4)) {
    uVar4 = fn_8295F950(param_1,0x2e,0);
  }
  else {
    if ((*(unsigned int *)(param_1 + 0x6c) & 0x400) == 0) {
      uVar5 = *(unsigned int *)(iVar8 + 0xc);
      uVar6 = 0;
      if (uVar5 != 0) {
        iVar7 = 0;
        do {
          iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar7) * 4 +
                          *(int *)(param_1 + 0x14));
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar7) * 4 +
                          *(int *)(param_1 + 0x14));
          if ((((*(int *)(iVar2 + 4) != *(int *)(iVar1 + 4)) ||
               (*(int *)(iVar2 + 8) != *(int *)(iVar1 + 8))) ||
              (*(int *)(iVar2 + 0xc) != *(int *)(iVar1 + 0xc))) ||
             (((*(int *)(iVar2 + 0x10) != *(int *)(iVar1 + 0x10) ||
               (*(int *)(iVar2 + 0x3c) != *(int *)(iVar1 + 0x3c))) ||
              (((*(unsigned int *)(param_1 + 0xcc) & 4) != 0 && (*(int *)(iVar2 + 0x60) != 0)))))) break;
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar6 < uVar5);
      }
      if (uVar6 == uVar5) {
        return 0;
      }
    }
    uVar5 = 0;
    if (*(int *)(iVar8 + 0xc) != 0) {
      iVar8 = 0;
      do {
        puVar3 = *(unsigned int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar8) * 4 +
                           *(int *)(param_1 + 0x14));
        uVar6 = *puVar3;
        if ((uVar6 & 0xe000000) == 0) {
          *puVar3 = **(unsigned int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar8) * 4 +
                               *(int *)(param_1 + 0x14)) & 0xe000000 | uVar6;
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar5 < *(unsigned int *)(*(int *)(param_1 + 0x104) + 0xc));
    }
    iVar8 = *(int *)(param_1 + 0x104);
    uVar4 = fn_8295D318(param_1,1,*(unsigned int *)(iVar8 + 0x10),*(unsigned int *)(iVar8 + 0xc),
                              *(unsigned int *)(iVar8 + 8),0,0,*(unsigned int *)(iVar8 + 0xc));
  }
  return uVar4;
}

