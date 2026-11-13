extern int fn_82278418();


void fn_82282468(int param_1,unsigned int param_2)

{
  int *piVar1;
  int uVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xb4) + 0x1ac);
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(int (**)())(*piVar1 + 8))(piVar1);
    (*(int (**)())(*piVar1 + 0xc))(piVar1,1);
    *(unsigned int *)(param_1 + 0xdc) = param_2;
    fn_82278418(*(unsigned int *)(param_1 + 0xb0));
    (*(int (**)())(*piVar1 + 0xc))(piVar1,uVar2);
  }
  return;
}

