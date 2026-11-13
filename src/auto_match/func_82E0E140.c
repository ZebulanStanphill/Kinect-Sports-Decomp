extern int fn_82CE5410();
extern int fn_82CEAB00();
extern unsigned int lbl_8214A8A4;


unsigned int * fn_82E0E140(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  *(unsigned short *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_8214A8A4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(param_1 + 8,*(unsigned int *)(iVar1 + 0x10),0);
  param_1[0xb] = 0xffffffff;
  return param_1;
}

