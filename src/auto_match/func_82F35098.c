int fn_82F35098(unsigned int *param_1,int *param_2)

{
  int uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80070057;
  }
  else if (param_1[3] == 0) {
    uVar1 = 0xc00d36b6;
  }
  else {
    *param_2 = (param_1[0x4c] & 0xffffU) * 8 + 4;
    iVar2 = (*(int (**)())(*param_1 + 0x78))(param_1);
    if (iVar2 != 0) {
      *param_2 = *param_2 + 2;
    }
    uVar1 = 0;
  }
  return uVar1;
}

