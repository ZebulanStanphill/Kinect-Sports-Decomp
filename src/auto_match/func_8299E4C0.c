extern int fn_8299E060();


unsigned __int64 fn_8299E4C0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x234);
      if (((*(int *)(iVar4 + iVar1) != 0) &&
          ((((**(unsigned int **)(iVar4 + iVar1) & 0xfff00000) == 0x60500000 ||
            ((**(unsigned int **)(iVar4 + iVar1) & 0xfff00000) == 0x60000000)) &&
           (iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + iVar1) + 8) +
                                     (**(unsigned int **)(iVar4 + iVar1) & 0xfffff) * 4) * 4 +
                            *(int *)(param_1 + 0x14)),
           *(int *)(iVar1 + 4) == *(int *)(param_1 + 0x88))))) &&
         (uVar2 = fn_8299E060(param_1,*(unsigned int *)(param_1 + 0x230),
                                *(unsigned int *)(param_1 + 0x224),*(unsigned int *)(iVar1 + 0xc)),
         (int)uVar2 < 0)) {
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x4c));
  }
  return 0;
}

