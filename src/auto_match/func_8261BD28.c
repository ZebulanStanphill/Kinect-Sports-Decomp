extern int fn_82522ED8();
extern int fn_825A23C0();
extern int fn_825A2410();
extern int fn_8261BE28();
extern unsigned int lbl_832749B4;
extern unsigned int lbl_83274A04;


void fn_8261BD28(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  short *psVar8;
  int aiStack_50;
  
  if (lbl_83274A04 != 0) {
    aiStack_50 = fn_825A23C0(4,4);
    iVar7 = 0;
    if (0 < lbl_83274A04) {
      psVar8 = &lbl_832749B4;
      do {
        iVar5 = 0;
        lVar6 = 10;
        do {
          if (*psVar8 != 0) {
            puVar4 = param_1 + 2;
            uVar3 = 0;
            if (*param_1 != 0) {
              do {
                if (*(short *)((int)puVar4 + 6) == *psVar8) goto LAB_8261bdc0;
                uVar3 = uVar3 + 1;
                puVar4 = (unsigned int *)(*puVar4 + (int)puVar4);
              } while (uVar3 < *param_1);
            }
            puVar4 = (unsigned int *)0x0;
LAB_8261bdc0:
            if (puVar4 != (unsigned int *)0x0) {
              puVar1 = (unsigned int *)fn_825A2410(&aiStack_50);
              iVar5 = iVar5 + 1;
              *puVar1 = puVar4;
            }
          }
          lVar6 = lVar6 + -1;
          psVar8 = psVar8 + 1;
        } while (lVar6 != 0);
        iVar2 = aiStack_50;
        if (1 < iVar5) {
          iVar2 = fn_8261BE28();
        }
        iVar7 = iVar7 + 1;
        *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 4);
      } while (iVar7 < lbl_83274A04);
    }
    fn_82522ED8();
  }
  return;
}

