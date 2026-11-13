extern int fn_827D50B8();


void fn_827E6DC8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_827D50B8(*(unsigned int *)(param_1 + 0x14));
  if (iVar2 == 0x3e5) {
    piVar1 = *(int **)(*(int *)(param_1 + 4) * 0x28 + *(int *)(param_1 + 0x20) + 0x74);
    iVar2 = (**(int (***)())(*piVar1 + 0x2c))(piVar1,param_2);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x3c);
    }
  }
  else {
    fn_827D50B8(*(unsigned int *)(param_1 + 0x14));
  }
  return;
}

