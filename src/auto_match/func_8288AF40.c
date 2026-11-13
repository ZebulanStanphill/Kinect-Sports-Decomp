extern unsigned int *auStack_30;
extern int fn_8288A5D8();
extern int fn_8288AE70();
extern int fn_828EA268();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82196410;


unsigned int *
fn_8288AF40(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             int param_5)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char auStack_30 [4];
  int aiStack_2c;
  
  param_1[0xc] = param_2;
  param_1[0xe] = param_3;
  param_1[0xd] = param_4;
  uVar1 = lbl_82005718;
  *param_1 = &lbl_82196410;
  param_1[0x11] = uVar1;
  fn_8288A5D8(param_1 + 0x49,auStack_30,auStack_30[0]);
  if (param_5 == 0) {
    param_5 = -0x7cdec134;
  }
  param_1[0x4d] = param_5;
  uVar1 = fn_828EA268(param_1[0xd]);
  param_1[0xf] = uVar1;
  puVar3 = param_1 + 0x11;
  lVar5 = 0x37;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = 0;
  do {
    aiStack_2c = iVar4;
    puVar2 = (unsigned char *)fn_8288AE70(param_1 + 0x49,&aiStack_2c);
    iVar4 = iVar4 + 1;
    *puVar2 = 0;
  } while (iVar4 < 0x1b);
  *(unsigned char *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  lVar5 = 9;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}

