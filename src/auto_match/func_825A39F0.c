extern int fn_825A44F0();
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82CEA4B8();


void fn_825A39F0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  int iVar8;
  unsigned __int64 uVar7;
  int iVar9;
  int iVar10;
  int *piVar11;
  unsigned int *puVar12;
  char acStack_60 [96];
  
  iVar9 = param_1 + 0x10;
  fn_825A44F0(acStack_60,iVar9,param_2);
  if (acStack_60[0] != '\0') {
    iVar4 = fn_82CEA280(iVar9,param_2,0xffffffffffffffff);
    iVar4 = iVar4 * 0x28;
    iVar6 = iVar4 + *(int *)(param_1 + 4);
    iVar5 = fn_82CE5410();
    fn_82CEA4B8(iVar6,*(unsigned int *)(iVar5 + 0x10));
    fn_82BA02A8(iVar6);
    iVar5 = iVar4 + *(int *)(param_1 + 4);
    iVar6 = 0;
    if (0 < *(int *)(iVar5 + 0x20)) {
      iVar10 = 0;
      do {
        iVar8 = *(int *)(iVar5 + 0x1c) + iVar10;
        iVar5 = fn_82CE5410();
        piVar1 = *(int **)(iVar5 + 0x10);
        *(unsigned int *)(iVar8 + 0x44) = 0;
        if ((*(unsigned int *)(iVar8 + 0x48) & 0x80000000) == 0) {
          (**(int (***)())(*piVar1 + 0x10))
                    (piVar1,*(unsigned int *)(iVar8 + 0x40),*(unsigned int *)(iVar8 + 0x48) & 0x3fffffff,4);
        }
        *(unsigned int *)(iVar8 + 0x40) = 0;
        iVar6 = iVar6 + 1;
        *(unsigned int *)(iVar8 + 0x48) = 0x80000000;
        iVar10 = iVar10 + 0x60;
        iVar5 = iVar4 + *(int *)(param_1 + 4);
      } while (iVar6 < *(int *)(iVar5 + 0x20));
    }
    piVar11 = (int *)(iVar5 + 0x1c);
    iVar6 = fn_82CE5410();
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x20);
    piVar1 = *(int **)(iVar6 + 0x10);
    if (0 < (int)*(unsigned int *)(iVar5 + 0x20)) {
      puVar12 = (unsigned int *)(*piVar11 + -0x18);
      do {
        iVar6 = fn_82CE5410();
        piVar2 = *(int **)(iVar6 + 0x10);
        puVar12[0x17] = 0;
        if ((puVar12[0x18] & 0x80000000) == 0) {
          (**(int (***)())(*piVar2 + 0x10))(piVar2,puVar12[0x16],puVar12[0x18] & 0x3fffffff,4);
        }
        puVar12[0x16] = 0;
        uVar7 = uVar7 - 1;
        puVar12 = puVar12 + 0x18;
        *puVar12 = 0x80000000;
      } while (uVar7 != 0);
    }
    *(unsigned int *)(iVar5 + 0x20) = 0;
    if ((*(unsigned int *)(iVar5 + 0x24) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*piVar11,*(unsigned int *)(iVar5 + 0x24) & 0x3fffffff,0x60);
    }
    *(unsigned int *)(iVar5 + 0x24) = 0x80000000;
    *piVar11 = 0;
    *(unsigned int *)(iVar4 + *(int *)(param_1 + 4) + 0xc) = 0;
    uVar3 = fn_82CEA220(iVar9,param_2);
    fn_82CEA358(iVar9,uVar3);
  }
  return;
}

