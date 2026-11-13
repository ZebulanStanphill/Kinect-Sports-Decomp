extern int fn_82A5C130();
extern int fn_82A5C188();


unsigned __int64 fn_82A5C208(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int (**pcVar3)();
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  if (uVar1 == 0) {
    fn_82A5C130();
  }
  else if (uVar1 == 1) {
    fn_82A5C188();
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
    if (uVar1 < 3) {
      (**(int (***)())(*piVar2 + 0x18))
                (piVar2,*(unsigned int *)(param_2 + 0x10),param_2 + 0x18,
                 *(unsigned int *)(param_2 + 0x14));
    }
    else {
      if (uVar1 == 3) {
        pcVar3 = *(int (***)())(*piVar2 + 0x20);
      }
      else {
        pcVar3 = *(int (***)())(*piVar2 + 0x24);
      }
      (*pcVar3)(piVar2,*(unsigned int *)(param_2 + 0x10));
    }
  }
  return 0;
}

