extern int fn_82790270();


unsigned int  fn_82790E00(unsigned int *param_1,unsigned int *param_2)

{
  int lVar1;
  
  lVar1 = fn_82790270(*param_2,*param_1,param_2[1]);
  return (-lVar1 & 0xffffffffU) >> 0x1f;
}

