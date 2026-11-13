extern int fn_82EF7218();
extern int fn_82EF7548();
extern int fn_82EF75C0();
extern int fn_82EF7DB0();
extern int fn_82EF7EA8();
extern int fn_82EF7F48();
extern int fn_82EF83B0();
extern int fn_82EF8508();
extern int fn_82EF8618();
extern int fn_82EF8918();
extern int fn_82EF8DF0();
extern int fn_82EF9238();
extern int fn_82EF96C8();
extern int fn_82EF9B68();
extern int fn_82EFA1A8();
extern int fn_82EFA7F8();
extern int fn_82EFAA48();
extern int fn_82EFADC0();
extern int fn_82EFB028();
extern int fn_82EFB4D8();
extern int fn_82EFDCF8();
extern int fn_82EFDF68();
extern int fn_82F11900();
extern int fn_82F42998();
extern int fn_82F68B40();
extern unsigned int lbl_82EF7480;
extern unsigned int lbl_82EF7D98;
extern unsigned int lbl_831AEA20;
extern unsigned int uRam8324d798;


void fn_82E82480(int param_1)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  __int64 lVar4;
  
  *(unsigned int *)(param_1 + 0x4b14) = 1;
  *(unsigned int *)(param_1 + 0x6f84) = 0x3ff;
  psVar2 = (short *)0x8324dcac;
  lVar4 = 0x381;
  sVar3 = 0x7f;
  do {
    psVar2 = psVar2 + 1;
    *psVar2 = sVar3;
    lVar4 = lVar4 + -1;
    sVar3 = sVar3 + 1;
  } while (lVar4 != 0);
  *(unsigned int *)(param_1 + 0x519c) = 0x8318fb18;
  *(unsigned int *)(param_1 + 0x5180) = 0x8318c998;
  *(unsigned int *)(param_1 + 0x5184) = 0x8318e918;
  *(unsigned int *)(param_1 + 0x5198) = 0x8318fb18;
  *(unsigned int *)(param_1 + 0x51a0) = 0x8319fb18;
  iVar1 = fn_82F68B40();
  *(unsigned char **)(iVar1 + 0x515c) = &lbl_831AEA20;
  *(unsigned char **)(iVar1 + 0x5158) = &lbl_831AEA20;
  *(unsigned char **)(iVar1 + 0x5150) = &lbl_831AEA20;
  *(int (***)())(iVar1 + 0x1bb4) = fn_82EF8508;
  *(int (***)())(iVar1 + 0x1bb8) = fn_82EF7218;
  *(int (***)())(iVar1 + 0x1bc0) = fn_82EF7548;
  *(unsigned char **)(iVar1 + 0x1bbc) = &lbl_82EF7480;
  *(int (***)())(iVar1 + 0x1bc4) = fn_82EF83B0;
  *(int (***)())(iVar1 + 0x1bc8) = fn_82EF7F48;
  *(int (***)())(iVar1 + 0x5298) = fn_82EF8918;
  *(int (***)())(iVar1 + 0x529c) = fn_82EF8DF0;
  *(int (***)())(iVar1 + 0x6f38) = fn_82EFADC0;
  *(int (***)())(iVar1 + 0x6f3c) = fn_82EFB028;
  *(int (***)())(iVar1 + 0x6d28) = fn_82EF9238;
  *(int (***)())(iVar1 + 0x6d2c) = fn_82EF96C8;
  *(int (***)())(iVar1 + 0x6f44) = fn_82EF8618;
  *(int (***)())(iVar1 + 0x6f40) = fn_82EFB4D8;
  *(int (***)())(iVar1 + 0x6d30) = fn_82EF9B68;
  *(int (***)())(iVar1 + 0x6d34) = fn_82EFA1A8;
  *(int (***)())(iVar1 + 0x6d38) = fn_82EFA7F8;
  *(int (***)())(iVar1 + 0x6d3c) = fn_82EFAA48;
  *(int (***)())(iVar1 + 0x1be0) = fn_82EFDCF8;
  *(int (***)())(iVar1 + 0x6f80) = fn_82EFDF68;
  *(unsigned char **)(iVar1 + 0x1bcc) = &fn_82EF75C0;
  *(unsigned char **)(iVar1 + 0x1bd0) = &lbl_82EF7D98;
  *(int (***)())(iVar1 + 0x1bd8) = fn_82EF7DB0;
  *(int (***)())(iVar1 + 0x1bd4) = fn_82EF7548;
  uRam8324d798 = *(unsigned int *)(iVar1 + 0x1bb8);
  *(int (***)())(iVar1 + 0x1bdc) = fn_82EF7EA8;
  fn_82F42998(iVar1);
  fn_82F11900(iVar1);
  return;
}

