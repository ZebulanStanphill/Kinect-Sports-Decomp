unsigned __int64 fn_82997208(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  if (((**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x10000000) &&
     (*(unsigned short *)(param_1 + 0xca) < 0x104)) {
    puVar1 = *(unsigned int **)(param_1 + 0x104);
    uVar8 = (unsigned __int64)*puVar1 & 0xfffff;
    iVar6 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
    iVar4 = *(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14));
    if ((*(int *)(iVar6 + 0x3c) == 0) &&
       ((((*(unsigned int *)(iVar4 + 0x3c) & 0x200) != 0 && (*(char *)(iVar6 + 0x6f) == '\x03')) &&
        (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0x88))))) {
      if ((*puVar1 & 0xfffff) != 0) {
        iVar6 = 0;
        do {
          iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6) * 4 +
                          *(int *)(param_1 + 0x14));
          *(unsigned int *)(iVar4 + 0x3c) = *(unsigned int *)(iVar4 + 0x3c) | 0x200;
          uVar3 = *(unsigned int *)(param_1 + 0x100);
          if (uVar3 < *(unsigned int *)(param_1 + 0xc)) {
            iVar4 = uVar3 << 2;
            do {
              uVar5 = 0;
              iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x18));
              if (*(int *)(iVar2 + 4) != 0) {
                iVar7 = 0;
                do {
                  if (*(int *)(*(int *)(iVar2 + 8) + iVar7) ==
                      *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar6)) {
                    *(unsigned int *)(*(int *)(iVar2 + 8) + iVar7) =
                         *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6);
                  }
                  uVar5 = uVar5 + 1;
                  iVar7 = iVar7 + 4;
                } while (uVar5 < *(unsigned int *)(iVar2 + 4));
              }
              uVar3 = uVar3 + 1;
              iVar4 = iVar4 + 4;
            } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
          }
          iVar6 = iVar6 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      **(unsigned int **)(param_1 + 0x104) = 0;
    }
  }
  return 0;
}

