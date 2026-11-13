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
extern unsigned int lbl_82EF7480;
extern unsigned int lbl_82EF7D98;
extern unsigned int lbl_831AEA20;
extern unsigned int uRam8324d798;


void fn_82EFDFC8(int param_1)

{
  *(unsigned char **)(param_1 + 0x515c) = &lbl_831AEA20;
  *(unsigned char **)(param_1 + 0x5158) = &lbl_831AEA20;
  *(unsigned char **)(param_1 + 0x5150) = &lbl_831AEA20;
  *(int (***)())(param_1 + 0x1bb4) = fn_82EF8508;
  *(int (***)())(param_1 + 0x1bb8) = fn_82EF7218;
  *(int (***)())(param_1 + 0x1bc0) = fn_82EF7548;
  *(unsigned char **)(param_1 + 0x1bbc) = &lbl_82EF7480;
  *(int (***)())(param_1 + 0x1bc4) = fn_82EF83B0;
  *(int (***)())(param_1 + 0x1bc8) = fn_82EF7F48;
  *(int (***)())(param_1 + 0x5298) = fn_82EF8918;
  *(int (***)())(param_1 + 0x529c) = fn_82EF8DF0;
  *(int (***)())(param_1 + 0x6f38) = fn_82EFADC0;
  *(int (***)())(param_1 + 0x6f3c) = fn_82EFB028;
  *(int (***)())(param_1 + 0x6d28) = fn_82EF9238;
  *(int (***)())(param_1 + 0x6d2c) = fn_82EF96C8;
  *(int (***)())(param_1 + 0x6f44) = fn_82EF8618;
  *(int (***)())(param_1 + 0x6f40) = fn_82EFB4D8;
  *(int (***)())(param_1 + 0x6d30) = fn_82EF9B68;
  *(int (***)())(param_1 + 0x6d34) = fn_82EFA1A8;
  *(int (***)())(param_1 + 0x6d38) = fn_82EFA7F8;
  *(int (***)())(param_1 + 0x6d3c) = fn_82EFAA48;
  *(int (***)())(param_1 + 0x1be0) = fn_82EFDCF8;
  *(int (***)())(param_1 + 0x6f80) = fn_82EFDF68;
  *(unsigned char **)(param_1 + 0x1bcc) = &fn_82EF75C0;
  *(unsigned char **)(param_1 + 0x1bd0) = &lbl_82EF7D98;
  *(int (***)())(param_1 + 0x1bd8) = fn_82EF7DB0;
  *(int (***)())(param_1 + 0x1bd4) = fn_82EF7548;
  uRam8324d798 = *(unsigned int *)(param_1 + 0x1bb8);
  *(int (***)())(param_1 + 0x1bdc) = fn_82EF7EA8;
  fn_82F42998(param_1);
  fn_82F11900(param_1);
  return;
}

