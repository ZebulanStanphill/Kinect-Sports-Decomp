#define true 1
extern int fn_827A53E8();
extern int fn_827A5B60();
extern int fn_827A6A50();


void fn_827A7218(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  
  uVar7 = (unsigned __int64)*param_1;
  if (uVar7 != 0) {
    uVar1 = *(unsigned int *)(*param_1 + 4);
    uVar3 = *(unsigned int *)(param_2 + 8) & uVar1;
    uVar8 = (unsigned __int64)uVar3;
    lVar10 = uVar8 * 0x14 + uVar7;
    if ((*(int *)((int)lVar10 + 8) != -2) && ((*(unsigned int *)((int)lVar10 + 0x14) & uVar1) == uVar8)) {
      uVar5 = uVar8;
      uVar11 = 0xffffffffffffffff;
      while( true ) {
        uVar9 = uVar5;
        lVar13 = lVar10 + 8;
        puVar4 = (unsigned int *)lVar13;
        if ((puVar4[3] & uVar1) == uVar8) {
          lVar10 = lVar10 + 0xc;
          cVar6 = fn_827A53E8(lVar10);
          if (cVar6 != '\0') {
            if (uVar3 == (unsigned int)uVar9) {
              if (*puVar4 != 0xffffffff) {
                lVar12 = (unsigned __int64)*puVar4 * 0x14 + uVar7 + 8;
                fn_827A5B60(lVar10,0);
                *puVar4 = 0xfffffffe;
                fn_827A6A50(lVar13,lVar12);
                lVar13 = lVar12;
              }
            }
            else {
              *(unsigned int *)((int)uVar11 * 0x14 + (int)uVar7 + 8) = *puVar4;
            }
            fn_827A5B60(lVar13 + 4,0);
            *(unsigned int *)lVar13 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar2 = *puVar4;
        if (uVar2 == 0xffffffff) break;
        lVar10 = (unsigned __int64)uVar2 * 0x14 + uVar7;
        uVar5 = (unsigned __int64)uVar2;
        uVar11 = uVar9;
      }
      return;
    }
  }
  return;
}

