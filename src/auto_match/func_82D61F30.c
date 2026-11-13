extern int fn_82D76368();


unsigned short * fn_82D61F30(int param_1,int param_2,unsigned short *param_3)

{
  unsigned int uVar1;
  
  uVar1 = **(unsigned int **)(param_1 + 4);
  *(unsigned char *)(param_2 + 2) = 0;
  *param_3 = 0xffff;
  param_3[1] = 0xffff;
  param_3[2] = 0xffff;
  fn_82D76368((unsigned __int64)uVar1 + 0x20,param_3 + 4,0xffff,0xffff);
  return param_3 + 0x10;
}

