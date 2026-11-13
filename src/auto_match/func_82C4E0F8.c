extern int fn_82A9FA30();
extern int fn_82C4DE40();
extern int fn_82C7CA40();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82C4E0F8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iStack_30;
  int iStack_2c;
  int aiStack_28;
  
  puVar2 = (unsigned int *)(param_1 + 0x18);
  fn_82A9FA30(*(unsigned int *)(param_1 + 0x2c),0,&aiStack_28,4,&iStack_30,puVar2);
  if ((*(int *)(*(int *)(param_1 + 0x28) + 0x3cb0) == 7) && (*(int *)(param_1 + 0x20) != 0)) {
    iStack_2c = aiStack_28;
    iVar1 = fn_82C7CA40(*(int *)(param_1 + 0x28),aiStack_28,iStack_30,&iStack_2c,&iStack_30
                              ,*puVar2);
    if (iVar1 != 0) {
      *(unsigned int *)(param_1 + 0x14) = 1;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_82C4DE40(param_1,iStack_2c,&iStack_30,*puVar2);
    }
  }
  else {
    *(int *)(param_1 + 0xc) = aiStack_28;
    *(int *)(param_1 + 0x10) = aiStack_28 + iStack_30 + -1;
  }
  return;
}

