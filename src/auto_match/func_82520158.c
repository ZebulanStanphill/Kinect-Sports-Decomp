#define true 1
extern int fn_825202C8();
extern unsigned int lbl_832767B8;


unsigned __int64 fn_82520158(char *param_1,unsigned int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  unsigned int uVar10;
  
  piVar4 = lbl_832767B8;
  fn_825202C8(lbl_832767B8);
  iVar3 = *piVar4;
  do {
    if (iVar3 == 0) {
      uVar10 = 0;
      uVar5 = 0;
LAB_825201fc:
      *param_2 = uVar10;
      return uVar5;
    }
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 8)) {
      pcVar9 = *(char **)(iVar3 + 0xc);
      iVar7 = (int)param_1 - (int)pcVar9;
      do {
        cVar1 = *pcVar9;
        pcVar8 = pcVar9;
        cVar2 = *param_1;
        while( true ) {
          if (cVar1 != cVar2) break;
          pcVar8 = pcVar8 + 1;
          if (cVar1 == '\0') goto LAB_82520208;
          cVar1 = *pcVar8;
          cVar2 = pcVar8[iVar7];
        }
        if (cVar1 == cVar2) {
LAB_82520208:
          uVar10 = *(unsigned int *)(pcVar9 + 0x40);
          uVar5 = 1;
          goto LAB_825201fc;
        }
        iVar6 = iVar6 + 1;
        pcVar9 = pcVar9 + 0x44;
        iVar7 = iVar7 + -0x44;
      } while (iVar6 < *(int *)(iVar3 + 8));
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

