#define true 1
extern unsigned int *auStack_2c;
extern int fn_8259BDA8();


unsigned __int64 fn_82871B50(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puStack_30;
  unsigned int auStack_2c;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  puStack_30 = (unsigned int *)*puVar1;
  while( true ) {
    if (puStack_30 == puVar1) break;
    piVar2 = (int *)puStack_30[3];
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(int (***)())(*piVar2 + 0x4c))(piVar2);
      if (iVar3 == param_2) {
        auStack_2c = 0;
        (**(int (***)())(*piVar2 + 0x50))(piVar2,&auStack_2c);
      }
    }
    fn_8259BDA8(&puStack_30);
    puVar1 = *(unsigned int **)(param_1 + 8);
  }
  puVar1 = *(unsigned int **)(param_1 + 0x28);
  puStack_30 = (unsigned int *)*puVar1;
  while (puStack_30 != puVar1) {
    piVar2 = (int *)puStack_30[3];
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(int (***)())(*piVar2 + 0x4c))(piVar2), iVar3 == param_2))
    {
      auStack_2c = 0;
      (**(int (***)())(*piVar2 + 0x50))(piVar2,&auStack_2c);
    }
    fn_8259BDA8(&puStack_30);
    puVar1 = *(unsigned int **)(param_1 + 0x28);
  }
  return 0x20110000;
}

