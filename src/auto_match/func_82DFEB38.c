extern int fn_82CED6A8();


int fn_82DFEB38(int param_1,int param_2)

{
  *(unsigned short *)(param_1 + 4) = *(unsigned short *)(param_2 + 4);
  *(unsigned short *)(param_1 + 6) = *(unsigned short *)(param_2 + 6);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  fn_82CED6A8(param_1 + 0x14,param_2 + 0x14);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0x18);
  return param_1;
}

