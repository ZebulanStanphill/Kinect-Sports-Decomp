extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_82FB1A80(int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  
  uVar8 = param_2 + (unsigned __int64)(unsigned int)param_1[2];
  iVar3 = fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0x18;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        iVar7 = 0;
        lVar4 = (__int64)(int)uVar1;
        do {
          puVar5 = (unsigned int *)(iVar7 + iVar3 + -4);
          puVar6 = (unsigned int *)(iVar7 + *param_1 + -4);
          lVar9 = 6;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          lVar4 = lVar4 + -1;
          iVar7 = iVar7 + 0x18;
        } while (lVar4 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = (int)uVar8;
    uVar2 = 1;
    param_1[1] = (int)(((__int64)(int)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0xffffffff) <<
                      3) + iVar3;
  }
  return uVar2;
}

