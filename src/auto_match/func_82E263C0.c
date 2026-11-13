extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_83187448;
extern unsigned int lbl_83187510;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E263C0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = lbl_8208E05C;
  iVar4 = lbl_8208E058;
  iVar3 = lbl_8208E054;
  iVar2 = lbl_8202E624;
  iVar1 = lbl_8202E620;
  iVar7 = lbl_8202E61C;
  if (param_2 == 0) {
    *param_1 = lbl_8202E618;
    param_1[1] = iVar7;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    return;
  }
  iVar7 = 0;
  piVar6 = &lbl_83187510;
  uVar5 = 0;
  do {
    if (param_2 == *piVar6) {
      piVar6 = *(int **)(iVar7 * 0x24 + -0x7ce78aec);
      if (piVar6 == (int *)lbl_83187448) {
        *param_1 = (&lbl_83187510)[iVar7 * 9];
        param_1[1] = iVar3;
        param_1[2] = iVar4;
      }
      else {
        iVar7 = piVar6[1];
        iVar1 = piVar6[2];
        iVar8 = piVar6[3];
        *param_1 = *piVar6;
        param_1[1] = iVar7;
        param_1[2] = iVar1;
      }
      goto LAB_82e26478;
    }
    uVar5 = uVar5 + 0x24;
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 9;
  } while ((uVar5 & 0xffffffff) != 0x804);
  *param_1 = param_2;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
LAB_82e26478:
  param_1[3] = iVar8;
  return;
}

