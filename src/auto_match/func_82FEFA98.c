extern int fn_82FF35A8();


void fn_82FEFA98(int param_1)

{
  int *piVar1;
  __int64 lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xec);
  lVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      fn_82FF35A8(piVar1);
      (**(int (***)())(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      piVar3[-1] = -1;
      *piVar3 = 0;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 4;
  } while (lVar2 != 0);
  piVar3 = *(int **)(param_1 + 300);
  if (piVar3 != (int *)0x0) {
    fn_82FF35A8(piVar3);
    (**(int (***)())(*piVar3 + 0x10))(piVar3,0xffffffff831bc7f4);
    *(unsigned int *)(param_1 + 0x128) = 0xffffffff;
    *(unsigned int *)(param_1 + 300) = 0;
  }
  return;
}

