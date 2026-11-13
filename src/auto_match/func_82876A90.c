#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82876A38();
extern int fn_82F66368();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


int fn_82876A90(int *param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  char *pcVar9;
  __int64 lVar8;
  int iVar10;
  unsigned __int64 uVar11;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x70);
  *puVar1 = register0x0000000c;
  lVar8 = param_2;
  do {
    pcVar9 = (char *)lVar8;
    lVar8 = lVar8 + 1;
  } while (*pcVar9 != '\0');
  lVar5 = ((lVar8 - param_2) - 1U & 0xffffffff) + 1;
  uVar11 = -lVar5 & 0xfffffff0;
  fn_82F6E8D4();
  lVar8 = (ZEXT48(&stack0x00000000) - 0x70) + uVar11;
  *(unsigned int *)lVar8 = *puVar1;
  lVar8 = lVar8 + 0x50;
  fn_82F66368(lVar8,lVar5);
  fn_82876A38(lVar8);
  iVar10 = 0;
  iVar3 = *param_1 + -1;
  do {
    uVar6 = iVar3 - iVar10;
    iVar4 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0) + iVar10;
    pbVar7 = (unsigned char *)(param_1[iVar4 * 2 + 1] + (int)param_1);
    lVar5 = lVar8;
    do {
      uVar2 = (unsigned int)*(unsigned char *)lVar5;
      uVar6 = (unsigned int)*pbVar7;
      if (*pbVar7 == 0) break;
      pbVar7 = pbVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (uVar6 == uVar2);
    if (uVar6 == uVar2) {
      return param_1[iVar4 * 2 + 2];
    }
    if ((int)(uVar6 - uVar2) < 1) {
      iVar10 = iVar4 + 1;
    }
    else {
      iVar3 = iVar4 + -1;
    }
    if (iVar3 < iVar10) {
      return 0;
    }
  } while( true );
}

