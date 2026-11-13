extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_823DFD70();
extern int fn_823E1310();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B6A48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_3c;


unsigned int * fn_823DFB10(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  __int64 lVar6;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int **ppuVar10;
  unsigned __int64 uVar7;
  int iStack0000001c;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned int auStack_48 [2];
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  
  *param_1 = &lbl_821B6A48;
  param_1[3] = 0;
  iStack0000001c = param_2;
  iVar3 = fn_8265C9E0(0xa8);
  if (iVar3 == 0) {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  param_1[2] = iVar3;
  *(int *)iVar3 = iVar3;
  *(unsigned int *)(param_1[2] + 4) = param_1[2];
  *(unsigned int *)(param_1[2] + 8) = param_1[2];
  *(unsigned char *)(param_1[2] + 0xa4) = 1;
  *(unsigned char *)(param_1[2] + 0xa5) = 1;
  param_1[5] = 0;
  param_1[7] = param_3;
  if (param_2 != 0) {
    piVar4 = (int *)fn_8251F720(&stack0x0000001c,0);
    lVar6 = 0;
    piVar8 = piVar4;
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar8 == 0) break;
        lVar6 = lVar6 + 1;
        piVar8 = (int *)(-(unsigned int)(piVar8[1] != 0) & (unsigned int)(piVar8 + 1));
      } while (piVar8 != (int *)0x0);
      piVar8 = piVar4;
      if (0 < (int)lVar6) {
        do {
          uVar1 = fn_8251F720(piVar8,0);
          auStack_48[0] = fn_8265BF48(uVar1,0);
          puStack_50 = (unsigned int *)param_1[2];
          puVar9 = (unsigned int *)((unsigned int *)param_1[2])[1];
          while (*(char *)((int)puVar9 + 0xa5) == '\0') {
            if ((unsigned int)puVar9[3] < auStack_48[0]) {
              puVar9 = (unsigned int *)puVar9[2];
            }
            else {
              puStack_50 = puVar9;
              puVar9 = (unsigned int *)*puVar9;
            }
          }
          if ((puStack_50 == (unsigned int *)param_1[2]) || (auStack_48[0] < (unsigned int)puStack_50[3])) {
            ppuVar10 = &puStack_4c;
            puStack_4c = (unsigned int *)param_1[2];
          }
          else {
            ppuVar10 = &puStack_50;
          }
          if (*ppuVar10 == (unsigned int *)param_1[2]) {
            uVar2 = fn_823E1310(param_1 + 1,auStack_48);
            fn_823DFD70(uVar2,uVar1);
          }
          fn_8251FA58(uVar1);
          lVar6 = lVar6 + -1;
          piVar8 = piVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    fn_8251FA58(piVar4);
  }
  uVar7 = (unsigned __int64)(unsigned int)param_1[3];
  if (uVar7 != 0) {
    lVar6 = uVar7 * 0x70;
    if (0x2492492 < uVar7) {
      lVar6 = -1;
    }
    uVar5 = fn_8265CA60(lVar6);
    param_1[5] = uVar5;
    lVar6 = ((unsigned __int64)(unsigned int)param_1[3] & 0x3fffffff) << 2;
    if (0x3fffffff < (unsigned int)param_1[3]) {
      lVar6 = -1;
    }
    uVar5 = fn_8265CA60(lVar6);
    param_1[6] = uVar5;
  }
  return param_1;
}

