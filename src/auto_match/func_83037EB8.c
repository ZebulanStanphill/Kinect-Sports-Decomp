extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_83037EB8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar1 = param_1[2];
  iVar4 = fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 8);
  uVar3 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[1] - *param_1 >> 3;
    lVar8 = (__int64)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        iVar7 = 0;
        do {
          puVar6 = (unsigned int *)(iVar7 + iVar4);
          lVar8 = lVar8 + -1;
          puVar5 = (unsigned int *)(iVar7 + *param_1);
          iVar7 = iVar7 + 8;
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
        } while (lVar8 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = iVar2 * 8 + iVar4;
  }
  return uVar3;
}

