extern int fn_8306D688();
extern int fn_8306E7F8();
extern int fn_8306E890();
extern int fn_8306EA78();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_820BC534;
extern unsigned int lbl_82186E70;


void fn_830799D8(unsigned __int64 param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_8306D688(*(unsigned int *)(param_2 + 0xb0));
  dVar1 = -dVar1;
  dVar2 = (double)fn_8306E890((double)lbl_820BC534,param_1);
  dVar1 = (double)fn_8306EA78((double)(float)(dVar1 - (double)*(float *)(param_2 + 0xec)));
  *(float *)(param_2 + 0xec) = (float)(dVar1 * dVar2 + (double)*(float *)(param_2 + 0xec));
  dVar1 = (double)fn_8306EA78();
  *(float *)(param_2 + 0xec) = (float)dVar1;
  fn_8306E7F8(dVar1,(double)lbl_82186E70,(double)lbl_8200132C);
  return;
}

