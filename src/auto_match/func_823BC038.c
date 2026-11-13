extern int fn_822315A0();
extern int fn_8223B610();
extern int fn_82517978();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_823BC038(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  struct { unsigned int first; unsigned int second; } stack_pair_18;


  fn_8223B610(param_2,&stack_pair_18.first,8,0,0);
  if (param_3 != (unsigned int *)0x0) {
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    fn_82517978(&stack_pair_20.first,stack_pair_18.first,stack_pair_18.second,0);
    iVar1 = param_3[1];
    param_3[1] = stack_pair_20.second;
    *param_3 = stack_pair_20.first;
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return;
}
