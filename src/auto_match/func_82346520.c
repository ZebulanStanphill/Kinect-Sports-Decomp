extern int fn_82365BD8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82191B24;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_82195A38;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82346520(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar3 = lbl_82193CF4;
  uVar2 = lbl_821916FC;
  uVar1 = lbl_8218E8FC;
  *param_1 = lbl_821CA460;
  param_1[2] = 0;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  fn_82365BD8(param_1 + 6);
  fn_82365BD8(param_1 + 8,param_3);
  uVar3 = lbl_82191F78;
  uVar2 = lbl_821917B4;
  uVar1 = lbl_8218E8E8;
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  param_1[0x12] = 0;
  param_1[0xd] = uVar1;
  uVar6 = ltcg_pool_0_0f;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar2;
  uVar4 = lbl_821929B0;
  uVar3 = lbl_82191FCC;
  uVar2 = lbl_82191FC8;
  uVar1 = lbl_82191B24;
  param_1[10] = uVar6;
  uVar5 = lbl_82195A38;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar3;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  return param_1;
}

