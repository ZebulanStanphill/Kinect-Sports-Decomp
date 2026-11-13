typedef unsigned char bool;
#define true 1
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8264C9D0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  char in_RESERVE;
  
  if (param_3 == 0) {
    param_3 = 0xffffffff;
  }
  do {
    puVar8 = param_2;
    for (uVar10 = (unsigned __int64)param_2[1]; uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar5 = puVar8 + 2;
      lVar6 = ((unsigned __int64)*puVar5 & 0x3fffffff) * 4;
      if ((*puVar5 & 0x3fffffff) != 0) {
        bVar1 = (puVar8[3] & param_3) == 0;
        if (!bVar1) {
          lVar7 = lVar6 + 8;
          do {
            puVar8 = (unsigned int *)lVar7;
            uVar3 = *puVar8;
            uVar11 = (unsigned __int64)uVar3;
            uVar9 = param_1;
            if (uVar11 != 0) {
              if ((int)param_1 == 0) break;
              bVar1 = param_1 == uVar11;
              if ((__int64)(param_1 - uVar11) < 1) {
                uVar9 = uVar11;
              }
            }
            if ((uVar9 & 0xffffffff) == uVar11) break;
            do {
              uVar2 = *puVar8;
              if (uVar2 != uVar3) {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,lVar7);
                  *puVar8 = uVar4;
                  bVar1 = true;
                }
                break;
              }
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed(uVar9,0,lVar7);
                *puVar8 = uVar4;
                bVar1 = true;
              }
            } while (!bVar1);
          } while (uVar3 != uVar2);
        }
        bVar1 = (*puVar5 & 0x40000000) == 0;
        if (!bVar1) {
          lVar6 = lVar6 + 0xc;
          do {
            puVar8 = (unsigned int *)lVar6;
            uVar3 = *puVar8;
            uVar11 = (unsigned __int64)uVar3;
            uVar9 = param_1;
            if (uVar11 != 0) {
              if ((int)param_1 == 0) break;
              bVar1 = param_1 == uVar11;
              if ((__int64)(param_1 - uVar11) < 1) {
                uVar9 = uVar11;
              }
            }
            if ((uVar9 & 0xffffffff) == uVar11) break;
            do {
              uVar2 = *puVar8;
              if (uVar2 != uVar3) {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,lVar6);
                  *puVar8 = uVar4;
                  bVar1 = true;
                }
                break;
              }
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed(uVar9,0,lVar6);
                *puVar8 = uVar4;
                bVar1 = true;
              }
            } while (!bVar1);
          } while (uVar3 != uVar2);
        }
      }
      puVar8 = puVar5;
    }
    param_2 = (unsigned int *)*param_2;
    if (param_2 == (unsigned int *)0x0) {
      return;
    }
  } while( true );
}

