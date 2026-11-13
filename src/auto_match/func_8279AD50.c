extern int fn_82799A18();
extern int fn_8279A860();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned int fn_8279AD50(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  stack_pair_30.first = param_2;
  stack_pair_30.second = param_3;
  uVar1 = fn_8279A860(param_1,0,param_1[1],&stack_pair_30.first,0xffffffff82799ad8);
  if (uVar1 < (unsigned int)param_1[1]) {
    iVar3 = uVar1 * 0x30 + *param_1;
    iVar2 = fn_82799A18(stack_pair_30.first,stack_pair_30.second,iVar3,*(unsigned char *)(iVar3 + 0x2c),0);
    if (iVar2 == 0) {
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = (unsigned int)*(unsigned char *)(iVar3 + 0x2c);
      }
      return *(unsigned int *)(uVar1 * 0x30 + *param_1 + 0x28);
    }
  }
  return 0;
}

