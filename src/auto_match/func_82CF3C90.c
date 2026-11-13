extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF33D0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AA630;
extern unsigned int lbl_821AAD20;


int fn_82CF3C90(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned short *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x58);
  iVar9 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(unsigned int *)(iVar1 + 0x30) = 0;
    *(unsigned int *)(iVar1 + 0x34) = 0;
    *(unsigned int *)(iVar1 + 0x38) = 0x80000000;
    lVar10 = 8;
    *(unsigned char **)(iVar1 + 0x4c) = &lbl_821AA630;
    puVar4 = (unsigned int *)(iVar1 + -4);
    *(unsigned int *)(iVar1 + 0x48) = 0;
    puVar5 = (unsigned short *)(iVar1 + 0x1e);
    *(unsigned int *)(iVar1 + 0x50) = 0;
    *(unsigned int *)(iVar1 + 0x54) = 1;
    uVar3 = lbl_821AAD20;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = uVar3;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(unsigned __int64 *)(iVar1 + 0x40) = lbl_82005710;
  }
  param_2 = param_2 * 0xc;
  iVar8 = *(int *)(param_2 + *param_1 + 4);
  iVar2 = fn_82CE5410();
  if ((int)(*(unsigned int *)(iVar1 + 0x38) & 0x3fffffff) < iVar8) {
    iVar6 = (*(unsigned int *)(iVar1 + 0x38) & 0x3fffffff) << 1;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),(int *)(iVar1 + 0x30),iVar6,4);
  }
  *(int *)(iVar1 + 0x34) = iVar8;
  piVar7 = (int *)(param_2 + *param_1);
  if (0 < piVar7[1]) {
    iVar8 = 0;
    iVar2 = 0;
    do {
      puVar4 = (unsigned int *)(*piVar7 + iVar2);
      iVar6 = *(int *)(iVar1 + 0x30);
      uVar3 = fn_82CF33D0((unsigned __int64)(unsigned int)puVar4[7] + (unsigned __int64)(unsigned int)param_1[3],
                            (unsigned __int64)(unsigned int)puVar4[8] + (unsigned __int64)(unsigned int)param_1[3],puVar4,*puVar4,
                            param_3);
      *(unsigned int *)(iVar6 + iVar8) = uVar3;
      piVar7 = (int *)(param_2 + *param_1);
      iVar9 = iVar9 + 1;
      iVar2 = iVar2 + 0x24;
      iVar8 = iVar8 + 4;
    } while (iVar9 < piVar7[1]);
  }
  return iVar1;
}

