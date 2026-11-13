extern int fn_82CE5410();


unsigned __int64 fn_82DDE150(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  param_4[7] = uVar2;
  *(unsigned int *)(param_1 + 8) = uVar2;
  iVar1 = fn_82CE5410();
  uVar2 = (*(int (**)())(**(int **)(iVar1 + 0x18) + 0xc))(*(int **)(iVar1 + 0x18),param_1 + 8,1);
  param_4[6] = uVar2;
  param_4[2] = 1000;
  param_4[4] = 3;
  param_4[5] = 4;
  param_4[3] = 1000;
  param_4[1] = 1000;
  *param_4 = 3;
  return 0;
}

