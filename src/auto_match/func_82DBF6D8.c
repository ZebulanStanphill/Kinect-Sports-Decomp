extern int fn_8260A488();
extern int fn_8260A568();
extern int fn_8260A648();
extern int fn_82CE5410();
extern int fn_82D93C00();
extern int fn_82D972A0();
extern int fn_82D97CB8();


int fn_82DBF6D8(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int *piVar5;
  
  iVar1 = (**(int (***)())(*param_1 + 0x20))();
  if (iVar1 == 2) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xe0);
    *(unsigned short *)(iVar1 + 4) = 0xe0;
    iVar1 = fn_82D93C00();
    fn_8260A488(iVar1 + 0x10,param_1 + 4);
    *(int *)(iVar1 + 8) = param_1[2];
    if (*(int **)(iVar1 + 0xb0) != (int *)0x0) {
      uVar3 = (**(int (***)())(**(int **)(iVar1 + 0xb0) + 0xc))();
      *(unsigned int *)(iVar1 + 0xb0) = uVar3;
    }
  }
  else if (iVar1 == 6) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0xd0);
    *(unsigned short *)(iVar1 + 4) = 0xd0;
    iVar1 = fn_82D972A0();
    fn_8260A568(iVar1 + 0x10,param_1 + 4);
    *(int *)(iVar1 + 8) = param_1[2];
    if (*(int **)(iVar1 + 0xac) != (int *)0x0) {
      uVar3 = (**(int (***)())(**(int **)(iVar1 + 0xac) + 0xc))();
      *(unsigned int *)(iVar1 + 0xac) = uVar3;
    }
  }
  else if (iVar1 == 7) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x140);
    *(unsigned short *)(iVar1 + 4) = 0x140;
    iVar1 = fn_82D97CB8();
    fn_8260A648(iVar1 + 0x10,param_1 + 4);
    piVar5 = (int *)(iVar1 + 0xe0);
    lVar4 = 3;
    *(int *)(iVar1 + 8) = param_1[2];
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        iVar2 = (**(int (***)())(*(int *)*piVar5 + 0xc))();
        *piVar5 = iVar2;
      }
      lVar4 = lVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar4 != 0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

