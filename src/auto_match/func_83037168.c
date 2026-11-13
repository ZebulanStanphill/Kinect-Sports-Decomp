extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_83037168(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  
  iVar1 = param_1[2];
  puVar4 = (unsigned int *)fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 0x10);
  uVar3 = 0;
  if (puVar4 != (unsigned int *)0x0) {
    iVar2 = param_1[1] - *param_1 >> 4;
    lVar8 = (__int64)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        iVar6 = 0;
        puVar7 = puVar4;
        do {
          if (puVar7 != (unsigned int *)0x0) {
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[2] = 0;
          }
          lVar8 = lVar8 + -1;
          puVar5 = (unsigned int *)(iVar6 + *param_1);
          iVar6 = iVar6 + 0x10;
          *puVar7 = *puVar5;
          puVar7[1] = puVar5[1];
          puVar7[2] = puVar5[2];
          puVar7[3] = puVar5[3];
          puVar7 = puVar7 + 4;
        } while (lVar8 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = (int)puVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = (int)(puVar4 + iVar2 * 4);
  }
  return uVar3;
}

