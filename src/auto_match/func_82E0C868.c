extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82E0A398();
extern int fn_82E0BA38();
extern int fn_82E0C5E0();
extern int fn_82E16240();
extern int fn_82E162A8();
extern int fn_82E163F8();


int fn_82E0C868(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned __int64 uVar6;
  int *piVar9;
  unsigned int *puVar10;
  int *piVar11;
  int iVar12;
  
  (**(int (***)())(*param_1 + 0x1c))();
  iVar7 = fn_82E163F8(param_1[6]);
  if (iVar7 == 0) {
    iVar7 = param_1[0x1e];
    (**(int (***)())(*param_1 + 0x24))(param_1);
    (**(int (***)())(*param_1 + 0x28))(param_1);
    uVar5 = fn_82E0A398();
    if ((uVar5 & 0xffffffff) != 0) {
      fn_82E0C5E0(param_1,uVar5);
    }
    iVar1 = param_1[0x1e];
    iVar12 = 0;
    piVar11 = (int *)(iVar1 + 0x28);
    iVar8 = *(int *)(iVar1 + 0x30);
    if (-1 < iVar8) {
      piVar9 = (int *)*piVar11;
      do {
        if (*piVar9 != -1) break;
        iVar12 = iVar12 + 1;
        piVar9 = piVar9 + 2;
      } while (iVar12 <= iVar8);
    }
    if (iVar12 <= iVar8) {
      do {
        uVar2 = param_1[6];
        puVar10 = (unsigned int *)(iVar12 * 8 + *piVar11);
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        iVar8 = fn_82CE5410();
        fn_82CEA160((unsigned __int64)uVar2 + 0x10,*(unsigned int *)(iVar8 + 0x10),uVar3,uVar4);
        iVar8 = *(int *)(iVar1 + 0x30);
        iVar12 = iVar12 + 1;
        if (iVar12 <= iVar8) {
          piVar9 = (int *)(iVar12 * 8 + *piVar11);
          do {
            if (*piVar9 != -1) break;
            iVar12 = iVar12 + 1;
            piVar9 = piVar9 + 2;
          } while (iVar12 <= iVar8);
        }
      } while (iVar12 <= iVar8);
    }
    uVar6 = fn_82E0BA38(param_1);
    fn_82E162A8(param_1[6],uVar6);
    uVar6 = (**(int (***)())(*param_1 + 0x18))(param_1);
    fn_82E16240(param_1[6],*(unsigned int *)(param_1[0x1e] + 0x34),uVar6);
    if (iVar7 == 0) {
      fn_82CE4118(param_1[0x1e]);
      param_1[0x1e] = 0;
    }
  }
  return param_1[6];
}

