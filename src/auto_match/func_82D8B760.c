extern unsigned int *auStack_40;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82D899D8();
extern int fn_82D8B400();
extern int fn_82D91018();
extern int fn_82D912B0();
extern int fn_82DACD78();
extern int fn_82DAD980();
extern unsigned int iStack_3c;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


unsigned __int64 fn_82D8B760(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  float fVar2;
  __int64 lVar3;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned int uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar1 = *(int *)(param_1 + 8);
  uStack_38 = (unsigned int)param_2;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x94) != 0) {
      auStack_40[0] = 5;
      iStack_3c = param_1;
      fn_82D80C48(iVar1,auStack_40);
      return 0;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + 1;
      fn_82D912B0(*(unsigned int *)(param_1 + 8),param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x10) = uStack_38;
  fn_82CE4040(param_2);
  if (iVar1 != 0) {
    fn_82CE4118(iVar1);
  }
  fn_82D8B400(param_1,param_2,&fStack_30);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0x5c) != lbl_82134508)) {
    *(unsigned int *)(param_1 + 0x5c) = lbl_8200133C;
  }
  if (*(float *)(param_1 + 0x5c) <= lbl_821AAD20) {
    if (fStack_30 - fStack_2c < 0.0) {
      fStack_2c = fStack_30;
    }
    if (fStack_2c - fStack_28 < 0.0) {
      fStack_28 = fStack_2c;
    }
    fVar2 = lbl_82186E6C;
    if (fStack_28 < lbl_82002C5C) {
      fVar2 = fStack_28 * lbl_82002C2C;
    }
    *(float *)(param_1 + 0x5c) = fVar2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82D899D8(param_1,*(int *)(param_1 + 8),param_2);
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82DAD980(*(int *)(param_1 + 8),param_1);
  }
  fn_82DACD78(param_1);
  if (*(int *)(param_1 + 8) != 0) {
    fn_82D91018(*(int *)(param_1 + 8),param_1);
    iVar1 = *(int *)(param_1 + 8);
    lVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x94) - 1;
    *(int *)(iVar1 + 0x94) = (int)lVar3;
    if ((lVar3 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
      if (*(int *)(iVar1 + 0x8c) != 0) {
        fn_82D80C18(iVar1);
      }
      if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
        fn_82D80C30(iVar1);
      }
    }
  }
  return 1;
}

