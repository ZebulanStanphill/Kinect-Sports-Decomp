extern int fn_8265C9E0();
extern int fn_82897568();
extern int fn_82899580();
extern int fn_8289F710();
extern int fn_828A0598();
extern int fn_828A8160();
extern int fn_828B5608();
extern int fn_828C3910();
extern int fn_828CEC80();
extern int fn_828CF148();
extern unsigned int lbl_82023C3C;


void fn_828A06D8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_82023C3C;
    fn_828B5608(puVar3 + 2);
    puVar3[4] = 2;
    *puVar3 = &lbl_82023C3C;
  }
  uVar1 = *(unsigned int *)(param_1 + 8);
  *(unsigned int **)(param_1 + 0x48) = puVar3;
  puVar3[4] = 0;
  puVar3[1] = uVar1;
  (**(int (***)())(**(int **)(param_1 + 0x50) + 0x40))(*(int **)(param_1 + 0x50),param_1);
  *(int *)(*(int *)(param_1 + 0x4c) + 0xf8) = param_1;
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  uVar2 = (**(int (***)())(**(int **)(param_1 + 0x50) + 0x3c))();
  fn_82897568(*(unsigned int *)(param_1 + 0x4c),uVar2,uVar1);
  fn_828CF148(*(unsigned int *)(param_1 + 0x4c));
  *(unsigned int *)(param_1 + 4) = 1;
  iVar4 = fn_828A0598();
  fn_828A8160(*(unsigned int *)(iVar4 + 8),param_1);
  fn_8289F710(*(unsigned int *)(param_1 + 0x50),param_1);
  fn_82899580(*(unsigned int *)(param_1 + 0x50),param_1);
  fn_828C3910(*(unsigned int *)(param_1 + 0x50),param_1);
  fn_828CEC80((unsigned __int64)*(unsigned int *)(param_1 + 0x50) + 0xc,param_1);
  return;
}

