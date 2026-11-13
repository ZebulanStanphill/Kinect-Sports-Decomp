extern int fn_82BA02A8();
extern int fn_82BB1E38();
extern int fn_82BBBFB8();
extern unsigned int lbl_820E7F98;


void fn_82BBC8E8(__int64 param_1,int param_2,int param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  __int64 lVar15;
  
  iVar4 = (int)param_4;
  iVar5 = (int)param_1;
  if (*(char *)(iVar4 + iVar5 + 0x380) == '\0') {
    fn_82BA02A8(*(unsigned int *)(iVar5 + 0x754),0xffffffff820e0de4,param_4,
                 (&lbl_820E7F98)[param_3 * 3]);
    if (iVar4 < 0xf) {
      lVar14 = 0xf - param_4;
      lVar10 = (param_4 + 0xe4U & 0x3fffffff) * 4 + param_1;
      do {
        puVar6 = (unsigned int *)lVar10;
        lVar8 = 0;
        puVar6[0x10] = puVar6[0x11];
        puVar6[0x20] = puVar6[0x21];
        lVar15 = 4;
        *puVar6 = puVar6[1];
        do {
          uVar9 = (-0x278 - param_1) + lVar10 + lVar8;
          uVar13 = (-0x27c - param_1) + lVar10 + lVar8;
          uVar12 = (-0x23c - param_1) + lVar10 + lVar8;
          uVar11 = (-0x1fc - param_1) + lVar10 + lVar8;
          uVar2 = *(unsigned int *)
                   ((int)(((-0x238 - param_1) + lVar10 + lVar8 & 0xffffffffU) << 2) + iVar5);
          uVar3 = *(unsigned int *)
                   ((int)(((-0x1f8 - param_1) + lVar10 + lVar8 & 0xffffffffU) << 2) + iVar5);
          lVar8 = lVar8 + 1;
          *(unsigned int *)((int)((uVar13 & 0xffffffff) << 2) + iVar5) =
               *(unsigned int *)((int)((uVar9 & 0xffffffff) << 2) + iVar5);
          *(unsigned int *)((int)((uVar12 & 0xffffffff) << 2) + iVar5) = uVar2;
          *(unsigned int *)((int)((uVar11 & 0xffffffff) << 2) + iVar5) = uVar3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar14 = lVar14 + -1;
        lVar10 = lVar10 + 4;
      } while (lVar14 != 0);
    }
    *(unsigned int *)(iVar5 + 0x3cc) = 0;
    *(unsigned int *)(iVar5 + 0x40c) = 0;
    lVar10 = param_1 + 0x73c;
    *(unsigned int *)(iVar5 + 0x44c) = 0xf;
    lVar14 = 4;
    do {
      *(unsigned int *)((int)lVar10 + -0x1fc) = 0;
      *(unsigned int *)((int)lVar10 + -0xfc) = 0x13;
      lVar10 = lVar10 + 4;
      *(unsigned int *)lVar10 = 0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if ((*(char *)(param_2 + 0x818) == '\0') || (param_3 == 0x12)) {
      if ((*(char *)(param_2 + 0x818) == '\0') || (param_3 != 0x12)) {
        uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x824) - 1;
        *(int *)(param_2 + 0x824) = (int)uVar9;
      }
      else {
        uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x824);
        *(unsigned char *)(param_2 + 0x818) = 0;
        *(unsigned char *)(param_2 + 0x819) = 0;
        *(unsigned int *)(param_2 + 0x81c) = 0;
      }
      fn_82BB1E38(param_2,uVar9);
    }
    else {
      *(int *)(param_2 + 0x824) = *(int *)(param_2 + 0x824) + -1;
      fn_82BB1E38(param_2);
      *(int *)(param_2 + 0x81c) = *(int *)(param_2 + 0x81c) + -1;
    }
    for (piVar1 = *(int **)(*(int *)(param_2 + 0xa4) + 0x1c); piVar1[2] != 0;
        piVar1 = (int *)piVar1[2]) {
      if ((piVar1[0x39] & 1U) != 0) {
        iVar7 = (**(int (***)())(*piVar1 + 0x30))(piVar1);
        if ((((iVar7 != 0) && (piVar1[4] != 0)) && (piVar1[5] == 0)) && (iVar4 < piVar1[0xe])) {
          piVar1[0xe] = piVar1[0xe] + -1;
          piVar1[0x14] = piVar1[0x14];
        }
      }
    }
    fn_82BA02A8(*(unsigned int *)(iVar5 + 0x754),0xffffffff820e0dc4);
    fn_82BBBFB8(param_1);
  }
  return;
}

