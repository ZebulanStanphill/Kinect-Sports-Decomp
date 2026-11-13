extern unsigned int *auStack_1c;
extern int fn_82A1E810();
extern int fn_82E65FD0();
extern int fn_82E66BC0();
extern unsigned int uStack_20;


void fn_82E661E8(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  piVar1 = *(int **)(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x1c) = param_2;
  if (piVar1 == (int *)0x0) {
    iVar2 = fn_82E65FD0(param_1);
    if (-1 < iVar2) {
      fn_82A1E810(*(unsigned int *)(param_1 + 0x24));
    }
  }
  else {
    auStack_1c = 0;
    uStack_20 = 0;
    iVar2 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_1c,&uStack_20);
    if (iVar2 < 0) {
      uStack_20 = 1;
    }
    fn_82E66BC0(uStack_20,param_1);
  }
  return;
}

