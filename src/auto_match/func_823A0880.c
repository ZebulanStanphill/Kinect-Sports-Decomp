extern int fn_822315A0();
extern int fn_822B1A68();
extern int fn_823A6A88();
extern int fn_8265C9E0();
extern unsigned int lbl_821B52DC;


void fn_823A0880(int *param_1)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    lVar3 = (**(int (***)())(*param_1 + 8))();
    fn_822B1A68(*(unsigned int *)(iVar1 + 0x7c),lVar3 + 0xf0);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x7c) + 8);
    (**(int (***)())(*piVar2 + 0x14))(piVar2,6);
  }
  lVar3 = (**(int (***)())(*param_1 + 0x4c))(param_1);
  puVar4 = (unsigned int *)fn_8265C9E0(0x54);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821B52DC;
    puVar4[2] = 1;
    if (puVar4 + 3 != (unsigned int *)0x0) {
      fn_823A6A88(puVar4 + 3,lVar3 + 0x30);
    }
  }
  iVar1 = param_1[0x23];
  param_1[0x23] = (int)puVar4;
  param_1[0x22] = (int)(puVar4 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

