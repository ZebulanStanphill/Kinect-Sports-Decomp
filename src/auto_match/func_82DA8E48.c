extern int fn_82CE5410();
extern int fn_82CE63B0();


int * fn_82DA8E48(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  
  iVar1 = 0;
  if (0 < param_2[1]) {
    piVar2 = (int *)*param_2;
    do {
      if (param_1 == *piVar2) {
        return (int *)*param_2 + iVar1 * 6;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 < param_2[1]);
  }
  iVar1 = fn_82CE5410();
  if (param_2[1] != (param_2[2] & 0x3fffffffU)) {
    puVar3 = (unsigned int *)(param_2[1] * 0x18 + *param_2);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    iVar1 = param_2[1];
    param_2[1] = iVar1 + 1;
    puVar3 = (unsigned int *)(iVar1 * 0x18 + *param_2);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    *(int *)(param_2[1] * 0x18 + *param_2 + -0x18) = param_1;
    return (int *)(param_2[1] * 0x18 + *param_2 + -0x18);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),param_2,0x18);
}

