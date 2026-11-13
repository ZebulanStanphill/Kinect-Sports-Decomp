extern int fn_829533F0();
extern int fn_82959E40();
extern double lbl_8200E890;


int fn_8295A028(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int lVar3;
  
  lVar3 = 1;
  if (((**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x20500000) &&
     ((iVar1 = *(int *)(*(int *)((**(unsigned int **)(param_1 + 0x104) & 0xfffff) * 4 +
                                (*(unsigned int **)(param_1 + 0x104))[2]) * 4 + *(int *)(param_1 + 0x14)),
      (*(unsigned int *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0 ||
      (*(double *)(iVar1 + 0x20) != lbl_8200E890)))) {
    return 1;
  }
  else {
    puVar2 = (unsigned int *)
             fn_829533F0(param_1,**(unsigned int **)(param_1 + 0x104) & 0xfffff | 0x20400000,
                           *(unsigned int **)(param_1 + 0x104),0,2,1);
    if ((puVar2 != (unsigned int *)0x0) && (lVar3 = fn_82959E40(param_1,puVar2), lVar3 == 0)) {
      *puVar2 = 0;
    }
  }
  return lVar3;
}

