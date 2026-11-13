extern unsigned int *auStack_30;
extern int fn_82681838();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_82697210();
extern int fn_82697248();
extern int fn_8269A418();
extern int fn_826ABE30();
extern int fn_826B44A0();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_826B51A8(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char uVar4;
  __int64 lVar5;
  unsigned char bVar6;
  unsigned int *puVar7;
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int *puStack_58;
  int iStack_54;
  int aiStack_50 [4];
  char acStack_40 [16];
  unsigned char auStack_30 [48];
  
  uStack_60 = 0;
  fn_82695DA0(acStack_40,*(unsigned int *)(*param_1 + 8));
  if ((acStack_40[0] != '\x05') && (acStack_40[0] != '\a')) {
    uVar2 = fn_82697248(&iStack_54,acStack_40,*param_1,*(unsigned char *)(param_1 + 0xd));
    fn_82681838(acStack_40,uVar2);
    lVar5 = (unsigned __int64)*(unsigned int *)(iStack_54 + 8) - 1;
    *(int *)(iStack_54 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_54);
    }
  }
  if (acStack_40[0] == '\x05') {
    fn_82696D38(aiStack_50,acStack_40,*param_1,0xffffffffffffffff,0);
    iVar1 = *(int *)(aiStack_50[0] + 0x10);
    lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
    if (iVar1 == 0) {
      uStack_60 = param_1[1];
    }
    else {
      auStack_30[0] = 0;
      iVar1 = param_1[8];
      fn_82696D38(&iStack_5c,*(unsigned int *)(*param_1 + 8),*param_1,0xffffffffffffffff,0);
      fn_826B44A0(*param_1,&iStack_5c,auStack_30,iVar1,&uStack_60,0,0);
      lVar5 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
      *(int *)(iStack_5c + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iStack_5c);
      }
      fn_82696330(auStack_30);
    }
  }
  else if (acStack_40[0] == '\a') {
    uStack_60 = fn_82695370(*(unsigned int *)(*param_1 + 8));
  }
  if (uStack_60 == 0) {
    if ((*(unsigned char *)((int)param_1 + 0x36) & 0x80) != 0) {
      fn_82697210(&puStack_58,acStack_40,*param_1);
      fn_826ABE30(param_1 + 9,0xffffffff82007bc0,*puStack_58);
      uVar3 = puStack_58[2];
      puStack_58[2] = (int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 == 0) {
        fn_826944C8(puStack_58);
      }
    }
    iVar1 = *param_1;
    bVar6 = *(unsigned char *)(iVar1 + 0xc6) | 0x40;
    uVar3 = param_1[1];
  }
  else {
    iVar1 = *param_1;
    bVar6 = *(unsigned char *)(iVar1 + 0xc6) & 0xbf;
    uVar3 = uStack_60;
  }
  *(unsigned int *)(iVar1 + 0x74) = uVar3;
  *(unsigned char *)(iVar1 + 0xc6) = bVar6;
  uVar4 = fn_8269A418();
  *(unsigned char *)(iVar1 + 0x7c) = uVar4;
  iVar1 = *param_1;
  puVar7 = (unsigned int *)(iVar1 + 8);
  fn_82696330(*(unsigned int *)(iVar1 + 8));
  uVar3 = *puVar7;
  *puVar7 = uVar3 - 0x10;
  if (uVar3 - 0x10 < *(unsigned int *)(iVar1 + 0xc)) {
    fn_826827F8(puVar7);
  }
  fn_82696330(acStack_40);
  return;
}

