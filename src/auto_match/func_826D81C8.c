extern int fn_826E3F28();


unsigned int * fn_826D81C8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[5];
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  fn_826E3F28(param_1 + 9,*(unsigned short *)(param_2 + 0xc),param_2[9],param_2[0xb],param_2[10],
                    param_2[0xd]);
  return param_1;
}

