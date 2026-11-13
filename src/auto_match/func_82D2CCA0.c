extern int fn_82D2C3F8();
extern int fn_82D2C878();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6cc;
extern unsigned int uRam8323b6d0;


unsigned int * fn_82D2CCA0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  struct { int first; int second; } stack_pair_38;

  int iStack_30;
  
  fn_82D2C3F8(&iStack_48);
  fn_82D2C3F8(&stack_pair_38.first,param_2,param_5,param_6);
  uVar1 = uRam8323b6c8;
  if ((iStack_48 == 2) && (stack_pair_38.first == 2)) {
    iStack_50 = iStack_44;
    iStack_4c = iStack_40;
    fn_82D2C878(param_1,param_2,&iStack_50,*(unsigned int *)((iStack_40 + 2) * 4 + iStack_44),
                  *(unsigned int *)((iStack_30 + 2) * 4 + stack_pair_38.second));
  }
  else {
    uVar2 = uRam8323b6d0 & 1;
    if ((uRam8323b6d0 & 1) == 0) {
      uRam8323b6d0 = uRam8323b6d0 | 1;
      uRam8323b6cc = 0;
      uRam8323b6c8 = uVar2;
      *param_1 = uVar2;
      param_1[1] = 0;
    }
    else {
      param_1[1] = uRam8323b6cc;
      *param_1 = uVar1;
    }
  }
  return param_1;
}

