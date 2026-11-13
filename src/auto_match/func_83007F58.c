extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_83007F58(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  __int64 lVar9;
  
  iVar1 = param_1[2];
  iVar4 = fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 0x20);
  uVar3 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[1] - *param_1 >> 5;
    lVar8 = (__int64)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        puVar7 = (unsigned int *)(iVar4 + 0x1c);
        do {
          if (puVar7 != (unsigned int *)0x1c) {
            puVar7[-2] = 0;
            puVar7[-1] = 0;
            *puVar7 = 0;
          }
          puVar5 = puVar7 + -8;
          puVar6 = (unsigned int *)((int)puVar7 + (*param_1 - iVar4) + -0x20);
          lVar9 = 8;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 8;
        } while (lVar8 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = iVar2 * 0x20 + iVar4;
  }
  return uVar3;
}

