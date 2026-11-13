extern int fn_825274F8();
extern int fn_82527F50();


void fn_822B9390(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    fn_825274F8(param_2,*param_1);
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x8c0) == 0) ||
       (piVar2 = *(int **)(*(int *)(iVar1 + 0x8c0) + 0x1b4), piVar2 == (int *)0x0)) {
      iVar3 = -1;
    }
    else {
      iVar3 = (**(int (***)())(*piVar2 + 0x14))(piVar2,param_3);
    }
    if ((iVar3 != -1) && (iVar4 = fn_82527F50(param_2), iVar4 != 0)) {
      iVar4 = *(int *)(param_2 + 0x1b8);
      *(unsigned char *)(iVar4 + 1) = 2;
      *(int *)(iVar4 + 0xc) = iVar1;
      *(unsigned char *)(iVar4 + 2) = 0;
      *(int *)(iVar4 + 4) = iVar3;
    }
    return;
  }
  return;
}

