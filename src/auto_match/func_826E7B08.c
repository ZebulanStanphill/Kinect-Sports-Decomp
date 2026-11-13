void fn_826E7B08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(unsigned char *)(param_1 + 0x15) = 0;
  iVar3 = iVar1 - *(int *)(param_1 + 0x30);
  iVar2 = param_2;
  if ((iVar2 < iVar3) || (iVar2 >= iVar1)) {
    if (((*(char *)(param_1 + 0x38) != '\0') || (*(int *)(param_1 + 0x2c) + iVar3 != iVar2)) &&
       (iVar1 = (*(int (**)())(**(int **)(param_1 + 0x10) + 0x38))
                          (*(int **)(param_1 + 0x10),param_2,0), iVar1 >= 0)) {
      *(int *)(param_1 + 0x34) = iVar2;
      *(unsigned char *)(param_1 + 0x38) = 0;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x30) - iVar1) + iVar2;
  }
  return;
}

