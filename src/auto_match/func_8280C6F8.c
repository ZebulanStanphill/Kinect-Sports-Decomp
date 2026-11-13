extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8280C6F8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  float fStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  float fStack_38;
  
  uVar3 = 0xffffffff82196090;
  fn_82810280(param_2,0xffffffff82196090);
  dVar4 = (double)fn_82809CB0();
  dVar5 = (double)lbl_8201DFF4;
  if (dVar5 <= dVar4) {
    uVar3 = 0xffffffff82196084;
    fn_82810280(param_2,0xffffffff82196084);
    dVar4 = (double)fn_82809CB0();
    if (dVar5 <= dVar4) {
      uVar3 = 0xffffffff8219609c;
    }
  }
  fn_82810240(param_2,uVar3,&uStack_50);
  fn_82810B78(&uStack_50,&uStack_50);
  fn_82810240(&uStack_50,param_2,&uStack_40);
  fn_82810B78(&uStack_40,&uStack_40);
  uVar2 = lbl_821AAD20;
  param_1[8] = -fStack_48;
  param_1[9] = -fStack_38;
  *param_1 = uStack_50;
  param_1[4] = uStack_4c;
  param_1[0xc] = uVar2;
  param_1[1] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[0xd] = uVar2;
  param_1[2] = *param_2;
  param_1[6] = param_2[1];
  uVar1 = lbl_82002AE0;
  param_1[10] = -(float)param_2[2];
  param_1[0xe] = uVar2;
  param_1[3] = uVar2;
  param_1[7] = uVar2;
  param_1[0xb] = uVar2;
  param_1[0xf] = uVar1;
  return;
}

