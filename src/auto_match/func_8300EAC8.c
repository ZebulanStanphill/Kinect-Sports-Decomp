extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_8300EAC8(int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  
  uVar8 = param_2 + (unsigned __int64)(unsigned int)param_1[2];
  puVar3 = (unsigned int *)
           fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  uVar2 = 0;
  if (puVar3 != (unsigned int *)0x0) {
    uVar1 = (param_1[1] - *param_1) / 0xc;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        iVar5 = 0;
        lVar6 = (__int64)(int)uVar1;
        puVar7 = puVar3;
        do {
          if (puVar7 != (unsigned int *)0x0) {
            puVar7[1] = 1;
            puVar7[2] = 0;
          }
          lVar6 = lVar6 + -1;
          puVar4 = (unsigned int *)(iVar5 + *param_1);
          iVar5 = iVar5 + 0xc;
          *puVar7 = *puVar4;
          puVar7[1] = puVar4[1];
          puVar7[2] = puVar4[2];
          puVar7 = puVar7 + 3;
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = (int)puVar3;
    param_1[2] = (int)uVar8;
    uVar2 = 1;
    param_1[1] = (int)(((__int64)(int)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0xffffffff) <<
                      2) + (int)puVar3;
  }
  return uVar2;
}

