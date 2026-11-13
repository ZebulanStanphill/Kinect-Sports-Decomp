extern int fn_82681B80();


extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];
void fn_82745028(__int64 param_1,__int64 param_2,__int64 param_3)

{
  param_1 = param_1 + 0x78;
  param_2 = param_2 + 0x10;
  fn_82681B80(param_2,param_1,"x",param_3);
  fn_82681B80(param_2,param_1,"y",param_3 + 0x10);
  fn_82681B80(param_2,param_1,lbl_8200EAF0,param_3 + 0x20);
  fn_82681B80(param_2,param_1,lbl_8200EAE8,param_3 + 0x30);
  return;
}

