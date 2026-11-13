extern int fn_8269AD70();


void fn_826F7658(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(unsigned int *)(param_2 + 0xb00) >> 0x13 & 1) == 0) {
    piVar1 = *(int **)(param_2 + 0xaf8);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0x1e];
      if (((~(*(unsigned char *)((int)piVar2 + 0x66) >> 6) & 1) != 0) &&
         (((param_3 & 0xff) != 0 || (((unsigned int)piVar2[0x23] >> 0x12 & 1) != 0)))) {
        (**(int (***)())(*piVar2 + 0x68))(param_1,piVar2,param_3);
      }
    }
  }
  else {
    *(unsigned int *)(param_2 + 0xaf8) = 0;
    *(unsigned int *)(param_2 + 0xb00) = *(unsigned int *)(param_2 + 0xb00) & 0xfff7ffff;
    piVar1 = *(int **)(param_2 + 0xaf4);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0x1c];
      piVar2[0x1e] = 0;
      piVar2[0x23] = piVar2[0x23] & 0xfff7ffff;
      if ((~(*(unsigned char *)((int)piVar2 + 0x66) >> 6) & 1) != 0) {
        iVar3 = (**(int (***)())(*piVar2 + 0x104))(piVar2,0);
        if (iVar3 == 1) {
          fn_8269AD70(piVar2,param_2);
        }
        if (((param_3 & 0xff) != 0) || (((unsigned int)piVar2[0x23] >> 0x12 & 1) != 0)) {
          (**(int (***)())(*piVar2 + 0x68))(param_1,piVar2,param_3);
        }
      }
    }
  }
  return;
}

