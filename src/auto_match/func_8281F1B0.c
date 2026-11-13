extern int fn_82810380();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_8281F1B0(__int64 param_1,unsigned int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  double dVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;

  stack_pair_40.first = *param_2;
  stack_pair_40.second = param_2[1];
  uStack_38 = param_2[2];
  stack_pair_30.first = param_2[3];
  dVar3 = (double)lbl_8201DCB8;
  stack_pair_30.second = param_2[4];
  uStack_28 = param_2[5];
  iVar2 = fn_82810380(dVar3,param_1,&stack_pair_40.first);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82810380(dVar3,param_1 + 0xc,&stack_pair_30.first);
  }
  return uVar1;
}
