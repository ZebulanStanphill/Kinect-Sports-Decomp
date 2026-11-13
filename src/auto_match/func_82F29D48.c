extern int fn_82F11900();
extern int fn_82F27150();
extern int fn_82F27950();
extern int fn_82F27988();
extern int fn_82F27DA8();
extern int fn_82F27E78();
extern int fn_82F28610();
extern int fn_82F28800();
extern int fn_82F289E0();
extern int fn_82F28A30();
extern int fn_82F29260();
extern int fn_82F29A78();
extern int fn_82F29B68();
extern int fn_82F29C58();
extern int fn_82F47A58();
extern int fn_82F28920();
extern int fn_82F28950();
extern int fn_82F28980();
extern int fn_82F289B0();


void fn_82F29D48(int param_1)

{
  fn_82F47A58(param_1);
  *(int (***)())(param_1 + 0xa5c) = fn_82F27950;
  *(int (***)())(param_1 + 0xa60) = fn_82F27150;
  *(int (***)())(param_1 + 0xa64) = fn_82F27988;
  *(int (***)())(param_1 + 0xb1c) = fn_82F28610;
  *(int (***)())(param_1 + 0x970) = fn_82F27DA8;
  *(int (***)())(param_1 + 0x974) = fn_82F27E78;
  *(int (***)())(param_1 + 0x9b8) = fn_82F28A30;
  *(int (***)())(param_1 + 0x9bc) = fn_82F29260;
  *(int (***)())(param_1 + 0x9c4) = fn_82F29B68;
  *(int (***)())(param_1 + 0x9c8) = fn_82F29C58;
  *(int (***)())(param_1 + 0x9c0) = fn_82F29A78;
  *(int (***)())(param_1 + 0x9cc) = fn_82F289E0;
  *(unsigned char **)(param_1 + 0x9d0) = fn_82F28920;
  *(unsigned char **)(param_1 + 0x9d4) = fn_82F28980;
  *(unsigned char **)(param_1 + 0x9d8) = fn_82F28950;
  *(unsigned char **)(param_1 + 0x9dc) = fn_82F289B0;
  *(int (***)())(param_1 + 0x9e0) = fn_82F28800;
  fn_82F11900(param_1);
  return;
}

