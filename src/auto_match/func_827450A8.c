extern int fn_82681B80();


extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];
void fn_827450A8(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  param_1 = param_1 + 0x10;
  fn_82681B80(param_1,param_2,"x",param_3);
  fn_82681B80(param_1,param_2,"y",param_3 + 0x10);
  fn_82681B80(param_1,param_2,lbl_8200EAF0,param_3 + 0x20);
  fn_82681B80(param_1,param_2,lbl_8200EAE8,param_3 + 0x30);
  return;
}

