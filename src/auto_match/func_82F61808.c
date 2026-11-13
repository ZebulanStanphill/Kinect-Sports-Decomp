typedef unsigned char bool;
#define true 1
extern int fn_82A1E810();
extern int fn_82BFE128();
extern int fn_82BFE9D8();
extern int fn_82F611D8();
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82F61808(__int64 param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                      unsigned int *param_5)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  unsigned int *apuStack_50 [20];
  
  apuStack_50[0] = (unsigned int *)0x0;
  lVar6 = fn_82F611D8(param_1 + 0x30,apuStack_50);
  puVar5 = apuStack_50[0];
  if ((int)lVar6 == 0) {
    *apuStack_50[0] = param_2;
    lVar8 = param_1 + 0x2c;
    apuStack_50[0][1] = param_3;
    apuStack_50[0][2] = param_4;
    puVar9 = (unsigned int *)lVar8;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar8);
      *puVar9 = uVar3;
    }
    iVar4 = (int)param_1;
    lVar6 = fn_82BFE128(*(unsigned int *)(iVar4 + 0x34),apuStack_50[0]);
    bVar1 = lVar6 == 0;
    if (bVar1) {
      lVar6 = 0;
      if (param_5 != (unsigned int *)0x0) {
        *param_5 = puVar5[4];
      }
    }
    else {
      do {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar9 - 1,0,lVar8);
          *puVar9 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      iVar2 = *(int *)(iVar4 + 0x40);
      iVar7 = puVar5[4] * 0x14;
      *(unsigned int *)(iVar7 + iVar2) = 0;
      iVar7 = iVar7 + iVar2;
      *(unsigned int *)(iVar7 + 4) = 0;
      *(unsigned int *)(iVar7 + 8) = 0;
      *(unsigned int *)(iVar7 + 0xc) = 0;
      fn_82BFE9D8(*(unsigned int *)(param_1 + 0x30));
    }
    fn_82A1E810(*(unsigned int *)(iVar4 + 0x24));
  }
  return lVar6;
}

