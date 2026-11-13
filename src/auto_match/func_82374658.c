extern int fn_822315A0();
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_823588D0();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82371B58();
extern int fn_823739A0();
extern int fn_82373B70();
extern int fn_82374968();
extern int fn_82375880();
extern int fn_823760D0();
extern int fn_82376360();
extern int fn_82376508();
extern int fn_82378558();
extern int fn_82380548();
extern int fn_82384660();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern unsigned int iStack_3c;


unsigned __int64 fn_82374658(double param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  int *piStack_40;
  int iStack_3c;
  
  fn_823588D0();
  fn_82376360(param_2);
  fn_823760D0(param_2);
  iVar4 = (int)param_2;
  uVar1 = *(unsigned int *)(iVar4 + 0x54);
  if ((uVar1 < 5) || ((6 < uVar1 && ((uVar1 < 0xb || (0xf < uVar1)))))) {
    if (*(int *)(iVar4 + 0xac) != 1) {
      iVar5 = fn_8249ABC0();
      if (*(int *)(iVar4 + 0xb4) != -1) {
        fn_8249D980(*(unsigned int *)(iVar5 + 0x110));
        *(unsigned int *)(iVar4 + 0xb4) = 0xffffffff;
      }
      *(unsigned int *)(iVar4 + 0xac) = 1;
    }
    uVar6 = 1;
  }
  else {
    fn_823598B0(param_2,0);
    uVar6 = 0;
  }
  fn_82359928(param_2,uVar6);
  fn_82374968(param_2);
  *(float *)(iVar4 + 0x208) = (float)((double)*(float *)(iVar4 + 0x208) + param_1);
  *(float *)(iVar4 + 0x210) = (float)((double)*(float *)(iVar4 + 0x210) + param_1);
  fn_82375880(param_2);
  puVar2 = *(unsigned int **)(iVar4 + 0x188);
  for (puVar12 = *(unsigned int **)(iVar4 + 0x184); puVar12 != puVar2; puVar12 = puVar12 + 2) {
    fn_82378558(param_1,*puVar12);
  }
  fn_82373B70(param_2);
  fn_82384660(*(unsigned int *)(iVar4 + 0x54c));
  fn_82380548(param_1,*(unsigned int *)(iVar4 + 0x664));
  uVar9 = 0;
  if (((*(int **)(iVar4 + 8))[1] - **(int **)(iVar4 + 8) & 0xfffffffcU) != 0) {
    do {
      lVar8 = param_2 + 0x5ec;
      piVar3 = *(int **)((int)((uVar9 & 0xffffffff) << 2) + **(int **)(iVar4 + 8));
      if ((int)uVar9 != 0) {
        lVar8 = param_2 + 0x5f0;
      }
      if (*(int *)lVar8 == 0) {
        uVar7 = 0;
        uVar1 = *(unsigned int *)(piVar3[4] * 4 + *piVar3);
        uVar11 = (unsigned __int64)uVar1;
        uVar10 = (unsigned __int64)*(unsigned int *)(uVar1 + 8);
        if (uVar10 != 0) {
          do {
            iVar5 = fn_822ABA88(uVar11);
            if (*(int *)(iVar5 + 0x24) != 0) {
              *(unsigned int *)lVar8 = 1;
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (*(int **)(iVar4 + 8))[1] - **(int **)(iVar4 + 8) >> 2);
  }
  *(float *)(iVar4 + 0x5e8) = (float)((double)*(float *)(iVar4 + 0x5e8) + param_1);
  fn_823739A0(&piStack_40,param_2);
  if ((piStack_40 == (int *)0x0) || (iVar5 = (**(int (***)())(*piStack_40 + 0x28))(), iVar5 == 0)) {
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    uVar6 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x204) == 0) {
      fn_82376508(param_2);
    }
    *(unsigned int *)(iVar4 + 0x344) = 0;
    if (*(int *)(*(int *)(*(int *)(iVar4 + 0xd4) + 0xc) + 0x58) != 0) {
      fn_8229F618();
    }
    fn_82371B58(param_2);
    *(unsigned int *)(iVar4 + 0x9f8) = 1;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    uVar6 = 2;
  }
  return uVar6;
}

