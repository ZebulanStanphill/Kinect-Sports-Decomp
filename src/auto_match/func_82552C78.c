extern unsigned int *auStack_30;
extern int fn_822CD140();
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82552C78(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int auStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  auStack_30 = *param_2;
  uStack_18 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    auStack_30 =
         fn_82535298(&auStack_30,*(unsigned int *)(param_1 + 0x84c),&stack_pair_20.first,param_5);
  }
  else {
    if ((param_4 & 0xffffffff) == 0) {
      param_4 = 0;
    }
    auStack_30 =
         fn_825354B8(&auStack_30,param_3,param_4,*(unsigned int *)(param_1 + 0x84c),&stack_pair_20.first);
  }
  fn_82536288(&auStack_30);
  fn_822CD140(&stack_pair_20.first);
  return;
}

