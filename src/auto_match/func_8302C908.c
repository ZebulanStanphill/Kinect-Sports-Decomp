unsigned __int64 fn_8302C908(int param_1,unsigned short *param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  char cVar6;
  unsigned int uVar7;
  
  uVar7 = (unsigned int)*param_2;
  param_2 = param_2 + 1;
  uVar4 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
  if (uVar7 == uVar4) {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        iVar2 = *(int *)param_2;
        cVar1 = *(char *)(param_2 + 2);
        param_2 = (unsigned short *)((int)param_2 + 5);
        iVar5 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),uVar4);
        if ((iVar5 != iVar2) ||
           (cVar6 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0x28))
                              (*(int **)(param_1 + 0x88),uVar4), cVar6 != cVar1)) goto LAB_8302c93c;
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar7);
    }
    uVar3 = 0;
  }
  else {
LAB_8302c93c:
    uVar3 = 1;
  }
  return uVar3;
}

