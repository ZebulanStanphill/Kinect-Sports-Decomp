extern int fn_8296CF68();
extern int fn_82F691F0();


void fn_8297AE90(int param_1,int *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  *(int **)(param_1 + 0xbc) = param_2;
  param_2[0x18] = (param_3 & 1) << 0x1e | param_2[0x18] & 0xbfffffffU;
  fn_8296CF68();
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x14));
      if (((*param_2 == *(int *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x38) == -1)) &&
         (*(unsigned int *)(iVar1 + 0x58) <= *(unsigned int *)(iVar1 + 0x48))) {
        *(unsigned int *)(iVar1 + 0x58) = *(unsigned int *)(iVar1 + 0x48) + 1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(unsigned int *)(param_1 + 8));
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2[4],0xff,param_2[10] << 2);
}

