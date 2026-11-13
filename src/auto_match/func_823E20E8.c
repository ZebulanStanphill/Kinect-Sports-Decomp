extern unsigned int *auStack_58;
extern int fn_82230040();
extern int fn_823E29C0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B6A74;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_4c;


unsigned int * fn_823E20E8(unsigned int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  __int64 lVar5;
  char *pcVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int **ppuVar9;
  char *pcVar10;
  int iStack0000001c;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned int auStack_58 [2];
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  
  *param_1 = &lbl_821B6A74;
  param_1[3] = 0;
  iStack0000001c = param_2;
  iVar2 = fn_8265C9E0(0x88);
  if (iVar2 == 0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  param_1[2] = iVar2;
  *(int *)iVar2 = iVar2;
  *(unsigned int *)(param_1[2] + 4) = param_1[2];
  *(unsigned int *)(param_1[2] + 8) = param_1[2];
  *(unsigned char *)(param_1[2] + 0x84) = 1;
  *(unsigned char *)(param_1[2] + 0x85) = 1;
  if (param_2 != 0) {
    piVar3 = (int *)fn_8251F720(&stack0x0000001c,0);
    lVar5 = 0;
    piVar7 = piVar3;
    if (piVar3 != (int *)0x0) {
      do {
        if (*piVar7 == 0) break;
        lVar5 = lVar5 + 1;
        piVar7 = (int *)(-(unsigned int)(piVar7[1] != 0) & (unsigned int)(piVar7 + 1));
      } while (piVar7 != (int *)0x0);
      piVar7 = piVar3;
      if (0 < (int)lVar5) {
        do {
          iVar2 = fn_8251F720(piVar7,0);
          auStack_58[0] = fn_8265BF48(iVar2,0);
          puStack_60 = (unsigned int *)param_1[2];
          puVar8 = (unsigned int *)((unsigned int *)param_1[2])[1];
          while (*(char *)((int)puVar8 + 0x85) == '\0') {
            if ((unsigned int)puVar8[3] < auStack_58[0]) {
              puVar8 = (unsigned int *)puVar8[2];
            }
            else {
              puStack_60 = puVar8;
              puVar8 = (unsigned int *)*puVar8;
            }
          }
          if ((puStack_60 == (unsigned int *)param_1[2]) || (auStack_58[0] < (unsigned int)puStack_60[3])) {
            ppuVar9 = &puStack_5c;
            puStack_5c = (unsigned int *)param_1[2];
          }
          else {
            ppuVar9 = &puStack_60;
          }
          if (*ppuVar9 == (unsigned int *)param_1[2]) {
            pcVar4 = (char *)fn_823E29C0(param_1 + 1,auStack_58);
            pcVar6 = pcVar4 + 0x40;
            pcVar10 = pcVar4;
            do {
              if (pcVar6 <= pcVar10) break;
              cVar1 = pcVar10[iVar2 - (int)pcVar4];
              *pcVar10 = cVar1;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            if (pcVar10 == pcVar6) {
              pcVar10[-1] = '\0';
            }
            *(unsigned int *)pcVar6 = *(unsigned int *)(iVar2 + 0x40);
            *(unsigned int *)(pcVar4 + 0x44) = *(unsigned int *)(iVar2 + 0x44);
            fn_82F68CC0(pcVar4 + 0x48,iVar2 + 0x48,0x2c);
          }
          fn_8251FA58(iVar2);
          lVar5 = lVar5 + -1;
          piVar7 = piVar7 + 1;
        } while (lVar5 != 0);
      }
    }
    fn_8251FA58(piVar3);
  }
  return param_1;
}

