extern int fn_82799A18();


unsigned int  fn_82799A98(int param_1,unsigned int *param_2)

{
  int lVar1;
  
  lVar1 = fn_82799A18(*param_2,param_2[1],param_1,*(unsigned char *)(param_1 + 0x2c),1);
  return (-lVar1 & 0xffffffffU) >> 0x1f;
}

