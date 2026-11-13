#define true 1
extern int fn_8265CA60();
extern int fn_8305D670();
extern int fn_8305D680();


unsigned __int64 fn_8305F828(unsigned __int64 param_1,int *param_2,int param_3,int param_4,unsigned __int64 param_5,
                       unsigned __int64 param_6)

{
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int aiStack_70 [28];
  
  iVar3 = 0;
  do {
    uVar12 = param_5;
    if (iVar3 != 0) {
      uVar12 = param_6;
    }
    lVar10 = 0;
    iVar2 = fn_8305D680(uVar12);
    if (0 < iVar2) {
      do {
        iVar2 = fn_8305D670(uVar12,lVar10);
        if ((iVar2 == param_3) || (iVar2 = fn_8305D670(uVar12,lVar10), iVar2 == param_4)) {
          iVar2 = fn_8305D680(uVar12);
          lVar8 = lVar10 + 1;
          if (iVar2 + -1 <= (int)lVar10) {
            lVar8 = 0;
          }
          iVar2 = fn_8305D670(uVar12,lVar10);
          if (((iVar2 == param_3) && (iVar2 = fn_8305D670(uVar12,lVar8), iVar2 == param_4)) ||
             ((iVar2 = fn_8305D670(uVar12,lVar10), iVar2 == param_4 &&
              (iVar2 = fn_8305D670(uVar12,lVar8), iVar2 == param_3)))) {
            aiStack_70[iVar3 + 2] = (int)lVar8;
            aiStack_70[iVar3] = (int)lVar10;
            break;
          }
        }
        lVar10 = lVar10 + 1;
        iVar2 = fn_8305D680(uVar12);
      } while ((int)lVar10 < iVar2);
    }
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      lVar10 = fn_8305D680(param_5);
      lVar8 = fn_8305D680(param_6);
      uVar7 = lVar8 + lVar10 + -2;
      lVar10 = (uVar7 & 0x3fffffff) << 2;
      if (0x3fffffff < (uVar7 & 0xffffffff)) {
        lVar10 = -1;
      }
      iVar3 = fn_8265CA60(lVar10);
      uVar11 = (unsigned __int64)(unsigned int)aiStack_70[2];
      iVar6 = 0;
      iVar5 = 0;
      iVar2 = fn_8305D680(param_5);
      if (0 < iVar2) {
        puVar9 = (unsigned int *)(iVar3 + -4);
        do {
          uVar4 = fn_8305D670(param_5,uVar11);
          puVar9 = puVar9 + 1;
          *puVar9 = uVar4;
          iVar6 = iVar6 + 1;
          uVar1 = fn_8305D680(param_5);
          iVar5 = iVar5 + 1;
          uVar11 = -(unsigned __int64)(uVar1 != uVar11 + 1) & uVar11 + 1;
          iVar2 = fn_8305D680(param_5);
        } while (iVar5 < iVar2);
      }
      lVar10 = 0;
      uVar11 = 0xffffffffffffffff;
      iVar2 = fn_8305D670(param_6,(unsigned __int64)(unsigned int)aiStack_70[1]);
      iVar5 = fn_8305D670(param_5,aiStack_70[0]);
      if (iVar5 == iVar2) {
        lVar10 = -1;
        uVar11 = (unsigned __int64)(unsigned int)aiStack_70[1] - 1;
      }
      else {
        iVar2 = fn_8305D670(param_6,(unsigned __int64)(unsigned int)aiStack_70[3]);
        iVar5 = fn_8305D670(param_5,aiStack_70[0]);
        if (iVar5 == iVar2) {
          lVar10 = 1;
          uVar11 = (unsigned __int64)(unsigned int)aiStack_70[3] + 1;
        }
      }
      iVar2 = 0;
      lVar8 = fn_8305D680(param_6);
      if (0 < lVar8 + -2) {
        puVar9 = (unsigned int *)(iVar6 * 4 + iVar3 + -4);
        do {
          if ((int)uVar11 == -1) {
            lVar8 = fn_8305D680(param_6);
            uVar11 = lVar8 - 1;
          }
          else {
            uVar1 = fn_8305D680(param_6);
            uVar11 = -(unsigned __int64)(uVar1 != uVar11) & uVar11;
          }
          uVar4 = fn_8305D670(param_6,uVar11);
          puVar9 = puVar9 + 1;
          *puVar9 = uVar4;
          uVar11 = uVar11 + lVar10;
          iVar2 = iVar2 + 1;
          iVar6 = fn_8305D680(param_6);
        } while (iVar2 < iVar6 + -2);
      }
      *param_2 = iVar3;
      return uVar7;
    }
  } while( true );
}

