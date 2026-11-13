extern int fn_82A43C30();
extern int fn_82A43C88();
extern int fn_82A44488();
extern int fn_82A50210();


__int64 fn_82A44B50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  lVar5 = 0;
  if ((*(int *)(param_1 + 8) != 0) || ((param_3 & 0xffffffff) != 0)) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar4 = 0x1337f001;
    }
    else {
      iVar3 = fn_82A43C30(param_1,param_3);
      uVar4 = param_3;
      if (iVar3 < 0) goto LAB_82a44c80;
    }
    lVar5 = (**(int (***)())**(unsigned int **)(param_1 + 0x90))(*(unsigned int **)(param_1 + 0x90),uVar4);
    if (-1 < lVar5) {
      puVar1 = *(unsigned int **)(param_1 + 0x88);
      if (puVar1 != (unsigned int *)0x0) {
        lVar5 = (**(int (***)())*puVar1)(puVar1,uVar4);
      }
      if (-1 < (int)lVar5) {
        if (*(int *)(param_1 + 8) != 2) {
          lVar5 = fn_82A50210(param_1 + 4,uVar4);
        }
        if (-1 < (int)lVar5) {
          if ((param_3 & 0xffffffff) == 0) {
            piVar2 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0);
            lVar5 = (**(int (***)())(*piVar2 + 0x48))(piVar2,uVar4);
            if (-1 < lVar5) {
              fn_82A43C88(param_1);
            }
          }
          else {
            lVar5 = fn_82A44488(param_1,1,0,param_3);
          }
        }
      }
    }
  }
LAB_82a44c80:
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar5;
}

