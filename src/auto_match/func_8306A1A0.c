extern unsigned int *auStack_50;
extern int fn_83062E18();
extern int fn_83065890();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83069C28();
extern unsigned int iStack_40;
extern unsigned int lbl_8217E890;


__int64 fn_8306A1A0(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int auStack_50 [2];
  unsigned char **appuStack_48 [2];
  int iStack_40;
  
  iStack_40 = 0;
  appuStack_48[0] = &lbl_8217E890;
  auStack_50[0] = 0;
  lVar2 = 0;
  uVar1 = fn_83062E18();
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(int (**)())appuStack_48[0][1])(appuStack_48,iStack_40)) {
    *(unsigned int *)(iStack_40 + 0x38) = 0;
    lVar2 = lVar2 + 1;
    *(unsigned int *)(iStack_40 + 0x74) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830677A0(param_3,lVar2,0xffffffff8217eae4);
  }
  lVar2 = 0;
  uVar1 = fn_83062E18(param_1);
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(int (**)())appuStack_48[0][1])(appuStack_48,iStack_40)) {
    if ((*(int *)(iStack_40 + 0x38) == 0) && (*(int *)(iStack_40 + 0x3c) != 0)) {
      lVar2 = lVar2 + 1;
      fn_83069C28(iStack_40,lVar2,auStack_50,0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830679A8(param_3);
    }
  }
  *param_2 = (int)lVar2;
  lVar2 = 0;
  uVar1 = fn_83062E18(param_1);
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(int (**)())appuStack_48[0][1])(appuStack_48,iStack_40)) {
    if (*(int *)(iStack_40 + 0x38) == 0) {
      lVar2 = lVar2 + 1;
    }
    *(unsigned int *)(iStack_40 + 0x74) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830678C8(param_3);
  }
  return lVar2;
}

