extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82CEAC20();
extern int fn_82E17300();
extern int fn_82E1BD60();


void fn_82E17058(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar2;
  int iVar8;
  unsigned int *puVar9;
  int *piVar10;
  
  iVar3 = fn_82CEA280(param_1 + 6,param_2,0xffffffffffffffff);
  if ((param_3 & 0xffffffff) == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = fn_82CEA280(param_1 + 6,param_3,0xffffffffffffffff);
  }
  if (iVar3 != -1) {
    piVar10 = param_1 + 3;
    iVar8 = iVar3;
    do {
      puVar1 = *(unsigned int **)(iVar8 * 8 + *piVar10);
      *puVar1 = (int)param_3;
      if (iVar4 != -1) {
        uVar5 = fn_82CEA280(param_1 + 6,param_3,0xffffffffffffffff);
        iVar6 = fn_82E1BD60(piVar10);
        puVar9 = (unsigned int *)(iVar6 * 8 + *piVar10);
        *puVar9 = puVar1;
        puVar9[1] = uVar5;
        iVar7 = fn_82CE5410();
        fn_82CEA160(param_1 + 6,*(unsigned int *)(iVar7 + 0x10),param_3,iVar6);
      }
      iVar8 = *(int *)(iVar8 * 8 + *piVar10 + 4);
    } while (iVar8 != -1);
  }
  if ((iVar4 == -1) && ((param_3 & 0xffffffff) != 0)) {
    if (iVar3 != -1) {
      piVar10 = param_1 + 6;
      iVar3 = fn_82CEA220(piVar10,param_2);
      uVar5 = *(unsigned int *)(iVar3 * 8 + param_1[6] + 4);
      fn_82CEA358(piVar10,iVar3);
      iVar3 = fn_82CE5410();
      fn_82CEA160(piVar10,*(unsigned int *)(iVar3 + 0x10),param_3,uVar5);
    }
  }
  else {
    fn_82E17300(param_1 + 3,param_2);
  }
  iVar3 = param_1[2];
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 0x50)) {
    iVar8 = 0;
    do {
      iVar3 = *(int *)(iVar3 + 0x4c) + iVar8;
      if ((unsigned __int64)*(unsigned int *)(iVar3 + 4) == (param_2 & 0xffffffff)) {
        *(int *)(iVar3 + 4) = (int)param_3;
      }
      iVar3 = param_1[2];
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 8;
    } while (iVar4 < *(int *)(iVar3 + 0x50));
  }
  (**(int (***)())(*param_1 + 0x20))(param_1,param_2);
  if ((param_4 & 0xffffffff) != 0) {
    iVar3 = *param_1;
    uVar2 = fn_82CEAC20(param_4);
    (**(int (***)())(iVar3 + 0x1c))(param_1,param_3,uVar2);
  }
  return;
}

