extern int fn_82CE5410();
extern int fn_82D2E8C0();


void fn_82D30978(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(unsigned int *)(param_1 + 0x24c) != 0) {
    iVar2 = fn_82CE5410();
    piVar1 = *(int **)(iVar2 + 0x10);
    fn_82D2E8C0(*(unsigned int *)(param_1 + 0x24c),0);
    (*(int (**)())(*piVar1 + 8))(piVar1,*(unsigned int *)(param_1 + 0x24c),0x10);
    *(unsigned int *)(param_1 + 0x24c) = 0;
  }
  return;
}

