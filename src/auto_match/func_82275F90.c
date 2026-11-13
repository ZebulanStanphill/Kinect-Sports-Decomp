extern int fn_82275C58();
extern int fn_822760B0();
extern int fn_8265CA20();
extern unsigned int iStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64
fn_82275F90(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  int aiStack_60 [12];
  
  while ((param_2 != param_3 && (param_4 != param_5))) {
    if (*(int *)(param_4 + 4) < *(int *)(param_2 + 4)) {
      fn_822760B0(param_6,param_4);
      param_4 = param_4 + 8;
    }
    else {
      fn_822760B0(param_6,param_2);
      param_2 = param_2 + 8;
    }
  }
  iStack_70 = param_6[4];
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  iVar1 = fn_82275C58(aiStack_60,param_2,param_3,&stack_pair_80.first);
  param_6[4] = *(int *)(iVar1 + 0x10);
  if (aiStack_60[0] != 0) {
    fn_8265CA20(aiStack_60[0]);
  }
  iStack_70 = param_6[4];
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  fn_82275C58(param_1,param_4,param_5,&stack_pair_80.first);
  iVar1 = *param_6;
  if (iVar1 != 0) {
    for (; iVar1 != param_6[2]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  return param_1;
}

