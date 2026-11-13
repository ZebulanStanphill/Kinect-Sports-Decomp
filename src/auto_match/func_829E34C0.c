extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_70;
extern int fn_829E2F78();
extern int fn_829E37D0();
extern int fn_829E3820();
extern int fn_829E3C40();
extern int fn_829E4C68();
extern int fn_829E5498();
extern int fn_829E5558();
extern int fn_82A1F2F8();
extern int fn_82F68CC0();
extern unsigned int iStack_30;
extern unsigned int iStack_6c;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82006848;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B40;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


unsigned __int64 fn_829E34C0(unsigned int *param_1)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fStack_70;
  int iStack_6c;
  float afStack_68 [2];
  unsigned __int64 uStack_60;
  unsigned char auStack_58 [4];
  unsigned char auStack_54 [4];
  float fStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned __int64 uStack_38;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  uStack_48 = 1;
  uStack_44 = 1;
  fStack_50 = lbl_82005748;
  uStack_40 = 4;
  fStack_4c = lbl_82005748;
  uStack_38 = 1;
  uStack_2c = lbl_8201EBA4;
  iStack_30 = 0;
  uStack_28 = lbl_8201FBB0;
  uVar2 = fn_829E3C40(param_1[2],&fStack_50);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  dVar6 = (double)fStack_50;
  iVar3 = fn_82A1F2F8();
  if (param_1[0x17] == 0) {
    fVar1 = (float)param_1[0x16];
  }
  else {
    uStack_60 = (unsigned __int64)(unsigned int)(iVar3 - param_1[0x17]);
    fVar1 = (float)uStack_60 * lbl_82006848;
  }
  dVar4 = (double)(float)param_1[4];
  param_1[0x17] = iVar3;
  if (dVar4 < dVar6) {
    dVar4 = dVar6;
  }
  dVar5 = (double)fn_829E2F78(dVar6,(double)fVar1,param_1 + 0x1f);
  if (iStack_30 != 2) {
    dVar5 = (double)(float)param_1[4];
    if (dVar6 < dVar5) {
      dVar5 = dVar6;
    }
    if (dVar4 < (double)(float)(dVar5 * (double)lbl_82005344)) {
      dVar6 = (double)(((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
    }
    uVar2 = fn_829E5498(dVar6,param_1 + 0x10);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    dVar5 = (double)fStack_70;
    if (dVar5 <= (double)lbl_821AAD20) {
      return 0xffffffff8000ffff;
    }
  }
  *param_1 = &lbl_83217B40;
  uVar2 = fn_829E5558(dVar5,(double)lbl_82015B38,0xffffffff83217b40);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if (iStack_6c == 0) {
    return 0xffffffff8000ffff;
  }
  uVar2 = fn_829E37D0(iStack_6c,auStack_58);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = fn_829E4C68(param_1[1],0,iStack_6c,auStack_54);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = fn_829E37D0(iStack_6c,afStack_68);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = fn_829E3820((double)afStack_68[0],param_1 + 0x10);
  if (-1 < (int)uVar2) {
    param_1[0x18] = afStack_68[0];
    fn_82F68CC0(param_1 + 4,&fStack_50,0x30);
    return 0;
  }
  return uVar2;
}

