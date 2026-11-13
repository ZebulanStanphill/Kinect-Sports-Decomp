extern int fn_8305C5D8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83065E50();


void fn_8305CFA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  uVar1 = fn_83065E50();
  fn_8305E0F8(uVar1,param_4);
  fn_8305EC98(uVar1,param_3);
  fn_8305C5D8(param_1,*(unsigned int *)(param_1 + 4),param_2,uVar1,param_4);
  return;
}

