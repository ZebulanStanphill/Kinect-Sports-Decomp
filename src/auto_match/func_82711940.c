extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_826F6FA8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82711940(int param_1)

{
  char cVar2;
  int iVar1;
  unsigned __int64 uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  double dStack_28;
  
  if (**(int **)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    cVar2 = (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0xc) + 0x44))
                      ((int *)**(unsigned int **)(param_1 + 0xc),&stack_pair_30.first,0xffffffff8200ea00);
    if (cVar2 == '\0') {
      fn_82273CD8(&stack_pair_30.first,3);
      dStack_28 = lbl_82005710;
    }
    iVar1 = fn_826F6FA8(**(unsigned int **)(param_1 + 0xc),9999);
    if ((iVar1 == 0) || (uVar3 = 1, dStack_28 != lbl_82002C40)) {
      uVar3 = 0;
    }
    fn_82273C88(&stack_pair_30.first);
  }
  return uVar3;
}

