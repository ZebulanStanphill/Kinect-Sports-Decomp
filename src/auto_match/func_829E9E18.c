extern int fn_82A28E60();
extern unsigned int lbl_832179FC;


void fn_829E9E18(unsigned int *param_1)

{
  unsigned int iVar1;
  
  for (iVar1 = param_1[1]; iVar1 != param_1[2]; iVar1 = iVar1 + 0xc) {
  }
  if (*param_1 != 0) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,*param_1);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

