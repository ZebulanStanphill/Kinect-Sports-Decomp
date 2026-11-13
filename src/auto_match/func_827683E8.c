extern int fn_826D6290();


int fn_827683E8(int param_1,int param_2)

{
  float uVar1;
  float uVar2;
  float uVar3;
  
  fn_826D6290(param_1 + 8,param_2 + 8);
  uVar1 = *(float *)(param_2 + 0x1c);
  uVar2 = *(float *)(param_2 + 0x18);
  uVar3 = *(float *)(param_2 + 0x14);
  *(float *)(param_1 + 0x10) = *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x14) = uVar3;
  *(float *)(param_1 + 0x18) = uVar2;
  *(float *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(float *)(param_2 + 0x24);
  *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20);
  *(float *)(param_1 + 0x24) = uVar1;
  return param_1;
}

