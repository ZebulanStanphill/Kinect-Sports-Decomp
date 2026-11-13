extern int fn_82810240();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_82810BE8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8280C240(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  fn_82810328(param_4,param_2,&uStack_50);
  dVar3 = (double)fn_82810BE8(&uStack_50);
  fn_828102A8((double)(float)((double)lbl_8200133C / dVar3),&uStack_50,&uStack_50);
  fn_82810240(param_3,&uStack_50,&uStack_40);
  fn_82810B78(&uStack_40,&uStack_40);
  fn_82810240(&uStack_50,&uStack_40,&uStack_30);
  fn_82810B78(&uStack_30,&uStack_30);
  *param_1 = uStack_40;
  param_1[4] = uStack_30;
  param_1[8] = uStack_50;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  param_1[0xc] = *param_2;
  param_1[1] = uStack_3c;
  param_1[5] = uStack_2c;
  param_1[9] = uStack_4c;
  param_1[0xd] = param_2[1];
  param_1[2] = uStack_38;
  param_1[6] = uStack_28;
  param_1[10] = uStack_48;
  param_1[0xe] = param_2[2];
  param_1[3] = uVar2;
  param_1[7] = uVar2;
  param_1[0xb] = uVar2;
  param_1[0xf] = uVar1;
  return;
}

