extern int fn_822AEA70();
extern int fn_822CFF20();
extern int fn_82359BB0();
extern int fn_82373130();
extern int fn_82373840();
extern int fn_823738F0();
extern int fn_823759C8();
extern int fn_82375A98();
extern int fn_82380FA8();
extern unsigned int lbl_821B37CC;
extern unsigned int lbl_821B37E4;
extern unsigned int lbl_821B3814;
extern unsigned int lbl_831D1C34;


void fn_82374108(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piStack_40;
  int *piStack_3c;
  unsigned char **appuStack_30 [4];
  unsigned char ***pppuStack_20;
  
  fn_822CFF20(&piStack_40,param_1 + 0x184);
  for (; piStack_40 != piStack_3c; piStack_40 = piStack_40 + 2) {
    if (*(unsigned int *)(*piStack_40 + 0x2180) <= *(unsigned int *)(param_1 + 0x26c)) {
      *(unsigned int *)(*piStack_40 + 0x174) = 0;
      uVar2 = lbl_831D1C34;
      iVar1 = *piStack_40;
      *(unsigned int *)(iVar1 + 0xe0) = lbl_831D1C34;
      *(unsigned int *)(iVar1 + 0xd4) = 1;
      *(unsigned int *)(iVar1 + 0xe4) = uVar2;
    }
  }
  fn_82373130(param_1);
  *(unsigned int *)(param_1 + 0x1fc) = 0;
  fn_82375A98(param_1);
  fn_823738F0(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37E4;
  fn_822AEA70(*(unsigned int *)(param_1 + 8),appuStack_30);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B3814;
  fn_822AEA70(*(unsigned int *)(param_1 + 8),appuStack_30);
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x264) = 0;
  *(unsigned int *)(param_1 + 0x268) = 0;
  *(unsigned int *)(param_1 + 0xa10) = 0;
  *(unsigned int *)(param_1 + 0x1d4) = 0;
  *(unsigned int *)(param_1 + 0x1d8) = 0;
  *(unsigned int *)(param_1 + 0x200) = 0;
  fn_82373840(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37CC;
  fn_822AEA70(*(unsigned int *)(param_1 + 8),appuStack_30);
  fn_823759C8(param_1,*(unsigned int *)(param_1 + 0x1e4));
  fn_82380FA8(*(unsigned int *)(param_1 + 0x7e4));
  fn_82359BB0(&piStack_40);
  return;
}

