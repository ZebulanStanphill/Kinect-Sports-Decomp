extern unsigned int *auStack_50;
extern int fn_8262FEC8();
extern int fn_82638288();
extern int fn_82638300();
extern int fn_82638330();
extern int fn_82638368();
extern int fn_826383A0();
extern int fn_826384A0();
extern int fn_826384C0();
extern int fn_82638790();
extern int fn_8263A820();
extern int fn_8263CA78();
extern int fn_8263DE70();
extern unsigned int lbl_821AAD20;


void fn_82678C70(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned __int64 in_r8;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int auStack_50 [20];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xdd) == '\0') {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      lVar1 = fn_8263A820(*(unsigned int *)(param_1 + 0xd8));
      if (lVar1 == 0) {
        *(unsigned char *)(param_1 + 0xdd) = 0;
      }
      else {
        fn_8263CA78(lVar1,auStack_50);
        uVar2 = (unsigned __int64)auStack_50[0] - 0x1a220097;
        if ((((uVar2 == 0) || ((uVar2 & 0xffffffff) == 0x100)) ||
            (uVar2 = (unsigned __int64)auStack_50[0] - 0x2d200096, uVar2 == 0)) ||
           ((uVar2 & 0xffffffff) == 0x100)) {
          *(unsigned char *)(param_1 + 0xdd) = 1;
        }
        fn_8262FEC8(lVar1);
      }
      *(unsigned char *)(param_1 + 0xdc) = 1;
    }
    if (*(char *)(param_1 + 0xdd) == '\0') {
      return;
    }
  }
  *(unsigned int *)(param_1 + 8) = 1;
  fn_82638790(*(unsigned int *)(param_1 + 0xd8),0);
  fn_82638288(*(unsigned int *)(param_1 + 0xd8),1);
  fn_826384C0(*(unsigned int *)(param_1 + 0xd8),0xff);
  fn_82638330(*(unsigned int *)(param_1 + 0xd8),0);
  fn_82638368(*(unsigned int *)(param_1 + 0xd8),0);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(unsigned int *)(param_1 + 0xc) = 0;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    fn_8263DE70((double)lbl_821AAD20,*(unsigned int *)(param_1 + 0xd8),0,0,0x20,0,in_r8,0,0);
    fn_82638300(*(unsigned int *)(param_1 + 0xd8),7);
    fn_826383A0(*(unsigned int *)(param_1 + 0xd8),2);
    fn_826384A0(*(unsigned int *)(param_1 + 0xd8),1);
    *(unsigned int *)(param_1 + 0xe0) = 1;
  }
  else {
    if (param_2 == 1) {
      fn_826384A0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0xe0));
      fn_82638300(*(unsigned int *)(param_1 + 0xd8),2);
      fn_826383A0(*(unsigned int *)(param_1 + 0xd8),6);
      iVar3 = *(int *)(param_1 + 0xe0) + 1;
    }
    else {
      if (2 < param_2) goto LAB_82678e38;
      fn_826384A0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0xe0));
      fn_82638300(*(unsigned int *)(param_1 + 0xd8),2);
      fn_826383A0(*(unsigned int *)(param_1 + 0xd8),7);
      iVar3 = *(int *)(param_1 + 0xe0) + -1;
    }
    *(int *)(param_1 + 0xe0) = iVar3;
  }
LAB_82678e38:
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  return;
}

