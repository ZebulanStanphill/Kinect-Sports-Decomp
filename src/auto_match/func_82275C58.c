extern int fn_822760B0();
extern int fn_8265CA20();
extern unsigned int iStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int * fn_82275C58(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  int iStack_40;
  
  iVar1 = param_4[4];
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = iVar1;
  if ((param_2 & 0xffffffff) != (unsigned __int64)param_3) {
    do {
      fn_822760B0(&stack_pair_50.first,param_2);
      param_2 = param_2 + 8;
    } while ((param_2 & 0xffffffff) != (unsigned __int64)param_3);
  }
  iVar2 = *param_4;
  param_1[4] = iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar2 != 0) {
    for (; iVar2 != param_4[2]; iVar2 = iVar2 + 8) {
    }
    fn_8265CA20();
  }
  return param_1;
}

