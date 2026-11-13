extern int fn_82FA9208();
extern int fn_82FB6330();
extern int fn_82FB64A8();
extern int fn_82FB75A8();


int fn_82FB4740(int param_1,unsigned int *param_2,int *param_3,int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  char acStack_40;
  
  uVar1 = *param_5;
  *param_5 = uVar1 + 1;
  if (uVar1 + 1 < 0x41) {
    if (*(int *)(param_2[1] + 0x40) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_2[1] + 0x40) + 0x60);
    }
    if (iVar7 == 0) {
      piVar3 = (int *)(**(int (***)())(*(int *)*param_2 + 8))();
      uVar9 = (**(int (***)())(*piVar3 + 0x20))();
      if ((uVar9 & 0xffffffff) == 0) {
        uVar9 = (**(int (***)())(*(int *)piVar3[3] + 0x20))();
      }
      uVar8 = 0;
    }
    else {
      uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x10);
      uVar8 = *(unsigned int *)(iVar7 + 0xc);
    }
    iVar7 = *(int *)(*param_4 + 0x40);
    if (iVar7 == 0) {
      piVar3 = (int *)(**(int (***)())(*(int *)*param_3 + 0x18))();
      if (piVar3 == (int *)0x0) goto LAB_82fb476c;
      iVar2 = (**(int (***)())(*piVar3 + 8))();
      uVar6 = (**(int (***)())(**(int **)(iVar2 + 0xc) + 0x20))();
      uVar5 = 0;
    }
    else {
      uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar7 + 0x60) + 0x10);
      uVar5 = *(unsigned int *)(*(int *)(iVar7 + 0x60) + 0xc);
    }
    iVar2 = fn_82FB64A8(*(unsigned int *)(param_1 + 0x44),*(unsigned int *)(param_1 + 0x44),uVar8,
                              uVar9,uVar5,uVar6,&acStack_40);
    if (acStack_40 != '\0') {
      iVar7 = *(int *)(iVar7 + 0xc);
      *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
      iVar4 = fn_82FB75A8(iVar7,*(unsigned int *)(iVar2 + 0x28));
      *param_4 = iVar4;
      if (iVar4 == 0) {
        (**(int (***)())(*(int *)(*param_3 + 4) + 4))(*param_3 + 4,0);
        *param_3 = 0;
      }
      fn_82FA9208(iVar7);
    }
  }
  else {
LAB_82fb476c:
    iVar2 = fn_82FB6330();
  }
  return iVar2;
}

