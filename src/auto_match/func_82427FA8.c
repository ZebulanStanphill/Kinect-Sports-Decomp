extern unsigned int *auStack_240;
extern int fn_82422A88();
extern int fn_82422F08();
extern int fn_82424930();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern unsigned int lbl_821B8B38;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82427FA8(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_240 [512];
  
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = &lbl_821B8B38;
  param_1[3] = 0;
  uVar4 = ltcg_pool_0_0f;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar4;
  if (param_2[8] == 0) {
    fn_82422A88(param_1,auStack_240);
    fn_82424930(param_1 + 3,auStack_240);
  }
  else {
    lVar2 = fn_8251F720(param_2 + 8,0);
    uVar6 = 0;
    uVar3 = fn_8251FBA8();
    lVar5 = lVar2;
    if ((int)((uVar3 & 0xffffffff) / 0x6b4) != 0) {
      do {
        fn_82422F08(param_1,lVar5,auStack_240);
        fn_82424930(param_1 + 3,auStack_240);
        uVar6 = uVar6 + 1;
        uVar3 = fn_8251FBA8(lVar2);
        lVar5 = lVar5 + 0x6b4;
      } while ((uVar6 & 0xffffffff) < (uVar3 & 0xffffffff) / 0x6b4);
    }
    fn_8251FA58(lVar2);
  }
  param_1[7] = (float)(__int64)*param_2;
  param_1[8] = (float)(__int64)param_2[1];
  param_1[9] = param_2[2];
  param_1[10] = param_2[9];
  param_1[0xb] = param_2[10];
  if ((param_2[7] == 0) || (uVar4 = 0, param_2[7] == 2)) {
    uVar4 = 1;
  }
  param_1[0xc] = uVar4;
  if ((param_2[7] == 1) || (uVar4 = 0, param_2[7] == 2)) {
    uVar4 = 1;
  }
  param_1[0xd] = uVar4;
  param_1[0x10] = param_2[3];
  param_1[0x11] = param_2[4];
  param_1[0x12] = param_2[5];
  iVar1 = param_2[6];
  param_1[0x13] = iVar1;
  param_1[0x14] = iVar1;
  return param_1;
}

