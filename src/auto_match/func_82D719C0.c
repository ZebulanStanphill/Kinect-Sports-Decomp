extern int fn_82CE6820();
extern int fn_83080BC0();


void fn_82D719C0(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  
  puVar3 = param_2 + 8;
  fn_83080BC0((double)*(float *)(param_1[3] + 0x50),(unsigned __int64)*(unsigned int *)(*param_1 + 8) + 0x40,
                    param_2,puVar3);
  fn_83080BC0((double)*(float *)(param_1[3] + 0x50),
                    (unsigned __int64)*(unsigned int *)(param_1[1] + 8) + 0x40);
  *param_3 = param_2;
  param_3[1] = param_2 + 4;
  param_3[4] = param_1[4];
  param_3[3] = param_1[3];
  uVar1 = ((unsigned int *)*param_1)[1];
  *param_2 = *(unsigned int *)*param_1;
  param_2[1] = uVar1;
  param_2[3] = *param_1;
  param_2[2] = puVar3;
  if (param_2 + 4 != (unsigned int *)0x0) {
    iVar2 = param_1[1];
    param_2[6] = param_2 + 0x18;
    param_2[7] = iVar2;
  }
  fn_82CE6820(param_3 + 8,puVar3,param_2 + 0x18);
  return;
}

