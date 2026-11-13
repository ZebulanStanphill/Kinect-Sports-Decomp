extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_830821E0(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_40;
  
  iVar4 = param_1[1];
  iVar3 = fn_82CE5410();
  if ((int)(param_3[2] & 0x3fffffffU) < iVar4) {
    iVar6 = (param_3[2] & 0x3fffffffU) << 1;
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_3,iVar6,4);
  }
  param_3[1] = iVar4;
  uVar1 = param_2[1];
  uVar8 = (unsigned __int64)uVar1;
  if (0 < (int)uVar1) {
    auStack_40 = uVar1;
    iVar4 = fn_82CE5410();
    iVar4 = (**(int (***)())(**(int **)(iVar4 + 0xc) + 0xc))(*(int **)(iVar4 + 0xc),&auStack_40,4);
    uVar7 = auStack_40;
    if (auStack_40 == 0) {
      uVar7 = 0x80000000;
    }
    iVar3 = 0;
    if (0 < (int)uVar1) {
      iVar6 = 0;
      do {
        *(int *)(iVar6 + iVar4) = iVar3;
        piVar5 = (int *)(iVar6 + *param_2);
        iVar6 = iVar6 + 4;
        iVar3 = *piVar5 + iVar3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar6 = 0;
    iVar3 = *param_3;
    if (0 < (int)param_1[1]) {
      piVar5 = (int *)(*(int *)*param_1 + -4);
      do {
        piVar5 = piVar5 + 1;
        iVar2 = *(int *)(*piVar5 * 4 + iVar4);
        *(int *)(*piVar5 * 4 + iVar4) = iVar2 + 1;
        *(int *)(iVar2 * 4 + iVar3) = iVar6;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[1]);
    }
    iVar3 = fn_82CE5410();
    if ((uVar7 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iVar4,uVar7 & 0x3fffffff,4);
    }
  }
  return;
}

