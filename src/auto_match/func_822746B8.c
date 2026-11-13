extern int fn_82275128();
extern int fn_82275180();
extern unsigned int stack0x00000014;


void fn_822746B8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int *piVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (param_1 != (int *)0x0) {
    (**(int (***)())(*param_1 + 0x10))();
  }
  iVar2 = fn_82275128();
  iVar3 = iVar2 + 0x44;
  if (param_2 == 0) {
    iVar3 = iVar2 + 0x5c;
  }
  fn_82275180(iVar3,&stack0x00000014);
  if (param_1[2] != 0) {
    lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x14) - 1;
    *(int *)(iVar2 + 0x14) = (int)lVar4;
    if (lVar4 == 0) {
      for (piVar5 = *(int **)(iVar2 + 0x34); piVar5 != *(int **)(iVar2 + 0x38); piVar5 = piVar5 + 2)
      {
        piVar1 = (int *)*piVar5;
        piVar1[0xc] = 1;
        (**(int (***)())(*piVar1 + 8))(piVar1,iVar2,2);
      }
    }
  }
  return;
}

