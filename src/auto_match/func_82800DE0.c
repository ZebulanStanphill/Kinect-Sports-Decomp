extern int fn_82800B90();
extern int fn_82809CB0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800DE0(unsigned int *param_1)

{
  unsigned int uVar1;
  double dVar2;
  double dVar3;
  
  param_1[4] = 0;
  dVar3 = (double)lbl_82002AE0;
  param_1[3] = lbl_82002AE0;
  dVar2 = (double)fn_82809CB0(dVar3);
  param_1[3] = (float)dVar2;
  fn_82800B90(dVar3,dVar3,param_1);
  *(unsigned short *)((int)param_1 + 0x16) = 0;
  *(unsigned short *)(param_1 + 5) = 0;
  uVar1 = lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  param_1[1] = uVar1;
  return;
}

