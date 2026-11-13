extern int fn_82637B30();
extern int fn_82677488();
extern int fn_82677570();
extern int fn_826776A0();
extern int fn_826777B8();
extern int fn_82677848();
extern int fn_82677E98();
extern unsigned int lbl_821AAD20;


void fn_82677F48(int *param_1,int param_2)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char cVar5;
  int aiStack_40;
  
  puVar1 = *(unsigned __int64 **)(param_2 + 0xd8);
  fn_826776A0(param_2,*(unsigned int *)(param_2 + 0x1d0));
  if (((*(char *)(param_1 + 2) != -1) || (1 < *(int *)(param_2 + 0x1d0))) ||
     (iVar4 = 0, *param_1 == 3)) {
    iVar4 = 1;
  }
  if (iVar4 != *(int *)(param_2 + 0x1c)) {
    fn_82637B30(*(unsigned int *)(param_2 + 0xd8),iVar4);
    *(int *)(param_2 + 0x1c) = iVar4;
  }
  uVar2 = lbl_821AAD20;
  *(unsigned int *)(puVar1 + 0xf8) = lbl_821AAD20;
  *(unsigned int *)((int)puVar1 + 0x7c4) = uVar2;
  *(unsigned int *)(puVar1 + 0xf9) = uVar2;
  *(unsigned int *)((int)puVar1 + 0x7cc) = uVar2;
  *puVar1 = *puVar1 | 0x4000000000000000;
  *(unsigned int *)(puVar1 + 0xfa) = uVar2;
  *(unsigned int *)((int)puVar1 + 0x7d4) = uVar2;
  *(unsigned int *)(puVar1 + 0xfb) = uVar2;
  *(unsigned int *)((int)puVar1 + 0x7dc) = uVar2;
  *puVar1 = *puVar1 | 0x4000000000000000;
  iVar4 = *param_1;
  if (iVar4 == 1) {
    fn_82677E98(param_2,1);
    aiStack_40 = param_1[2];
    fn_82677848(param_2,&aiStack_40);
  }
  else if (iVar4 == 2) {
    aiStack_40 = param_1[2];
    fn_82677848(param_2,&aiStack_40);
    fn_826777B8(param_2,param_1[0x13]);
    if (param_1[0xb] == 0) {
      if (*(int *)(param_2 + 0x18) != 0) {
        *(unsigned int *)(param_2 + 0xc) = 0;
        *(unsigned int *)(param_2 + 0x18) = 0;
      }
    }
    else {
      if (*(int *)(param_2 + 0x1c) != 1) {
        fn_82637B30(*(unsigned int *)(param_2 + 0xd8),1);
        *(unsigned int *)(param_2 + 0x1c) = 1;
      }
      if ((*(int *)(param_2 + 0x1d0) == 3) || (uVar3 = 2, *(int *)(param_2 + 0x1d0) == 6)) {
        uVar3 = 3;
      }
      fn_82677E98(param_2,uVar3);
      fn_82677570(param_2,param_1 + 3,2);
      fn_82677488(param_2,param_1 + 0xb,0,4);
    }
  }
  else if (iVar4 == 3) {
    if (param_1[0xb] == 0) {
      if (*(int *)(param_2 + 0x1c) != 1) {
        fn_82637B30(*(unsigned int *)(param_2 + 0xd8),1);
        *(unsigned int *)(param_2 + 0x1c) = 1;
      }
      cVar5 = (*(int *)(param_2 + 0x1c4) == 3) + '\v';
      fn_82677570(param_2,param_1 + 3,2);
    }
    else {
      if (*(int *)(param_2 + 0x1c) != 1) {
        fn_82637B30(*(unsigned int *)(param_2 + 0xd8),1);
        *(unsigned int *)(param_2 + 0x1c) = 1;
      }
      fn_82677570(param_2,param_1 + 3,2);
      fn_82677488(param_2,param_1 + 0xb,0,4);
      if ((param_1[1] == 2) || (param_1[1] == 1)) {
        cVar5 = '\r';
      }
      else {
        cVar5 = '\x0e';
        fn_82677488(param_2,param_1 + 0x14,1,6);
      }
    }
    if ((*(int *)(param_2 + 0x1d0) == 3) || (*(int *)(param_2 + 0x1d0) == 6)) {
      cVar5 = cVar5 + '\x04';
    }
    fn_82677E98(param_2,cVar5);
  }
  return;
}

