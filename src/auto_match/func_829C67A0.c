extern int fn_829C5C78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214F00;
extern unsigned int lbl_83214F04;


unsigned __int64 fn_829C67A0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  *param_1 = lbl_821AAD20;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  lbl_83214F04 = 0x58745373;
  lbl_83214F00 = 0x50;
  uVar4 = XamNuiCameraTiltGetStatus(0xffffffff83214f00);
  if (-1 < (int)uVar4) {
    fn_829C5C78(0xffffffff83214f20);
    puVar1 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
  }
  return uVar4;
}

