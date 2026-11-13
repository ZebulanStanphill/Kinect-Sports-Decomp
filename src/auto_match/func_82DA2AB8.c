extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D8D918();


void fn_82DA2AB8(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != 0) && (iVar1 = fn_82D8D918(), iVar1 == 0)) {
    iVar1 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0x164) == (*(unsigned int *)(param_1 + 0x168) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x160),4);
    }
    iVar1 = *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 0x164) = iVar1 + 1;
    *(int **)(iVar1 * 4 + *(int *)(param_1 + 0x160)) = param_2;
    *(unsigned char *)(param_1 + 0x16c) = 1;
  }
  return;
}

