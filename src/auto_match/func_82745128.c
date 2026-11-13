extern int fn_826A79D8();


extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];
void fn_82745128(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  param_1 = param_1 + 0x10;
  fn_826A79D8(param_1,param_2,"x",param_3);
  fn_826A79D8(param_1,param_2,"y",param_3 + 0x10);
  fn_826A79D8(param_1,param_2,lbl_8200EAF0,param_3 + 0x20);
  fn_826A79D8(param_1,param_2,lbl_8200EAE8,param_3 + 0x30);
  return;
}

