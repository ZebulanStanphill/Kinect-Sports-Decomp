typedef unsigned char bool;
#define false 0
extern int fn_823AB478();
extern int fn_825264F0();
extern int fn_82526608();
extern int fn_825266F8();
extern int fn_82825AD0();
extern unsigned int lbl_832961E4;
extern unsigned int lbl_832961F4;
extern unsigned int lbl_83296204;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82526358(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int **ppuVar7;
  int iVar8;
  int iVar9;
  unsigned int uStack0000001c;
  unsigned int *puStack_50;
  unsigned int *apuStack_4c [19];
  
  uStack0000001c = param_2;
  uVar3 = fn_823AB478();
  iVar9 = uVar3 * 0x170;
  if (*(int *)(iVar9 + -0x7cd69e20) != param_1) {
    fn_825266F8(&lbl_832961E4 + iVar9);
    fn_825266F8(&lbl_832961F4 + iVar9);
  }
  *(int *)(iVar9 + -0x7cd69e20) = param_1;
  bVar2 = false;
  puVar1 = *(unsigned int **)(iVar9 + -0x7cd69e18);
  puStack_50 = puVar1;
  puVar6 = (unsigned int *)puVar1[1];
  while (*(char *)((int)puVar6 + 0x15) == '\0') {
    if ((unsigned int)puVar6[3] < param_2) {
      puVar6 = (unsigned int *)puVar6[2];
    }
    else {
      puStack_50 = puVar6;
      puVar6 = (unsigned int *)*puVar6;
    }
  }
  if ((puStack_50 == puVar1) || (param_2 < (unsigned int)puStack_50[3])) {
    ppuVar7 = apuStack_4c;
    apuStack_4c[0] = puVar1;
  }
  else {
    ppuVar7 = &puStack_50;
  }
  if (*ppuVar7 != *(unsigned int **)(iVar9 + -0x7cd69e18)) {
    bVar2 = param_3 == (*ppuVar7)[4];
    fn_82825AD0(apuStack_4c,&lbl_832961E4 + iVar9);
  }
  piVar4 = (int *)fn_82526608(&lbl_832961E4 + iVar9,&stack0x0000001c);
  *piVar4 = param_3;
  if (!bVar2) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar9 + -0x7cd69df0) == 0) {
        iVar5 = iVar8 * 0x14 + iVar9;
        *(unsigned int *)(iVar5 + -0x7cd69df8) = param_2;
        *(int *)(iVar5 + -0x7cd69df4) = param_3;
        *(unsigned int *)(iVar5 + -0x7cd69df0) = 1;
        *(int *)(&lbl_83296204 + iVar5) = param_1;
        *(unsigned char *)(iVar5 + -0x7cd69dec) = 0;
        if (*(int *)(iVar9 + -0x7cd69cb4) != 0) {
          return;
        }
        fn_825264F0(uVar3 & 0xff);
        return;
      }
      iVar5 = iVar5 + 0x14;
      iVar8 = iVar8 + 1;
    } while (iVar5 < 300);
  }
  return;
}

