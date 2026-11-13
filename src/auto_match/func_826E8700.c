extern int fn_826E7800();


void fn_826E8700(int param_1,int param_2,unsigned int param_3)

{
  unsigned char uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      *(unsigned char *)(iVar2 + 0x15) = 0;
      if (*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) < 1) {
        fn_826E7800(iVar2,1);
      }
      uVar1 = *(unsigned char *)(*(int *)(iVar2 + 0x3c) + *(int *)(iVar2 + 0x2c));
      *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
      *(unsigned char *)(uVar3 + param_2) = uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}

