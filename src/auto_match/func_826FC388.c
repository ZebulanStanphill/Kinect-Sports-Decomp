extern int fn_8268B330();
extern int fn_826FC250();


int fn_826FC388(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,unsigned char param_5,
                 unsigned int param_6)

{
  unsigned int uVar1;
  
  fn_8268B330(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned char *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  if (param_5 != 0) { uVar1=4; } else { uVar1=((*param_3 & 0xfffffffc) + 8) == 0; }
  fn_826FC250(param_1,uVar1,param_2,0xffffffffffffffff,param_3,param_4,param_6);
  return param_1;
}

