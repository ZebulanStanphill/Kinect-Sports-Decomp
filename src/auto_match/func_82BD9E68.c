extern unsigned int *auStack_40;
extern int fn_8265C990();
extern int fn_82BD7D68();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


void fn_82BD9E68(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int auStack_40 [2];
  unsigned int uStack_38;
  unsigned int *puStack_34;
  
  puStack_34 = auStack_40;
  auStack_40[0] = 0;
  uStack_38 = 1;
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar2 = (unsigned int *)(param_1 + 0x14);
      do {
        fn_82BD7D68(puVar2[1]);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(unsigned int *)(param_1 + 0x20));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      puVar2 = (unsigned int *)(param_1 + 8);
      do {
        (**(int (***)())(*(int *)puVar2[1] + 4))();
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(unsigned int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(int (***)())(**(int **)(param_1 + 0x48) + 0x30))((double)lbl_821AAD20);
        (**(int (***)())(**(int **)(param_1 + 0x48) + 8))(*(int **)(param_1 + 0x48),0);
        (**(int (***)())(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),&uStack_38);
      }
      *(unsigned int *)(param_1 + 0x4c) = 0;
    }
    if (*(int **)(param_1 + 0x48) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0x48) + 0x48))();
      *(unsigned int *)(param_1 + 0x48) = 0;
    }
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0x50) + 0x48))();
      *(unsigned int *)(param_1 + 0x50) = 0;
    }
    fn_8265C990(param_1,0x618a8010);
  }
  return;
}

