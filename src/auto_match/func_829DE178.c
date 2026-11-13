extern int fn_829DDFF8();


void fn_829DE178(int param_1,int param_2,int *param_3,int param_4,int param_5,unsigned __int64 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *param_3;
  iVar3 = param_3[2];
  uVar5 = param_3[3] * iVar1 + param_2;
  if (param_4 == 0) {
    uVar8 = param_3[1] * iVar1 + param_2;
    if (uVar8 < uVar5) {
      puVar9 = (unsigned int *)(uVar8 + iVar2 * 4);
      do {
        for (puVar7 = puVar9; puVar7 < puVar9 + (iVar3 - iVar2); puVar7 = puVar7 + 1) {
          uVar4 = *puVar7;
          fn_829DDFF8(param_6,uVar4 >> 0x10 & 0xff,uVar4 >> 8 & 0xff,uVar4 & 0xff);
        }
        uVar8 = uVar8 + iVar1;
        puVar9 = (unsigned int *)((int)puVar9 + iVar1);
      } while (uVar8 < uVar5);
    }
  }
  else {
    uVar8 = param_3[1] * iVar1 + param_2;
    param_4 = param_3[1] * param_5 + param_4;
    if (uVar8 < uVar5) {
      puVar9 = (unsigned int *)(uVar8 + iVar2 * 4);
      do {
        pcVar6 = (char *)(*param_3 + param_4);
        for (puVar7 = puVar9; puVar7 < puVar9 + (iVar3 - iVar2); puVar7 = puVar7 + 1) {
          if (*pcVar6 != '\0') {
            uVar4 = *puVar7;
            fn_829DDFF8(param_6,uVar4 >> 0x10 & 0xff,uVar4 >> 8 & 0xff,uVar4 & 0xff);
          }
          pcVar6 = pcVar6 + 1;
        }
        uVar8 = uVar8 + iVar1;
        puVar9 = (unsigned int *)((int)puVar9 + iVar1);
        param_4 = param_4 + param_5;
      } while (uVar8 < uVar5);
    }
  }
  return;
}

