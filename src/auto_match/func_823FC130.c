extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B72C4;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_823FC130(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  struct { unsigned int first; int second; } stack_pair_40;

  struct { unsigned int first; int second; } stack_pair_38;


  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    stack_pair_38.first = *param_3;
    iVar1 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    stack_pair_40.first = *param_2;
    iVar2 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_1[4] = 0;
    param_1[3] = &lbl_821B72C4;
    stack_pair_40.second = iVar2;
    stack_pair_38.second = iVar1;
    fn_82365BD8(param_1 + 7,&stack_pair_40.first);
    fn_82365BD8(param_1 + 9,&stack_pair_38.first);
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return param_1;
}
